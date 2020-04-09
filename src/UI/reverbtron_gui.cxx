// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "reverbtron_gui.h"

void RevtronGui::cb_revtron_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Reverbtron_Bypass);
 return;
}
rkr->Reverbtron_Bypass=(int)o->value();
if((int) o->value()==0) rkr->efx_Reverbtron->cleanup();
rgui->findpos(40,(int)o->value(),o);
}
void RevtronGui::cb_revtron_activar(RKR_Light_Button* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_activar_i(o,v);
}

void RevtronGui::cb_revtron_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12040))rkr->efx_Reverbtron->setpreset((int) o->value());
revtron_pan->value(rkr->efx_Reverbtron->getpar(11)-64);
revtron_level->value(rkr->efx_Reverbtron->getpar(7));
revtron_WD->value(Dry_Wet(rkr->efx_Reverbtron->getpar(0)));
revtron_damp->value(rkr->efx_Reverbtron->getpar(6));
revtron_fnum->value(rkr->efx_Reverbtron->getpar(8));
revtron_length->value(rkr->efx_Reverbtron->getpar(3));
revtron_strech->value(rkr->efx_Reverbtron->getpar(9));
revtron_safe->value(rkr->efx_Reverbtron->getpar(2));
revtron_user->value(rkr->efx_Reverbtron->getpar(4));
revtron_user->do_callback();
revtron_fb->value(rkr->efx_Reverbtron->getpar(10));
revtron_fade->value(rkr->efx_Reverbtron->getpar(1));
revtron_idelay->value(rkr->efx_Reverbtron->getpar(5));
revtron_LPF->value(rkr->efx_Reverbtron->getpar(14));
revtron_diff->value(rkr->efx_Reverbtron->getpar(15));

revtron_es->value(rkr->efx_Reverbtron->getpar(12));
revtron_rv->value(rkr->efx_Reverbtron->getpar(13));
}
void RevtronGui::cb_revtron_preset(Fl_Choice* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_preset_i(o,v);
}

Fl_Menu_Item RevtronGui::menu_revtron_preset[] = {
 {"Chamber", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Concrete Stairwell", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Hall", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Medium Hall", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Room", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Large Hall", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Guitar", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Studio", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Cathedral", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {0,0,0,0,0,0,0,0,0}
};

void RevtronGui::cb_revtron_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(339);
 return;
}
rkr->efx_Reverbtron->changepar(0,Dry_Wet((int)(o->value())));
}
void RevtronGui::cb_revtron_WD(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_WD_i(o,v);
}

void RevtronGui::cb_revtron_pan_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(340);
 return;
}
rkr->efx_Reverbtron->changepar(11,(int)(o->value()+64));
}
void RevtronGui::cb_revtron_pan(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_pan_i(o,v);
}

void RevtronGui::cb_revtron_level_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(341);
 return;
}
rkr->efx_Reverbtron->changepar(7,(int)o->value());
}
void RevtronGui::cb_revtron_level(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_level_i(o,v);
}

void RevtronGui::cb_revtron_damp_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(342);
 return;
}
rkr->efx_Reverbtron->changepar(6,(int)o->value());
}
void RevtronGui::cb_revtron_damp(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_damp_i(o,v);
}

void RevtronGui::cb_revtron_fb_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(343);
 return;
}
rkr->efx_Reverbtron->changepar(10,(int)o->value());
}
void RevtronGui::cb_revtron_fb(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_fb_i(o,v);
}

void RevtronGui::cb_revtron_length_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(344);
 return;
}
rkr->efx_Reverbtron->changepar(3,(int)o->value());
}
void RevtronGui::cb_revtron_length(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_length_i(o,v);
}

void RevtronGui::cb_revtron_strech_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(345);
 return;
}
rkr->efx_Reverbtron->changepar(9,(int)o->value());
}
void RevtronGui::cb_revtron_strech(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_strech_i(o,v);
}

void RevtronGui::cb_revtron_idelay_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(346);
 return;
}
rkr->efx_Reverbtron->changepar(5,(int)o->value());
}
void RevtronGui::cb_revtron_idelay(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_idelay_i(o,v);
}

void RevtronGui::cb_revtron_fade_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(347);
 return;
}
rkr->efx_Reverbtron->changepar(1,(int)o->value());
}
void RevtronGui::cb_revtron_fade(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_fade_i(o,v);
}

void RevtronGui::cb_revtron_diff_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(442);
 return;
}
rkr->efx_Reverbtron->changepar(15,(int)o->value());
}
void RevtronGui::cb_revtron_diff(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_diff_i(o,v);
}

void RevtronGui::cb_revtron_LPF_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(443);
 return;
}
rkr->efx_Reverbtron->changepar(14,(int)o->value());
}
void RevtronGui::cb_revtron_LPF(SliderW* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_LPF_i(o,v);
}

void RevtronGui::cb_revtron_rv_i(RKR_Check_Button* o, void*) {
  rkr->efx_Reverbtron->changepar(13,(int)o->value());
}
void RevtronGui::cb_revtron_rv(RKR_Check_Button* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_rv_i(o,v);
}

void RevtronGui::cb_revtron_es_i(RKR_Check_Button* o, void*) {
  rkr->efx_Reverbtron->changepar(12,(int)o->value());
}
void RevtronGui::cb_revtron_es(RKR_Check_Button* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_es_i(o,v);
}

void RevtronGui::cb_revtron_safe_i(RKR_Check_Button* o, void*) {
  rkr->efx_Reverbtron->changepar(2,(int)o->value());
}
void RevtronGui::cb_revtron_safe(RKR_Check_Button* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_safe_i(o,v);
}

void RevtronGui::cb_revtron_user_i(RKR_Check_Button* o, void*) {
  rkr->efx_Reverbtron->changepar(4,(int)o->value());

if((int)o->value())B_rvb->activate(); else B_rvb->deactivate();
}
void RevtronGui::cb_revtron_user(RKR_Check_Button* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_user_i(o,v);
}

void RevtronGui::cb_B_rvb_i(RKR_Button*, void*) {
  char *filename;
filename=fl_file_chooser("Load rvb File:","(*.rvb)",NULL,0);
if (filename==NULL) return;
filename=fl_filename_setext(filename,".rvb");
strcpy(rkr->efx_Reverbtron->Filename,filename);
rkr->efx_Reverbtron->setfile(USERFILE);
}
void RevtronGui::cb_B_rvb(RKR_Button* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_B_rvb_i(o,v);
}

void RevtronGui::cb_revtron_fnum_i(Fl_Choice* o, void*) {
  rkr->efx_Reverbtron->changepar(8,(int)o->value());
}
void RevtronGui::cb_revtron_fnum(Fl_Choice* o, void* v) {
  ((RevtronGui*)(o->parent()))->cb_revtron_fnum_i(o,v);
}

Fl_Menu_Item RevtronGui::menu_revtron_fnum[] = {
 {"Chamber", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Conc. Stair", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Hall", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Med Hall", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Large Room", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Large Hall", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Guitar Ambience", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Studio", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Twilight", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Santa Lucia", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};
RevtronGui::RevtronGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ revtron_activar = new RKR_Light_Button(6, 4, 34, 18, "On");
  revtron_activar->box(FL_UP_BOX);
  revtron_activar->shortcut(0x35);
  revtron_activar->color((Fl_Color)62);
  revtron_activar->selection_color((Fl_Color)1);
  revtron_activar->labeltype(FL_NORMAL_LABEL);
  revtron_activar->labelfont(0);
  revtron_activar->labelsize(10);
  revtron_activar->labelcolor(FL_FOREGROUND_COLOR);
  revtron_activar->callback((Fl_Callback*)cb_revtron_activar, (void*)(2));
  revtron_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  revtron_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* revtron_activar
{ revtron_preset = new Fl_Choice(79, 4, 76, 18, "Preset");
  revtron_preset->down_box(FL_BORDER_BOX);
  revtron_preset->selection_color(FL_FOREGROUND_COLOR);
  revtron_preset->labelsize(10);
  revtron_preset->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_preset->textsize(10);
  revtron_preset->textcolor(FL_BACKGROUND2_COLOR);
  revtron_preset->callback((Fl_Callback*)cb_revtron_preset, (void*)(12040));
  revtron_preset->when(FL_WHEN_RELEASE_ALWAYS);
  revtron_preset->menu(menu_revtron_preset);
} // Fl_Choice* revtron_preset
{ revtron_WD = new SliderW(56, 25, 100, 10, "Dry/Wet");
  revtron_WD->type(5);
  revtron_WD->box(FL_FLAT_BOX);
  revtron_WD->color((Fl_Color)178);
  revtron_WD->selection_color((Fl_Color)62);
  revtron_WD->labeltype(FL_NORMAL_LABEL);
  revtron_WD->labelfont(0);
  revtron_WD->labelsize(10);
  revtron_WD->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_WD->maximum(127);
  revtron_WD->step(1);
  revtron_WD->textcolor(FL_BACKGROUND2_COLOR);
  revtron_WD->callback((Fl_Callback*)cb_revtron_WD);
  revtron_WD->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_WD->when(FL_WHEN_CHANGED);
} // SliderW* revtron_WD
{ revtron_pan = new SliderW(56, 37, 100, 10, "Pan");
  revtron_pan->type(5);
  revtron_pan->box(FL_FLAT_BOX);
  revtron_pan->color((Fl_Color)178);
  revtron_pan->selection_color((Fl_Color)62);
  revtron_pan->labeltype(FL_NORMAL_LABEL);
  revtron_pan->labelfont(0);
  revtron_pan->labelsize(10);
  revtron_pan->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_pan->minimum(-64);
  revtron_pan->maximum(63);
  revtron_pan->step(1);
  revtron_pan->textcolor(FL_BACKGROUND2_COLOR);
  revtron_pan->callback((Fl_Callback*)cb_revtron_pan);
  revtron_pan->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_pan->when(FL_WHEN_CHANGED);
} // SliderW* revtron_pan
{ revtron_level = new SliderW(56, 49, 100, 10, "Level");
  revtron_level->type(5);
  revtron_level->box(FL_FLAT_BOX);
  revtron_level->color((Fl_Color)178);
  revtron_level->selection_color((Fl_Color)62);
  revtron_level->labeltype(FL_NORMAL_LABEL);
  revtron_level->labelfont(0);
  revtron_level->labelsize(10);
  revtron_level->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_level->maximum(127);
  revtron_level->step(1);
  revtron_level->textcolor(FL_BACKGROUND2_COLOR);
  revtron_level->callback((Fl_Callback*)cb_revtron_level);
  revtron_level->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_level->when(FL_WHEN_CHANGED);
} // SliderW* revtron_level
{ revtron_damp = new SliderW(56, 61, 100, 10, "Damp");
  revtron_damp->type(5);
  revtron_damp->box(FL_FLAT_BOX);
  revtron_damp->color((Fl_Color)178);
  revtron_damp->selection_color((Fl_Color)62);
  revtron_damp->labeltype(FL_NORMAL_LABEL);
  revtron_damp->labelfont(0);
  revtron_damp->labelsize(10);
  revtron_damp->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_damp->maximum(127);
  revtron_damp->step(1);
  revtron_damp->textcolor(FL_BACKGROUND2_COLOR);
  revtron_damp->callback((Fl_Callback*)cb_revtron_damp);
  revtron_damp->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_damp->when(FL_WHEN_CHANGED);
} // SliderW* revtron_damp
{ revtron_fb = new SliderW(56, 73, 100, 10, "Feedback");
  revtron_fb->type(5);
  revtron_fb->box(FL_FLAT_BOX);
  revtron_fb->color((Fl_Color)178);
  revtron_fb->selection_color((Fl_Color)62);
  revtron_fb->labeltype(FL_NORMAL_LABEL);
  revtron_fb->labelfont(0);
  revtron_fb->labelsize(10);
  revtron_fb->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_fb->minimum(-64);
  revtron_fb->maximum(64);
  revtron_fb->step(1);
  revtron_fb->textcolor(FL_BACKGROUND2_COLOR);
  revtron_fb->callback((Fl_Callback*)cb_revtron_fb);
  revtron_fb->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_fb->when(FL_WHEN_CHANGED);
} // SliderW* revtron_fb
{ revtron_length = new SliderW(56, 85, 100, 10, "Length");
  revtron_length->type(5);
  revtron_length->box(FL_FLAT_BOX);
  revtron_length->color((Fl_Color)178);
  revtron_length->selection_color((Fl_Color)62);
  revtron_length->labeltype(FL_NORMAL_LABEL);
  revtron_length->labelfont(0);
  revtron_length->labelsize(10);
  revtron_length->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_length->minimum(20);
  revtron_length->maximum(1500);
  revtron_length->step(1);
  revtron_length->value(100);
  revtron_length->textcolor(FL_BACKGROUND2_COLOR);
  revtron_length->callback((Fl_Callback*)cb_revtron_length);
  revtron_length->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_length->when(FL_WHEN_RELEASE);
} // SliderW* revtron_length
{ revtron_strech = new SliderW(56, 97, 100, 10, "Stretch");
  revtron_strech->tooltip("Time Stretch");
  revtron_strech->type(5);
  revtron_strech->box(FL_FLAT_BOX);
  revtron_strech->color((Fl_Color)178);
  revtron_strech->selection_color((Fl_Color)62);
  revtron_strech->labeltype(FL_NORMAL_LABEL);
  revtron_strech->labelfont(0);
  revtron_strech->labelsize(10);
  revtron_strech->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_strech->minimum(-64);
  revtron_strech->maximum(64);
  revtron_strech->step(1);
  revtron_strech->textcolor(FL_BACKGROUND2_COLOR);
  revtron_strech->callback((Fl_Callback*)cb_revtron_strech);
  revtron_strech->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_strech->when(FL_WHEN_RELEASE);
} // SliderW* revtron_strech
{ revtron_idelay = new SliderW(56, 109, 100, 10, "I. Del");
  revtron_idelay->tooltip("Initial Delay");
  revtron_idelay->type(5);
  revtron_idelay->box(FL_FLAT_BOX);
  revtron_idelay->color((Fl_Color)178);
  revtron_idelay->selection_color((Fl_Color)62);
  revtron_idelay->labeltype(FL_NORMAL_LABEL);
  revtron_idelay->labelfont(0);
  revtron_idelay->labelsize(10);
  revtron_idelay->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_idelay->maximum(500);
  revtron_idelay->step(1);
  revtron_idelay->textcolor(FL_BACKGROUND2_COLOR);
  revtron_idelay->callback((Fl_Callback*)cb_revtron_idelay);
  revtron_idelay->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_idelay->when(FL_WHEN_RELEASE);
} // SliderW* revtron_idelay
{ revtron_fade = new SliderW(56, 121, 100, 10, "Fade");
  revtron_fade->type(5);
  revtron_fade->box(FL_FLAT_BOX);
  revtron_fade->color((Fl_Color)178);
  revtron_fade->selection_color((Fl_Color)62);
  revtron_fade->labeltype(FL_NORMAL_LABEL);
  revtron_fade->labelfont(0);
  revtron_fade->labelsize(10);
  revtron_fade->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_fade->maximum(127);
  revtron_fade->step(1);
  revtron_fade->textcolor(FL_BACKGROUND2_COLOR);
  revtron_fade->callback((Fl_Callback*)cb_revtron_fade);
  revtron_fade->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_fade->when(FL_WHEN_RELEASE);
} // SliderW* revtron_fade
{ revtron_diff = new SliderW(56, 133, 100, 10, "Diffusion");
  revtron_diff->type(5);
  revtron_diff->box(FL_FLAT_BOX);
  revtron_diff->color((Fl_Color)178);
  revtron_diff->selection_color((Fl_Color)62);
  revtron_diff->labeltype(FL_NORMAL_LABEL);
  revtron_diff->labelfont(0);
  revtron_diff->labelsize(10);
  revtron_diff->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_diff->maximum(127);
  revtron_diff->step(1);
  revtron_diff->textcolor(FL_BACKGROUND2_COLOR);
  revtron_diff->callback((Fl_Callback*)cb_revtron_diff);
  revtron_diff->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_diff->when(FL_WHEN_RELEASE);
} // SliderW* revtron_diff
{ revtron_LPF = new SliderW(56, 145, 100, 10, "LPF");
  revtron_LPF->tooltip("Lowpass Filter");
  revtron_LPF->type(5);
  revtron_LPF->box(FL_FLAT_BOX);
  revtron_LPF->color((Fl_Color)178);
  revtron_LPF->selection_color((Fl_Color)62);
  revtron_LPF->labeltype(FL_NORMAL_LABEL);
  revtron_LPF->labelfont(0);
  revtron_LPF->labelsize(10);
  revtron_LPF->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_LPF->minimum(20);
  revtron_LPF->maximum(26000);
  revtron_LPF->step(1);
  revtron_LPF->value(20);
  revtron_LPF->textcolor(FL_BACKGROUND2_COLOR);
  revtron_LPF->callback((Fl_Callback*)cb_revtron_LPF);
  revtron_LPF->align(Fl_Align(FL_ALIGN_LEFT));
  revtron_LPF->when(FL_WHEN_RELEASE);
} // SliderW* revtron_LPF
{ revtron_rv = new RKR_Check_Button(2, 151, 30, 15, "Sh");
  revtron_rv->box(FL_NO_BOX);
  revtron_rv->down_box(FL_BORDER_BOX);
  revtron_rv->color(FL_BACKGROUND_COLOR);
  revtron_rv->selection_color(FL_FOREGROUND_COLOR);
  revtron_rv->labeltype(FL_NORMAL_LABEL);
  revtron_rv->labelfont(0);
  revtron_rv->labelsize(10);
  revtron_rv->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_rv->callback((Fl_Callback*)cb_revtron_rv, (void*)(2));
  revtron_rv->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  revtron_rv->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* revtron_rv
{ revtron_es = new RKR_Check_Button(2, 164, 29, 15, "ES");
  revtron_es->box(FL_NO_BOX);
  revtron_es->down_box(FL_BORDER_BOX);
  revtron_es->color(FL_BACKGROUND_COLOR);
  revtron_es->selection_color(FL_FOREGROUND_COLOR);
  revtron_es->labeltype(FL_NORMAL_LABEL);
  revtron_es->labelfont(0);
  revtron_es->labelsize(10);
  revtron_es->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_es->callback((Fl_Callback*)cb_revtron_es, (void*)(2));
  revtron_es->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  revtron_es->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* revtron_es
{ revtron_safe = new RKR_Check_Button(30, 154, 41, 15, "Safe");
  revtron_safe->box(FL_NO_BOX);
  revtron_safe->down_box(FL_BORDER_BOX);
  revtron_safe->color(FL_BACKGROUND_COLOR);
  revtron_safe->selection_color(FL_FOREGROUND_COLOR);
  revtron_safe->labeltype(FL_NORMAL_LABEL);
  revtron_safe->labelfont(0);
  revtron_safe->labelsize(10);
  revtron_safe->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_safe->callback((Fl_Callback*)cb_revtron_safe, (void*)(2));
  revtron_safe->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  revtron_safe->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* revtron_safe
{ revtron_user = new RKR_Check_Button(67, 154, 39, 15, "User");
  revtron_user->box(FL_NO_BOX);
  revtron_user->down_box(FL_BORDER_BOX);
  revtron_user->color(FL_BACKGROUND_COLOR);
  revtron_user->selection_color(FL_FOREGROUND_COLOR);
  revtron_user->labeltype(FL_NORMAL_LABEL);
  revtron_user->labelfont(0);
  revtron_user->labelsize(10);
  revtron_user->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_user->callback((Fl_Callback*)cb_revtron_user, (void*)(2));
  revtron_user->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  revtron_user->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* revtron_user
{ B_rvb = new RKR_Button(106, 156, 46, 10, "Browse");
  B_rvb->box(FL_UP_BOX);
  B_rvb->color(FL_BACKGROUND_COLOR);
  B_rvb->selection_color(FL_BACKGROUND_COLOR);
  B_rvb->labeltype(FL_NORMAL_LABEL);
  B_rvb->labelfont(0);
  B_rvb->labelsize(10);
  B_rvb->labelcolor(FL_FOREGROUND_COLOR);
  B_rvb->callback((Fl_Callback*)cb_B_rvb, (void*)(2));
  B_rvb->align(Fl_Align(FL_ALIGN_CENTER));
  B_rvb->when(FL_WHEN_RELEASE);
  B_rvb->deactivate();
} // RKR_Button* B_rvb
{ revtron_fnum = new Fl_Choice(51, 168, 101, 14, "File");
  revtron_fnum->down_box(FL_BORDER_BOX);
  revtron_fnum->selection_color(FL_FOREGROUND_COLOR);
  revtron_fnum->labelsize(10);
  revtron_fnum->labelcolor(FL_BACKGROUND2_COLOR);
  revtron_fnum->textsize(10);
  revtron_fnum->textcolor(FL_BACKGROUND2_COLOR);
  revtron_fnum->callback((Fl_Callback*)cb_revtron_fnum, (void*)(12));
  revtron_fnum->menu(menu_revtron_fnum);
} // Fl_Choice* revtron_fnum
position(X, Y);
end();
}
