// generated by Fast Light User Interface Designer (fluid) version 1.0305

#include "cabinet_gui.h"

void CabinetGui::cb_Cabinet_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Cabinet_Bypass);
 return;
}
rkr->Cabinet_Bypass=(int)o->value();
rgui->findpos(12,(int)o->value(),o);
}
void CabinetGui::cb_Cabinet_activar(RKR_Light_Button* o, void* v) {
  ((CabinetGui*)(o->parent()))->cb_Cabinet_activar_i(o,v);
}

void CabinetGui::cb_Cabinet_preset_i(RKR_Choice* o, void*) {
  rkr->efx_Cabinet->setpreset((int) o->value());
}
void CabinetGui::cb_Cabinet_preset(RKR_Choice* o, void* v) {
  ((CabinetGui*)(o->parent()))->cb_Cabinet_preset_i(o,v);
}

Fl_Menu_Item CabinetGui::menu_Cabinet_preset[] = {
 {"Marshall-4-12", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Celestion G12M", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Jensen Alnico P12N", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Jensen Alnico P15N", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Delta Demon", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Celestion-EVH12", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Eminence Copperhead", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Mesa Boogie", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Jazz-Chorus", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Vox-Bright", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Marshall-I", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void CabinetGui::cb_Cabinet_output_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(405);
 return;
} 

rkr->efx_Cabinet->changepar(0,(int)(o->value()+64));
}
void CabinetGui::cb_Cabinet_output(RKR_Slider* o, void* v) {
  ((CabinetGui*)(o->parent()))->cb_Cabinet_output_i(o,v);
}
CabinetGui::CabinetGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ Cabinet_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  Cabinet_activar->box(FL_UP_BOX);
  Cabinet_activar->shortcut(0x32);
  Cabinet_activar->color((Fl_Color)62);
  Cabinet_activar->selection_color((Fl_Color)1);
  Cabinet_activar->labeltype(FL_NORMAL_LABEL);
  Cabinet_activar->labelfont(0);
  Cabinet_activar->labelsize(10);
  Cabinet_activar->labelcolor(FL_FOREGROUND_COLOR);
  Cabinet_activar->callback((Fl_Callback*)cb_Cabinet_activar, (void*)(2));
  Cabinet_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  Cabinet_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* Cabinet_activar
{ Cabinet_preset = new RKR_Choice(45, 45, 106, 18, "Preset");
  Cabinet_preset->box(FL_FLAT_BOX);
  Cabinet_preset->down_box(FL_BORDER_BOX);
  Cabinet_preset->color(FL_BACKGROUND_COLOR);
  Cabinet_preset->selection_color(FL_FOREGROUND_COLOR);
  Cabinet_preset->labeltype(FL_NORMAL_LABEL);
  Cabinet_preset->labelfont(0);
  Cabinet_preset->labelsize(10);
  Cabinet_preset->labelcolor(FL_BACKGROUND2_COLOR);
  Cabinet_preset->textsize(10);
  Cabinet_preset->textcolor(FL_BACKGROUND2_COLOR);
  Cabinet_preset->callback((Fl_Callback*)cb_Cabinet_preset, (void*)(12012));
  Cabinet_preset->align(Fl_Align(FL_ALIGN_LEFT));
  Cabinet_preset->when(FL_WHEN_RELEASE_ALWAYS);
  Cabinet_preset->menu(menu_Cabinet_preset);
} // RKR_Choice* Cabinet_preset
{ Cabinet_output = new RKR_Slider(53, 92, 100, 10, "Gain");
  Cabinet_output->type(5);
  Cabinet_output->box(FL_FLAT_BOX);
  Cabinet_output->color((Fl_Color)178);
  Cabinet_output->selection_color((Fl_Color)62);
  Cabinet_output->labeltype(FL_NORMAL_LABEL);
  Cabinet_output->labelfont(0);
  Cabinet_output->labelsize(10);
  Cabinet_output->labelcolor(FL_BACKGROUND2_COLOR);
  Cabinet_output->minimum(-64);
  Cabinet_output->maximum(63);
  Cabinet_output->step(1);
  Cabinet_output->textcolor(FL_BACKGROUND2_COLOR);
  Cabinet_output->callback((Fl_Callback*)cb_Cabinet_output);
  Cabinet_output->align(Fl_Align(FL_ALIGN_LEFT));
  Cabinet_output->when(FL_WHEN_CHANGED);
} // RKR_Slider* Cabinet_output
position(X, Y);
end();
}
