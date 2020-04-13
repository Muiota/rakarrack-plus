/*
  RKR_Menu_Bar.cxx

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
 * File:   RKR_Menu_Bar.cxx
 * Author: sspresto
 * 
 * Created on April 11, 2020, 8:25 AM
 */

#include "RKR_Menu_Bar.h"
#include <vector>
#include <string>
#include "../global.h"

/* All the sub menu paths for resizing - ugly hack... */
const std::vector<std::string> menu_paths
{
    /* Main Window - From RKRGUI::menu_MenuP[] */
    "&File/New",
    "&File/Load Preset",
    "&File/Save Preset",
    "&File/Load &Bank",
    "&File/Save B&ank",
    "&File/Load S&kin",
    "&File/Save Sk&in",
    "&File/Load MIDI Table",
    "&File/Save MIDI Table",
    "&File/&Convert Reverb IR File",
    "&File/Import Internal Presets",
    "&File/Exit",
    "&Settings/Preferences",
    "&Settings/MIDI Learn",
    "&Settings/ACI",
    "&Settings/Fullscreen",
    "&Help/Help Contents",
    "&Help/About...",
    /* Bank Window - From BankWindowGui::menu_MenuB[] */
    "&File/&New",
    "&File/&Load Bank",
    "&File/&Save Bank",
    "&File/Convert &Old Bank",
    "&File/&Close",
    "&Help/Help &Contents",
    "&Help/&About..."
};

RKR_Menu_Bar::RKR_Menu_Bar(int X, int Y, int W, int H, const char *label) : Fl_Menu_Bar(X, Y, W, H, label)
{
    m_previous_font_size = g_default_font_size;
    m_start_width = W;
    m_start_height = H;
    m_start_font_offset = 0;
//    this->user_data((void*)(BOX_USER_DATA));
}

void RKR_Menu_Bar::draw()
{
    /* To update the font size if user changes the value in settings */
    if(g_default_font_size != m_previous_font_size)
    {
        m_previous_font_size = g_default_font_size;
        font_resize(w(), h());
    }

    Fl_Menu_Bar::draw();
}

void RKR_Menu_Bar::font_resize(int W, int H)
{
    float W_ratio = (float) W / m_start_width;
    float H_ratio = (float) H / m_start_height;
    float resize_ratio = (W_ratio < H_ratio) ? W_ratio : H_ratio;
    
    int font_size = g_default_font_size + m_start_font_offset;
    int adjusted_label_size = (float) (font_size * resize_ratio);
    
    /* The submenu items */
    for(unsigned i = 0; i < menu_paths.size(); i++)
    {
        Fl_Menu_Item *sm = (Fl_Menu_Item*) find_item(menu_paths[i].c_str());
    
        if(sm)
        {
            sm->labelsize(adjusted_label_size);
        }
    }
    
    /* The Menu Bar items */
    Fl_Menu_Item *m = (Fl_Menu_Item*) menu();
    
    if(!m)
    {
        return;
    }
    
    Fl_Menu_Item *p;
    
    for (int s = 0; s < m->size(); s++)
    {
        p = m->next(s);
        p->labelsize(adjusted_label_size);   /* Menu bar items */
    }
}

void RKR_Menu_Bar::resize(int X, int Y, int W, int H)
{
    /* Resize the text and labels */
    font_resize(W, H);

    Fl_Menu_Bar::resize(X, Y, W, H);
}