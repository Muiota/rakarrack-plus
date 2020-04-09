// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "echotron_gui.h"

void EchotronGui::cb_echotron_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Echotron_Bypass);
 return;
}
rkr->Echotron_Bypass=(int)o->value();
if((int) o->value()==0) rkr->efx_Echotron->cleanup();
rgui->findpos(41,(int)o->value(),o);
}
void EchotronGui::cb_echotron_activar(RKR_Light_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_activar_i(o,v);
}

void EchotronGui::cb_echotron_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12041))rkr->efx_Echotron->setpreset((int) o->value());
echotron_pan->value(rkr->efx_Echotron->getpar(11)-64);
echotron_WD->value(Dry_Wet(rkr->efx_Echotron->getpar(0)));
echotron_damp->value(rkr->efx_Echotron->getpar(6));
echotron_fnum->value(rkr->efx_Echotron->getpar(8));
echotron_user->value(rkr->efx_Echotron->getpar(4));
echotron_user->do_callback();
echotron_fb->value(rkr->efx_Echotron->getpar(10));
echotron_tempo->value(rkr->efx_Echotron->getpar(5));
echotron_lfotype->value(rkr->efx_Echotron->getpar(14));
echotron_width->value(rkr->efx_Echotron->getpar(2));
echotron_deep->value(rkr->efx_Echotron->getpar(1)-64);
echotron_lrcross->value(rkr->efx_Echotron->getpar(7)-64);
echotron_stdf->value(rkr->efx_Echotron->getpar(9));
echotron_af->value(rkr->efx_Echotron->getpar(15));
echotron_mf->value(rkr->efx_Echotron->getpar(13));
echotron_md->value(rkr->efx_Echotron->getpar(12));
echotron_length->value(rkr->efx_Echotron->getpar(3));
echotron_length->maximum(rkr->efx_Echotron->File.fLength);
}
void EchotronGui::cb_echotron_preset(Fl_Choice* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_preset_i(o,v);
}

Fl_Menu_Item EchotronGui::menu_echotron_preset[] = {
 {"Summer", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Ambience", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Arranjer", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Suction", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"SuctionFlange", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Soft", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void EchotronGui::cb_echotron_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(348);
 return;
}
rkr->efx_Echotron->changepar(0,Dry_Wet((int)(o->value())));
}
void EchotronGui::cb_echotron_WD(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_WD_i(o,v);
}

void EchotronGui::cb_echotron_pan_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(349);
 return;
}
rkr->efx_Echotron->changepar(11,(int)(o->value()+64));
}
void EchotronGui::cb_echotron_pan(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_pan_i(o,v);
}

void EchotronGui::cb_echotron_tempo_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(350);
 return;
}
rkr->efx_Echotron->changepar(5,(int)o->value());
}
void EchotronGui::cb_echotron_tempo(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_tempo_i(o,v);
}

void EchotronGui::cb_echotron_damp_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(351);
 return;
}
rkr->efx_Echotron->changepar(6,(int)o->value());
}
void EchotronGui::cb_echotron_damp(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_damp_i(o,v);
}

void EchotronGui::cb_echotron_fb_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(352);
 return;
}
rkr->efx_Echotron->changepar(10,(int)o->value());
}
void EchotronGui::cb_echotron_fb(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_fb_i(o,v);
}

void EchotronGui::cb_echotron_lrcross_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(353);
 return;
}
rkr->efx_Echotron->changepar(7,(int)(o->value()+64));
}
void EchotronGui::cb_echotron_lrcross(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_lrcross_i(o,v);
}

void EchotronGui::cb_echotron_width_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(354);
 return;
}
rkr->efx_Echotron->changepar(2,(int)o->value());
}
void EchotronGui::cb_echotron_width(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_width_i(o,v);
}

void EchotronGui::cb_echotron_deep_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(355);
 return;
}
rkr->efx_Echotron->changepar(1,((int)o->value()+64));
}
void EchotronGui::cb_echotron_deep(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_deep_i(o,v);
}

void EchotronGui::cb_echotron_stdf_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(356);
 return;
}
rkr->efx_Echotron->changepar(9,(int)o->value());
}
void EchotronGui::cb_echotron_stdf(SliderW* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_stdf_i(o,v);
}

void EchotronGui::cb_echotron_af_i(RKR_Check_Button* o, void*) {
  rkr->efx_Echotron->changepar(15,(int)o->value());
}
void EchotronGui::cb_echotron_af(RKR_Check_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_af_i(o,v);
}

void EchotronGui::cb_echotron_lfotype_i(Fl_Choice* o, void*) {
  rkr->efx_Echotron->changepar(14,(int)o->value());
}
void EchotronGui::cb_echotron_lfotype(Fl_Choice* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_lfotype_i(o,v);
}

void EchotronGui::cb_echotron_mf_i(RKR_Check_Button* o, void*) {
  rkr->efx_Echotron->changepar(13,(int)o->value());
}
void EchotronGui::cb_echotron_mf(RKR_Check_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_mf_i(o,v);
}

void EchotronGui::cb_echotron_md_i(RKR_Check_Button* o, void*) {
  rkr->efx_Echotron->changepar(12,(int)o->value());
}
void EchotronGui::cb_echotron_md(RKR_Check_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_md_i(o,v);
}

void EchotronGui::cb_echotron_user_i(RKR_Check_Button* o, void*) {
  rkr->efx_Echotron->changepar(4,(int)o->value());

if((int)o->value())B_ech->activate(); else B_ech->deactivate();
}
void EchotronGui::cb_echotron_user(RKR_Check_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_user_i(o,v);
}

void EchotronGui::cb_B_ech_i(RKR_Button*, void*) {
  char *filename;
filename=fl_file_chooser("Load dly File:","(*.dly)",NULL,0);
if (filename==NULL) return;
filename=fl_filename_setext(filename,".dly");
strcpy(rkr->efx_Echotron->Filename,filename);
rkr->efx_Echotron->setfile(USERFILE);
echotron_length->value(rkr->efx_Echotron->getpar(3));
echotron_length->maximum(rkr->efx_Echotron->File.fLength);
}
void EchotronGui::cb_B_ech(RKR_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_B_ech_i(o,v);
}

void EchotronGui::cb_echotron_length_i(Fl_Counter* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(357);
 return;
}
rkr->efx_Echotron->changepar(3,(int)o->value());
}
void EchotronGui::cb_echotron_length(Fl_Counter* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_length_i(o,v);
}

void EchotronGui::cb_echotron_fnum_i(Fl_Choice* o, void*) {
  rkr->efx_Echotron->changepar(8,(int)o->value());
echotron_length->value(rkr->efx_Echotron->getpar(3));
echotron_length->maximum(rkr->efx_Echotron->File.fLength);
}
void EchotronGui::cb_echotron_fnum(Fl_Choice* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_fnum_i(o,v);
}

Fl_Menu_Item EchotronGui::menu_echotron_fnum[] = {
 {"SwingPong", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Short Delays", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Flange + Echo", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Comb", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"EchoFlange", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Filtered Echo", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Notch-Wah", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Multi-Chorus", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"PingPong", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"90-Shifter", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Basic LR Delay", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};
EchotronGui::EchotronGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ echotron_activar = new RKR_Light_Button(6, 4, 34, 18, "On");
  echotron_activar->box(FL_UP_BOX);
  echotron_activar->shortcut(0x35);
  echotron_activar->color((Fl_Color)62);
  echotron_activar->selection_color((Fl_Color)1);
  echotron_activar->labeltype(FL_NORMAL_LABEL);
  echotron_activar->labelfont(0);
  echotron_activar->labelsize(10);
  echotron_activar->labelcolor(FL_FOREGROUND_COLOR);
  echotron_activar->callback((Fl_Callback*)cb_echotron_activar, (void*)(2));
  echotron_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  echotron_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* echotron_activar
{ echotron_preset = new Fl_Choice(79, 4, 76, 18, "Preset");
  echotron_preset->down_box(FL_BORDER_BOX);
  echotron_preset->selection_color(FL_FOREGROUND_COLOR);
  echotron_preset->labelsize(10);
  echotron_preset->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_preset->textsize(10);
  echotron_preset->textcolor(FL_BACKGROUND2_COLOR);
  echotron_preset->callback((Fl_Callback*)cb_echotron_preset, (void*)(12041));
  echotron_preset->when(FL_WHEN_RELEASE_ALWAYS);
  echotron_preset->menu(menu_echotron_preset);
} // Fl_Choice* echotron_preset
{ echotron_WD = new SliderW(56, 25, 100, 10, "Dry/Wet");
  echotron_WD->type(5);
  echotron_WD->box(FL_FLAT_BOX);
  echotron_WD->color((Fl_Color)178);
  echotron_WD->selection_color((Fl_Color)62);
  echotron_WD->labeltype(FL_NORMAL_LABEL);
  echotron_WD->labelfont(0);
  echotron_WD->labelsize(10);
  echotron_WD->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_WD->maximum(127);
  echotron_WD->step(1);
  echotron_WD->textcolor(FL_BACKGROUND2_COLOR);
  echotron_WD->callback((Fl_Callback*)cb_echotron_WD);
  echotron_WD->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_WD->when(FL_WHEN_CHANGED);
} // SliderW* echotron_WD
{ echotron_pan = new SliderW(56, 37, 100, 10, "Pan");
  echotron_pan->type(5);
  echotron_pan->box(FL_FLAT_BOX);
  echotron_pan->color((Fl_Color)178);
  echotron_pan->selection_color((Fl_Color)62);
  echotron_pan->labeltype(FL_NORMAL_LABEL);
  echotron_pan->labelfont(0);
  echotron_pan->labelsize(10);
  echotron_pan->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_pan->minimum(-64);
  echotron_pan->maximum(63);
  echotron_pan->step(1);
  echotron_pan->textcolor(FL_BACKGROUND2_COLOR);
  echotron_pan->callback((Fl_Callback*)cb_echotron_pan);
  echotron_pan->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_pan->when(FL_WHEN_CHANGED);
} // SliderW* echotron_pan
{ echotron_tempo = new SliderW(56, 49, 100, 10, "Tempo");
  echotron_tempo->type(5);
  echotron_tempo->box(FL_FLAT_BOX);
  echotron_tempo->color((Fl_Color)178);
  echotron_tempo->selection_color((Fl_Color)62);
  echotron_tempo->labeltype(FL_NORMAL_LABEL);
  echotron_tempo->labelfont(0);
  echotron_tempo->labelsize(10);
  echotron_tempo->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_tempo->minimum(1);
  echotron_tempo->maximum(600);
  echotron_tempo->step(1);
  echotron_tempo->value(60);
  echotron_tempo->textcolor(FL_BACKGROUND2_COLOR);
  echotron_tempo->callback((Fl_Callback*)cb_echotron_tempo);
  echotron_tempo->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_tempo->when(FL_WHEN_RELEASE);
} // SliderW* echotron_tempo
{ echotron_damp = new SliderW(56, 61, 100, 10, "Damp");
  echotron_damp->type(5);
  echotron_damp->box(FL_FLAT_BOX);
  echotron_damp->color((Fl_Color)178);
  echotron_damp->selection_color((Fl_Color)62);
  echotron_damp->labeltype(FL_NORMAL_LABEL);
  echotron_damp->labelfont(0);
  echotron_damp->labelsize(10);
  echotron_damp->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_damp->maximum(127);
  echotron_damp->step(1);
  echotron_damp->textcolor(FL_BACKGROUND2_COLOR);
  echotron_damp->callback((Fl_Callback*)cb_echotron_damp);
  echotron_damp->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_damp->when(FL_WHEN_CHANGED);
} // SliderW* echotron_damp
{ echotron_fb = new SliderW(56, 73, 100, 10, "Feedback");
  echotron_fb->type(5);
  echotron_fb->box(FL_FLAT_BOX);
  echotron_fb->color((Fl_Color)178);
  echotron_fb->selection_color((Fl_Color)62);
  echotron_fb->labeltype(FL_NORMAL_LABEL);
  echotron_fb->labelfont(0);
  echotron_fb->labelsize(10);
  echotron_fb->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_fb->minimum(-64);
  echotron_fb->maximum(64);
  echotron_fb->step(1);
  echotron_fb->textcolor(FL_BACKGROUND2_COLOR);
  echotron_fb->callback((Fl_Callback*)cb_echotron_fb);
  echotron_fb->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_fb->when(FL_WHEN_CHANGED);
} // SliderW* echotron_fb
{ echotron_lrcross = new SliderW(56, 85, 100, 10, "L/R Cross");
  echotron_lrcross->type(5);
  echotron_lrcross->box(FL_FLAT_BOX);
  echotron_lrcross->color((Fl_Color)178);
  echotron_lrcross->selection_color((Fl_Color)62);
  echotron_lrcross->labeltype(FL_NORMAL_LABEL);
  echotron_lrcross->labelfont(0);
  echotron_lrcross->labelsize(10);
  echotron_lrcross->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_lrcross->minimum(-64);
  echotron_lrcross->maximum(64);
  echotron_lrcross->step(1);
  echotron_lrcross->textcolor(FL_BACKGROUND2_COLOR);
  echotron_lrcross->callback((Fl_Callback*)cb_echotron_lrcross);
  echotron_lrcross->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_lrcross->when(FL_WHEN_CHANGED);
} // SliderW* echotron_lrcross
{ echotron_width = new SliderW(56, 97, 100, 10, "Width");
  echotron_width->type(5);
  echotron_width->box(FL_FLAT_BOX);
  echotron_width->color((Fl_Color)178);
  echotron_width->selection_color((Fl_Color)62);
  echotron_width->labeltype(FL_NORMAL_LABEL);
  echotron_width->labelfont(0);
  echotron_width->labelsize(10);
  echotron_width->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_width->maximum(127);
  echotron_width->step(1);
  echotron_width->textcolor(FL_BACKGROUND2_COLOR);
  echotron_width->callback((Fl_Callback*)cb_echotron_width);
  echotron_width->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_width->when(FL_WHEN_RELEASE);
} // SliderW* echotron_width
{ echotron_deep = new SliderW(56, 109, 100, 10, "Depth");
  echotron_deep->type(5);
  echotron_deep->box(FL_FLAT_BOX);
  echotron_deep->color((Fl_Color)178);
  echotron_deep->selection_color((Fl_Color)62);
  echotron_deep->labeltype(FL_NORMAL_LABEL);
  echotron_deep->labelfont(0);
  echotron_deep->labelsize(10);
  echotron_deep->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_deep->minimum(-64);
  echotron_deep->maximum(64);
  echotron_deep->step(1);
  echotron_deep->textcolor(FL_BACKGROUND2_COLOR);
  echotron_deep->callback((Fl_Callback*)cb_echotron_deep);
  echotron_deep->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_deep->when(FL_WHEN_RELEASE);
} // SliderW* echotron_deep
{ echotron_stdf = new SliderW(56, 121, 100, 10, "Stereo Df");
  echotron_stdf->type(5);
  echotron_stdf->box(FL_FLAT_BOX);
  echotron_stdf->color((Fl_Color)178);
  echotron_stdf->selection_color((Fl_Color)62);
  echotron_stdf->labeltype(FL_NORMAL_LABEL);
  echotron_stdf->labelfont(0);
  echotron_stdf->labelsize(10);
  echotron_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_stdf->maximum(127);
  echotron_stdf->step(1);
  echotron_stdf->textcolor(FL_BACKGROUND2_COLOR);
  echotron_stdf->callback((Fl_Callback*)cb_echotron_stdf);
  echotron_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_stdf->when(FL_WHEN_CHANGED);
} // SliderW* echotron_stdf
{ echotron_af = new RKR_Check_Button(2, 136, 32, 15, "AF");
  echotron_af->box(FL_NO_BOX);
  echotron_af->down_box(FL_BORDER_BOX);
  echotron_af->color(FL_BACKGROUND_COLOR);
  echotron_af->selection_color(FL_FOREGROUND_COLOR);
  echotron_af->labeltype(FL_NORMAL_LABEL);
  echotron_af->labelfont(0);
  echotron_af->labelsize(10);
  echotron_af->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_af->callback((Fl_Callback*)cb_echotron_af, (void*)(2));
  echotron_af->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  echotron_af->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* echotron_af
{ Fl_Choice* o = echotron_lfotype = new Fl_Choice(88, 135, 64, 16, "LFO Type");
  echotron_lfotype->down_box(FL_BORDER_BOX);
  echotron_lfotype->selection_color(FL_FOREGROUND_COLOR);
  echotron_lfotype->labelsize(10);
  echotron_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_lfotype->textsize(10);
  echotron_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  echotron_lfotype->callback((Fl_Callback*)cb_echotron_lfotype);
  o->menu(m_lfo_menu->get_lfo_type());
} // Fl_Choice* echotron_lfotype
{ echotron_mf = new RKR_Check_Button(2, 151, 33, 15, "MF");
  echotron_mf->box(FL_NO_BOX);
  echotron_mf->down_box(FL_BORDER_BOX);
  echotron_mf->color(FL_BACKGROUND_COLOR);
  echotron_mf->selection_color(FL_FOREGROUND_COLOR);
  echotron_mf->labeltype(FL_NORMAL_LABEL);
  echotron_mf->labelfont(0);
  echotron_mf->labelsize(10);
  echotron_mf->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_mf->callback((Fl_Callback*)cb_echotron_mf, (void*)(2));
  echotron_mf->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  echotron_mf->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* echotron_mf
{ echotron_md = new RKR_Check_Button(33, 151, 34, 15, "MD");
  echotron_md->box(FL_NO_BOX);
  echotron_md->down_box(FL_BORDER_BOX);
  echotron_md->color(FL_BACKGROUND_COLOR);
  echotron_md->selection_color(FL_FOREGROUND_COLOR);
  echotron_md->labeltype(FL_NORMAL_LABEL);
  echotron_md->labelfont(0);
  echotron_md->labelsize(10);
  echotron_md->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_md->callback((Fl_Callback*)cb_echotron_md, (void*)(2));
  echotron_md->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  echotron_md->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* echotron_md
{ echotron_user = new RKR_Check_Button(67, 154, 39, 15, "User");
  echotron_user->box(FL_NO_BOX);
  echotron_user->down_box(FL_BORDER_BOX);
  echotron_user->color(FL_BACKGROUND_COLOR);
  echotron_user->selection_color(FL_FOREGROUND_COLOR);
  echotron_user->labeltype(FL_NORMAL_LABEL);
  echotron_user->labelfont(0);
  echotron_user->labelsize(10);
  echotron_user->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_user->callback((Fl_Callback*)cb_echotron_user, (void*)(2));
  echotron_user->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  echotron_user->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* echotron_user
{ B_ech = new RKR_Button(106, 156, 46, 10, "Browse");
  B_ech->box(FL_UP_BOX);
  B_ech->color(FL_BACKGROUND_COLOR);
  B_ech->selection_color(FL_BACKGROUND_COLOR);
  B_ech->labeltype(FL_NORMAL_LABEL);
  B_ech->labelfont(0);
  B_ech->labelsize(10);
  B_ech->labelcolor(FL_FOREGROUND_COLOR);
  B_ech->callback((Fl_Callback*)cb_B_ech, (void*)(2));
  B_ech->align(Fl_Align(FL_ALIGN_CENTER));
  B_ech->when(FL_WHEN_RELEASE);
  B_ech->deactivate();
} // RKR_Button* B_ech
{ echotron_length = new Fl_Counter(16, 167, 48, 12, "#");
  echotron_length->type(1);
  echotron_length->labelsize(10);
  echotron_length->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_length->minimum(1);
  echotron_length->maximum(127);
  echotron_length->step(1);
  echotron_length->value(1);
  echotron_length->textsize(9);
  echotron_length->callback((Fl_Callback*)cb_echotron_length);
  echotron_length->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_length->when(FL_WHEN_RELEASE);
} // Fl_Counter* echotron_length
{ echotron_fnum = new Fl_Choice(88, 168, 64, 14, "File");
  echotron_fnum->down_box(FL_BORDER_BOX);
  echotron_fnum->selection_color(FL_FOREGROUND_COLOR);
  echotron_fnum->labelsize(10);
  echotron_fnum->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_fnum->textsize(10);
  echotron_fnum->textcolor(FL_BACKGROUND2_COLOR);
  echotron_fnum->callback((Fl_Callback*)cb_echotron_fnum, (void*)(12));
  echotron_fnum->menu(menu_echotron_fnum);
} // Fl_Choice* echotron_fnum
position(X, Y);
end();
}
