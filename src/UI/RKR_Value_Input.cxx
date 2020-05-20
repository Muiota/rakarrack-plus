/*
  RKR_Value_Input.cxx

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

/*
  This override class had been modified from the original Fl_Value_Input class to 
  allow for keyboard input handling and auto resizing of fonts. 
 */

// FLTK widget for drag-adjusting a floating point value.
// Warning: this works by making a child Fl_Input object, even
// though this object is *not* an Fl_Group.  May be a kludge?

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <stdlib.h>
#include <FL/math.h>

#include "RKR_Value_Input.h"
#include "../global.h"

/**
  Creates a new RKR_Value_Input widget using the given
  position, size, and label string. The default boxtype is
  FL_DOWN_BOX.
 */
RKR_Value_Input::RKR_Value_Input(int X, int Y, int W, int H, const char* l) :
    Fl_Valuator(X, Y, W, H, l),
    input(X, Y, W, H, 0),
    soft_(0),
    m_label_offset(0),      // C_DEFAULT_FONT_SIZE
    m_text_offset(0),       // C_DEFAULT_FONT_SIZE
    m_start_width(W),
    m_start_height(H),
    m_previous_font_size(global_font_size),
    m_delay_file(false)
{
    if (input.parent()) // defeat automatic-add
        input.parent()->remove(input);
    input.parent((Fl_Group *)this); // kludge!
    input.callback(input_cb, this);
    input.when(FL_WHEN_CHANGED);
    box(input.box());
    color(input.color());
    selection_color(input.selection_color());
    align(FL_ALIGN_LEFT);
    value_damage();
    set_flag(SHORTCUT_LABEL);
}

RKR_Value_Input::~RKR_Value_Input()
{

    if (input.parent() == (Fl_Group *)this)
        input.parent(0); // *revert* ctor kludge!
}


void RKR_Value_Input::draw()
{
    /* To update the font size if user changes the value in settings rakarrack+ */
    if(global_font_size != m_previous_font_size)
    {
        m_previous_font_size = global_font_size;
        font_resize(w(), h());
    }
    
    if (damage()&~FL_DAMAGE_CHILD) input.clear_damage(FL_DAMAGE_ALL);
    input.box(box());
    input.color(color(), selection_color());
    Fl_Widget *i = &input;
    i->draw(); // calls protected input.draw()
    input.clear_damage();
}

/**
 *  Rakarrack+ font resize routine.
 * 
 * @param W
 * @param H
 */
void RKR_Value_Input::font_resize(int W, int H)
{
    float W_ratio = (float) W / m_start_width;
    float H_ratio = (float) H / m_start_height;
    float resize_ratio = (W_ratio < H_ratio) ? W_ratio : H_ratio;
    
    int font_size = global_font_size + m_label_offset;
    int adjusted_label_size = (float) (font_size * resize_ratio);
    
    labelsize(adjusted_label_size);
    
    int text_font_size = global_font_size + m_text_offset;
    int adjusted_text_size = (float) (text_font_size * resize_ratio);
    
    textsize(adjusted_text_size);
}

void RKR_Value_Input::set_delay_file()
{
    m_delay_file = true;
    input.set_delay_file ();
}

void RKR_Value_Input::resize(int X, int Y, int W, int H)
{
    /* Resize the text and labels rakarrack+ */
    font_resize(W, H);

    Fl_Valuator::resize(X, Y, W, H);
    input.resize(X, Y, W, H);
}

void RKR_Value_Input::input_cb(Fl_Widget*, void* v)
{
    RKR_Value_Input& t = *(RKR_Value_Input*) v;
    double nv;
    if ((t.step() - floor(t.step())) > 0.0 || t.step() == 0.0) nv = strtod(t.input.value(), 0);
    else nv = strtol(t.input.value(), 0, 0);
    if (nv != t.value() || t.when() & FL_WHEN_NOT_CHANGED)
    {
        t.set_value(nv);
        t.set_changed();
        if (t.when()) t.do_callback();
    }
}

void RKR_Value_Input::value_damage()
{
    char buf[128];
    format(buf);
    input.value(buf);
    input.mark(input.position()); // turn off selection highlight
}

int RKR_Value_Input::handle(int event)
{
    /* Rakarrack special case events */
    
    if(!m_delay_file)
    {

        /* Right mouse button - pop up MIDI learn */
        if(Fl::event_button()== FL_RIGHT_MOUSE)
        {
            if (Fl::event_inside(x(), y(), w(), h()))
            {
                if (event == FL_RELEASE /* || event == FL_PUSH || event == FL_DRAG*/)
                {
                    /* The callback will trigger MIDI learn based on FL_RIGHT_MOUSE */
                    do_callback();
                }
            }

            /* Ignore all other right mouse events */
            return 1;
        }

        /* Need to handle focus to get keyboard events */
        if (event == FL_FOCUS)
        {
            textcolor(leds_color);
            redraw();
            return 1;   // says we handed it
        }

        /* Revert color */
        if(event == FL_UNFOCUS)
        {
            textcolor(label_color);
            redraw();
            return 1;
        }

        /* Change text color on focus */
        if ((Fl::focus() == &input || Fl::focus() == this))
        {
            textcolor(leds_color);
            redraw();
        }

        if(event == FL_KEYBOARD)
        {
            int mul = 1;
            if (Fl::event_state(FL_SHIFT))
            {
                mul = 10;
            }
            else if (Fl::event_state(FL_CTRL))
            {
                mul = 100;
            }

            switch (Fl::event_key())
            {
                case FL_Right:
                    handle_drag(clamp(increment(value(), 1 * mul)));
                    return 1;
                case FL_Left:
                    handle_drag(clamp(increment(value(), -1 * mul)));
                    return 1;
                default:
                return 0;
            }   
        }

        if(event == FL_MOUSEWHEEL)
        {
            if (Fl::e_dy == 0) return 0;
            handle_push();
            handle_drag(clamp(increment(value(), Fl::e_dy)));
            handle_release();
            return 1;
        }
    }   // !m_delay_file

    /* Normal FL_Value_Input handling */

    double v;
    int delta;
    int mx = Fl::event_x_root();
    static int ix, drag;
    input.when(when());
    switch (event)
    {
    case FL_PUSH:
        if (!step()) goto DEFAULT;
        ix = mx;
        drag = Fl::event_button();
        handle_push();
        return 1;
    case FL_DRAG:
        if (!step()) goto DEFAULT;
        delta = mx - ix;
        if (delta > 5) delta -= 5;
        else if (delta < -5) delta += 5;
        else delta = 0;
        switch (drag)
        {
        case 3: v = increment(previous_value(), delta * 100);
            break;
        case 2: v = increment(previous_value(), delta * 10);
            break;
        default:v = increment(previous_value(), delta);
            break;
        }
        v = round(v);
        handle_drag(soft() ? softclamp(v) : clamp(v));
        ;
        return 1;
    case FL_RELEASE:
        if (!step()) goto DEFAULT;
        if (value() != previous_value() || !Fl::event_is_click())
            handle_release();
        else
        {
            Fl_Widget_Tracker wp(&input);
            input.handle(FL_PUSH);
            if (wp.exists())
                input.handle(FL_RELEASE);
        }
        return 1;
    case FL_FOCUS:
        return input.take_focus();
    case FL_SHORTCUT:
        return input.handle(event);
    default:
        DEFAULT :
                input.type(((step() - floor(step())) > 0.0 || step() == 0.0) ? FL_FLOAT_INPUT : FL_INT_INPUT);
        return input.handle(event);
    }
}

//
// End of "$Id: RKR_Value_Input.cxx 8864 2011-07-19 04:49:30Z greg.ercolano $".
//
