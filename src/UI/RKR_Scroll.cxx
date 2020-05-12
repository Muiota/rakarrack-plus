/*
  RKR_Scroll.cxx

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
 * File:   RKR_Scroll.cxx
 * Author: sspresto
 * 
 * Created on April 15, 2020, 8:16 AM
 */

#include "RKR_Scroll.h"
#include "../global.h"  /* c_bank_used, c_bank_number */
#include "RKR_Choice.h"
#include "RKR_Box.h"
#include "RKR_Group.h"

RKR_Scroll::RKR_Scroll(int X, int Y, int W, int H, const char *label) :
    Fl_Scroll(X, Y, W, H, label),
    m_label_offset(0),      // C_DEFAULT_FONT_SIZE
    m_start_x(X),
    m_start_y(Y),
    m_start_width(W),
    m_start_height(H),
    m_delay_scroll(false),
    m_previous_font_size(global_font_size)
{
}

void RKR_Scroll::draw()
{
    /* To update the font size if user changes the value in settings */
    if(global_font_size != m_previous_font_size)
    {
        m_previous_font_size = global_font_size;
        font_resize(w(), h());
    }

    Fl_Scroll::draw();
}

void RKR_Scroll::resize(int X, int Y, int W, int H)
{
    /* Resize the labels */
    font_resize(W, H);
    
    float W_ratio = (float) W / m_start_width;
    float H_ratio = (float) H / m_start_height;
    
    if(m_delay_scroll)
    {
        for (int i = 0; i < children(); ++i)
        {
            Fl_Widget *c = child(i);

            long long ud = (long long) c->user_data();
            
            if(ud == c_delay_group)
            {
                RKR_Group *g_choice = (RKR_Group *) c;
                
                g_choice->resize
                (
                    (g_choice->get_start_x() + m_start_x) * W_ratio,
                    (30 * i) * H_ratio,
                    (g_choice->get_start_width()) * W_ratio ,
                    g_choice->get_start_height() * H_ratio
                );
            }
        }
    }
    else    // settings/MIDI
    {
        for (int i = 0; i < children(); ++i)
        {
            Fl_Widget *c = child(i);

            long long ud = (long long) c->user_data();

            if(ud >= c_bank_used && ud < c_bank_number)
            {
                RKR_Choice *c_choice = (RKR_Choice *) c;

                c_choice->resize
                (
                    (c_choice->get_start_x()* W_ratio),
                    (c_choice->get_start_y() + m_start_y - 20) * H_ratio,   // 20 is height of RKR_Choice
                    (c_choice->get_start_width()) * W_ratio ,
                    c_choice->get_start_height() * H_ratio
                );
            }
            else if(ud >= c_bank_number)
            {
                RKR_Box *c_box = (RKR_Box *) c;
                c_box->resize
                (
                    (c_box->get_start_x() + m_start_x )* W_ratio,
                    (c_box->get_start_y() + m_start_y - 20) * H_ratio,      // 20 is height of RKR_Choice
                    (c_box->get_start_width() * W_ratio),
                    c_box->get_start_height() * H_ratio
                );
            }
        }
    }
    Fl_Scroll::resize(X, Y, W, H);
}

void RKR_Scroll::font_resize(int W, int H)
{
    float W_ratio = (float) W / m_start_width;
    float H_ratio = (float) H / m_start_height;
    float resize_ratio = (W_ratio < H_ratio) ? W_ratio : H_ratio;
    
    int font_size = global_font_size + m_label_offset;
    int adjusted_label_size = (float) (font_size * resize_ratio);
    
    labelsize(adjusted_label_size);
}
