// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "synthfilter_gui.h"

void SynthfilterGui::cb_synthfilter_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Synthfilter_Bypass);
 return;
}
rkr->Synthfilter_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Synthfilter->cleanup();
rgui->findpos(27,(int)o->value(),o);
}
void SynthfilterGui::cb_synthfilter_activar(RKR_Light_Button* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_activar_i(o,v);
}

void SynthfilterGui::cb_synthfilter_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12027))rkr->efx_Synthfilter->setpreset((int) o->value());
synthfilter_WD->value(Dry_Wet(rkr->efx_Synthfilter->getpar(0)));
synthfilter_Distort->value(rkr->efx_Synthfilter->getpar(1));
synthfilter_freq->value(rkr->efx_Synthfilter->getpar(2));
synthfilter_rand->value(rkr->efx_Synthfilter->getpar(3));
synthfilter_lfotype->value(rkr->efx_Synthfilter->getpar(4));
synthfilter_stdf->value(rkr->efx_Synthfilter->getpar(5));
synthfilter_width->value(rkr->efx_Synthfilter->getpar(6));
synthfilter_Lstages->value(rkr->efx_Synthfilter->getpar(8));
synthfilter_Hstages->value(rkr->efx_Synthfilter->getpar(9));
synthfilter_fb->value(rkr->efx_Synthfilter->getpar(7));
synthfilter_Offset->value(rkr->efx_Synthfilter->getpar(15));
synthfilter_subs->value(rkr->efx_Synthfilter->getpar(10));
synthfilter_dpth->value(rkr->efx_Synthfilter->getpar(11));
synthfilter_EnvSens->value(rkr->efx_Synthfilter->getpar(12));
synthfilter_ATime->value(rkr->efx_Synthfilter->getpar(13));
synthfilter_RTime->value(rkr->efx_Synthfilter->getpar(14));
}
void SynthfilterGui::cb_synthfilter_preset(RKR_Choice* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_preset_i(o,v);
}

Fl_Menu_Item SynthfilterGui::menu_synthfilter_preset[] = {
 {"Low Pass", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"High Pass", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Band Pass", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Lead Synth", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Water", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Pan Filter", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Multi", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Lazy Wahble", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void SynthfilterGui::cb_synthfilter_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(237);
 return;
}
rkr->efx_Synthfilter->changepar(0,Dry_Wet((int)(o->value())));
}
void SynthfilterGui::cb_synthfilter_WD(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_WD_i(o,v);
}

void SynthfilterGui::cb_synthfilter_Distort_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(238);
 return;
}
rkr->efx_Synthfilter->changepar(1,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_Distort(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_Distort_i(o,v);
}

void SynthfilterGui::cb_synthfilter_freq_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(239);
 return;
}
rkr->efx_Synthfilter->changepar(2,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_freq(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_freq_i(o,v);
}

void SynthfilterGui::cb_synthfilter_rand_i(RKR_Value_Input* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(446);
 return;
}
rkr->efx_Synthfilter->changepar(3,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_rand(RKR_Value_Input* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_rand_i(o,v);
}

void SynthfilterGui::cb_synthfilter_lfotype_i(RKR_Choice* o, void*) {
  rkr->efx_Synthfilter->changepar(4,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_lfotype(RKR_Choice* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_lfotype_i(o,v);
}

void SynthfilterGui::cb_synthfilter_subs_i(RKR_Check_Button* o, void*) {
  rkr->efx_Synthfilter->changepar(10,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_subs(RKR_Check_Button* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_subs_i(o,v);
}

void SynthfilterGui::cb_synthfilter_stdf_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(240);
 return;
}
rkr->efx_Synthfilter->changepar(5,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_stdf(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_stdf_i(o,v);
}

void SynthfilterGui::cb_synthfilter_width_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(241);
 return;
}
rkr->efx_Synthfilter->changepar(6,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_width(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_width_i(o,v);
}

void SynthfilterGui::cb_synthfilter_fb_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(242);
 return;
}
rkr->efx_Synthfilter->changepar(7,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_fb(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_fb_i(o,v);
}

void SynthfilterGui::cb_synthfilter_Lstages_i(RKR_Counter* o, void*) {
  rkr->efx_Synthfilter->changepar(8,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_Lstages(RKR_Counter* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_Lstages_i(o,v);
}

void SynthfilterGui::cb_synthfilter_Hstages_i(RKR_Counter* o, void*) {
  rkr->efx_Synthfilter->changepar(9,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_Hstages(RKR_Counter* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_Hstages_i(o,v);
}

void SynthfilterGui::cb_synthfilter_dpth_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(243);
 return;
}
rkr->efx_Synthfilter->changepar(11,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_dpth(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_dpth_i(o,v);
}

void SynthfilterGui::cb_synthfilter_EnvSens_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(244);
 return;
}
rkr->efx_Synthfilter->changepar(12,(int)(o->value()));
}
void SynthfilterGui::cb_synthfilter_EnvSens(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_EnvSens_i(o,v);
}

void SynthfilterGui::cb_synthfilter_ATime_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(245);
 return;
}
rkr->efx_Synthfilter->changepar(13,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_ATime(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_ATime_i(o,v);
}

void SynthfilterGui::cb_synthfilter_RTime_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(246);
 return;
}
rkr->efx_Synthfilter->changepar(14,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_RTime(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_RTime_i(o,v);
}

void SynthfilterGui::cb_synthfilter_Offset_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(247);
 return;
}
rkr->efx_Synthfilter->changepar(15,(int)o->value());
}
void SynthfilterGui::cb_synthfilter_Offset(SliderW* o, void* v) {
  ((SynthfilterGui*)(o->parent()))->cb_synthfilter_Offset_i(o,v);
}
SynthfilterGui::SynthfilterGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ synthfilter_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  synthfilter_activar->box(FL_UP_BOX);
  synthfilter_activar->shortcut(0x37);
  synthfilter_activar->color((Fl_Color)62);
  synthfilter_activar->selection_color((Fl_Color)1);
  synthfilter_activar->labeltype(FL_NORMAL_LABEL);
  synthfilter_activar->labelfont(0);
  synthfilter_activar->labelsize(10);
  synthfilter_activar->labelcolor(FL_FOREGROUND_COLOR);
  synthfilter_activar->callback((Fl_Callback*)cb_synthfilter_activar, (void*)(2));
  synthfilter_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  synthfilter_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* synthfilter_activar
{ synthfilter_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  synthfilter_preset->box(FL_FLAT_BOX);
  synthfilter_preset->down_box(FL_BORDER_BOX);
  synthfilter_preset->color(FL_BACKGROUND_COLOR);
  synthfilter_preset->selection_color(FL_FOREGROUND_COLOR);
  synthfilter_preset->labeltype(FL_NORMAL_LABEL);
  synthfilter_preset->labelfont(0);
  synthfilter_preset->labelsize(10);
  synthfilter_preset->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_preset->textsize(10);
  synthfilter_preset->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_preset->callback((Fl_Callback*)cb_synthfilter_preset, (void*)(12027));
  synthfilter_preset->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_preset->when(FL_WHEN_RELEASE_ALWAYS);
  synthfilter_preset->menu(menu_synthfilter_preset);
} // RKR_Choice* synthfilter_preset
{ synthfilter_WD = new SliderW(56, 25, 100, 10, "Dry/Wet");
  synthfilter_WD->type(5);
  synthfilter_WD->box(FL_FLAT_BOX);
  synthfilter_WD->color((Fl_Color)178);
  synthfilter_WD->selection_color((Fl_Color)62);
  synthfilter_WD->labeltype(FL_NORMAL_LABEL);
  synthfilter_WD->labelfont(0);
  synthfilter_WD->labelsize(10);
  synthfilter_WD->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_WD->maximum(127);
  synthfilter_WD->step(1);
  synthfilter_WD->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_WD->callback((Fl_Callback*)cb_synthfilter_WD);
  synthfilter_WD->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_WD->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_WD
{ synthfilter_Distort = new SliderW(56, 37, 100, 10, "Distort");
  synthfilter_Distort->type(5);
  synthfilter_Distort->box(FL_FLAT_BOX);
  synthfilter_Distort->color((Fl_Color)178);
  synthfilter_Distort->selection_color((Fl_Color)62);
  synthfilter_Distort->labeltype(FL_NORMAL_LABEL);
  synthfilter_Distort->labelfont(0);
  synthfilter_Distort->labelsize(10);
  synthfilter_Distort->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_Distort->maximum(127);
  synthfilter_Distort->step(1);
  synthfilter_Distort->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_Distort->callback((Fl_Callback*)cb_synthfilter_Distort);
  synthfilter_Distort->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_Distort->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_Distort
{ synthfilter_freq = new SliderW(56, 49, 100, 10, "Tempo");
  synthfilter_freq->type(5);
  synthfilter_freq->box(FL_FLAT_BOX);
  synthfilter_freq->color((Fl_Color)178);
  synthfilter_freq->selection_color((Fl_Color)62);
  synthfilter_freq->labeltype(FL_NORMAL_LABEL);
  synthfilter_freq->labelfont(0);
  synthfilter_freq->labelsize(10);
  synthfilter_freq->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_freq->minimum(1);
  synthfilter_freq->maximum(600);
  synthfilter_freq->step(1);
  synthfilter_freq->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_freq->callback((Fl_Callback*)cb_synthfilter_freq);
  synthfilter_freq->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_freq->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_freq
{ synthfilter_rand = new RKR_Value_Input(16, 62, 23, 15, "R");
  synthfilter_rand->tooltip("LFO Randomness");
  synthfilter_rand->box(FL_DOWN_BOX);
  synthfilter_rand->color(FL_BACKGROUND2_COLOR);
  synthfilter_rand->selection_color(FL_SELECTION_COLOR);
  synthfilter_rand->labeltype(FL_NORMAL_LABEL);
  synthfilter_rand->labelfont(0);
  synthfilter_rand->labelsize(10);
  synthfilter_rand->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_rand->maximum(127);
  synthfilter_rand->step(1);
  synthfilter_rand->textsize(10);
  synthfilter_rand->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_rand->callback((Fl_Callback*)cb_synthfilter_rand);
  synthfilter_rand->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_rand->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* synthfilter_rand
{ RKR_Choice* o = synthfilter_lfotype = new RKR_Choice(65, 63, 52, 13, "LFO");
  synthfilter_lfotype->box(FL_FLAT_BOX);
  synthfilter_lfotype->down_box(FL_BORDER_BOX);
  synthfilter_lfotype->color(FL_BACKGROUND_COLOR);
  synthfilter_lfotype->selection_color(FL_FOREGROUND_COLOR);
  synthfilter_lfotype->labeltype(FL_NORMAL_LABEL);
  synthfilter_lfotype->labelfont(0);
  synthfilter_lfotype->labelsize(10);
  synthfilter_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_lfotype->textsize(10);
  synthfilter_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_lfotype->callback((Fl_Callback*)cb_synthfilter_lfotype);
  synthfilter_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
  o->m_start_text_offset = -1; // 10 - 9
} // RKR_Choice* synthfilter_lfotype
{ synthfilter_subs = new RKR_Check_Button(143, 63, 46, 15, "Sub");
  synthfilter_subs->tooltip("Subtract - Make output of filter negative");
  synthfilter_subs->box(FL_NO_BOX);
  synthfilter_subs->down_box(FL_BORDER_BOX);
  synthfilter_subs->color(FL_BACKGROUND_COLOR);
  synthfilter_subs->selection_color(FL_FOREGROUND_COLOR);
  synthfilter_subs->labeltype(FL_NORMAL_LABEL);
  synthfilter_subs->labelfont(0);
  synthfilter_subs->labelsize(10);
  synthfilter_subs->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_subs->callback((Fl_Callback*)cb_synthfilter_subs, (void*)(2));
  synthfilter_subs->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_subs->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* synthfilter_subs
{ synthfilter_stdf = new SliderW(56, 80, 100, 10, "Stereo Df");
  synthfilter_stdf->tooltip("LFO L/R Delay");
  synthfilter_stdf->type(5);
  synthfilter_stdf->box(FL_FLAT_BOX);
  synthfilter_stdf->color((Fl_Color)178);
  synthfilter_stdf->selection_color((Fl_Color)62);
  synthfilter_stdf->labeltype(FL_NORMAL_LABEL);
  synthfilter_stdf->labelfont(0);
  synthfilter_stdf->labelsize(10);
  synthfilter_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_stdf->maximum(127);
  synthfilter_stdf->step(1);
  synthfilter_stdf->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_stdf->callback((Fl_Callback*)cb_synthfilter_stdf);
  synthfilter_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_stdf->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_stdf
{ synthfilter_width = new SliderW(56, 91, 100, 10, "Width");
  synthfilter_width->type(5);
  synthfilter_width->box(FL_FLAT_BOX);
  synthfilter_width->color((Fl_Color)178);
  synthfilter_width->selection_color((Fl_Color)62);
  synthfilter_width->labeltype(FL_NORMAL_LABEL);
  synthfilter_width->labelfont(0);
  synthfilter_width->labelsize(10);
  synthfilter_width->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_width->maximum(127);
  synthfilter_width->step(1);
  synthfilter_width->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_width->callback((Fl_Callback*)cb_synthfilter_width);
  synthfilter_width->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_width->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_width
{ synthfilter_fb = new SliderW(56, 102, 100, 10, "Feedback");
  synthfilter_fb->type(5);
  synthfilter_fb->box(FL_FLAT_BOX);
  synthfilter_fb->color((Fl_Color)178);
  synthfilter_fb->selection_color((Fl_Color)62);
  synthfilter_fb->labeltype(FL_NORMAL_LABEL);
  synthfilter_fb->labelfont(0);
  synthfilter_fb->labelsize(10);
  synthfilter_fb->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_fb->minimum(-64);
  synthfilter_fb->maximum(64);
  synthfilter_fb->step(1);
  synthfilter_fb->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_fb->callback((Fl_Callback*)cb_synthfilter_fb);
  synthfilter_fb->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_fb->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_fb
{ RKR_Counter* o = synthfilter_Lstages = new RKR_Counter(48, 114, 28, 11, "LPF Stg.");
  synthfilter_Lstages->type(1);
  synthfilter_Lstages->box(FL_THIN_UP_BOX);
  synthfilter_Lstages->color(FL_BACKGROUND_COLOR);
  synthfilter_Lstages->selection_color(FL_INACTIVE_COLOR);
  synthfilter_Lstages->labeltype(FL_NORMAL_LABEL);
  synthfilter_Lstages->labelfont(0);
  synthfilter_Lstages->labelsize(10);
  synthfilter_Lstages->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_Lstages->minimum(0);
  synthfilter_Lstages->maximum(12);
  synthfilter_Lstages->step(1);
  synthfilter_Lstages->value(1);
  synthfilter_Lstages->textsize(9);
  synthfilter_Lstages->callback((Fl_Callback*)cb_synthfilter_Lstages);
  synthfilter_Lstages->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_Lstages->when(FL_WHEN_CHANGED);
  o->m_start_text_offset = -1; // 10 - 9
} // RKR_Counter* synthfilter_Lstages
{ RKR_Counter* o = synthfilter_Hstages = new RKR_Counter(125, 114, 28, 11, "HPF Stg.");
  synthfilter_Hstages->type(1);
  synthfilter_Hstages->box(FL_THIN_UP_BOX);
  synthfilter_Hstages->color(FL_BACKGROUND_COLOR);
  synthfilter_Hstages->selection_color(FL_INACTIVE_COLOR);
  synthfilter_Hstages->labeltype(FL_NORMAL_LABEL);
  synthfilter_Hstages->labelfont(0);
  synthfilter_Hstages->labelsize(10);
  synthfilter_Hstages->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_Hstages->minimum(0);
  synthfilter_Hstages->maximum(12);
  synthfilter_Hstages->step(1);
  synthfilter_Hstages->value(1);
  synthfilter_Hstages->textsize(9);
  synthfilter_Hstages->callback((Fl_Callback*)cb_synthfilter_Hstages);
  synthfilter_Hstages->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_Hstages->when(FL_WHEN_CHANGED);
  o->m_start_text_offset = -1; // 10 - 9
} // RKR_Counter* synthfilter_Hstages
{ synthfilter_dpth = new SliderW(56, 126, 100, 10, "Depth");
  synthfilter_dpth->type(5);
  synthfilter_dpth->box(FL_FLAT_BOX);
  synthfilter_dpth->color((Fl_Color)178);
  synthfilter_dpth->selection_color((Fl_Color)62);
  synthfilter_dpth->labeltype(FL_NORMAL_LABEL);
  synthfilter_dpth->labelfont(0);
  synthfilter_dpth->labelsize(10);
  synthfilter_dpth->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_dpth->maximum(127);
  synthfilter_dpth->step(1);
  synthfilter_dpth->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_dpth->callback((Fl_Callback*)cb_synthfilter_dpth);
  synthfilter_dpth->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_dpth->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_dpth
{ synthfilter_EnvSens = new SliderW(56, 137, 100, 10, "E.Sens");
  synthfilter_EnvSens->tooltip("Envelope Sensitivity");
  synthfilter_EnvSens->type(5);
  synthfilter_EnvSens->box(FL_FLAT_BOX);
  synthfilter_EnvSens->color((Fl_Color)178);
  synthfilter_EnvSens->selection_color((Fl_Color)62);
  synthfilter_EnvSens->labeltype(FL_NORMAL_LABEL);
  synthfilter_EnvSens->labelfont(0);
  synthfilter_EnvSens->labelsize(10);
  synthfilter_EnvSens->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_EnvSens->minimum(-64);
  synthfilter_EnvSens->maximum(64);
  synthfilter_EnvSens->step(1);
  synthfilter_EnvSens->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_EnvSens->callback((Fl_Callback*)cb_synthfilter_EnvSens);
  synthfilter_EnvSens->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_EnvSens->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_EnvSens
{ synthfilter_ATime = new SliderW(56, 148, 100, 10, "A.Time");
  synthfilter_ATime->tooltip("Attack Time");
  synthfilter_ATime->type(5);
  synthfilter_ATime->box(FL_FLAT_BOX);
  synthfilter_ATime->color((Fl_Color)178);
  synthfilter_ATime->selection_color((Fl_Color)62);
  synthfilter_ATime->labeltype(FL_NORMAL_LABEL);
  synthfilter_ATime->labelfont(0);
  synthfilter_ATime->labelsize(10);
  synthfilter_ATime->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_ATime->minimum(5);
  synthfilter_ATime->maximum(1000);
  synthfilter_ATime->step(1);
  synthfilter_ATime->value(5);
  synthfilter_ATime->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_ATime->callback((Fl_Callback*)cb_synthfilter_ATime);
  synthfilter_ATime->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_ATime->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_ATime
{ synthfilter_RTime = new SliderW(56, 159, 100, 10, "R.Time");
  synthfilter_RTime->tooltip("Release Time");
  synthfilter_RTime->type(5);
  synthfilter_RTime->box(FL_FLAT_BOX);
  synthfilter_RTime->color((Fl_Color)178);
  synthfilter_RTime->selection_color((Fl_Color)62);
  synthfilter_RTime->labeltype(FL_NORMAL_LABEL);
  synthfilter_RTime->labelfont(0);
  synthfilter_RTime->labelsize(10);
  synthfilter_RTime->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_RTime->minimum(5);
  synthfilter_RTime->maximum(500);
  synthfilter_RTime->step(1);
  synthfilter_RTime->value(5);
  synthfilter_RTime->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_RTime->callback((Fl_Callback*)cb_synthfilter_RTime);
  synthfilter_RTime->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_RTime->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_RTime
{ synthfilter_Offset = new SliderW(56, 170, 100, 10, "Offset");
  synthfilter_Offset->tooltip("HPF/LPF Offset");
  synthfilter_Offset->type(5);
  synthfilter_Offset->box(FL_FLAT_BOX);
  synthfilter_Offset->color((Fl_Color)178);
  synthfilter_Offset->selection_color((Fl_Color)62);
  synthfilter_Offset->labeltype(FL_NORMAL_LABEL);
  synthfilter_Offset->labelfont(0);
  synthfilter_Offset->labelsize(10);
  synthfilter_Offset->labelcolor(FL_BACKGROUND2_COLOR);
  synthfilter_Offset->maximum(127);
  synthfilter_Offset->step(1);
  synthfilter_Offset->textcolor(FL_BACKGROUND2_COLOR);
  synthfilter_Offset->callback((Fl_Callback*)cb_synthfilter_Offset);
  synthfilter_Offset->align(Fl_Align(FL_ALIGN_LEFT));
  synthfilter_Offset->when(FL_WHEN_CHANGED);
} // SliderW* synthfilter_Offset
position(X, Y);
end();
}
