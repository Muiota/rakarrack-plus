// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "sequence_gui.h"

void SequenceGui::cb_seq_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Sequence_Bypass);
 return;
}
rkr->Sequence_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Sequence->cleanup();
rgui->findpos(37,(int)o->value(),o);
}
void SequenceGui::cb_seq_activar(RKR_Light_Button* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_activar_i(o,v);
}

void SequenceGui::cb_seq_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12037))rkr->efx_Sequence->setpreset((int) o->value());
seq_WD->value(Dry_Wet(rkr->efx_Sequence->getpar(8)));
seq_q->value(rkr->efx_Sequence->getpar(10)-64);
seq_amp->value(rkr->efx_Sequence->getpar(11));
seq_tempo->value(rkr->efx_Sequence->getpar(9));
seq_stdf->value(rkr->efx_Sequence->getpar(12));
seq_1->value(rkr->efx_Sequence->getpar(0));
seq_2->value(rkr->efx_Sequence->getpar(1));
seq_3->value(rkr->efx_Sequence->getpar(2));
seq_4->value(rkr->efx_Sequence->getpar(3));
seq_5->value(rkr->efx_Sequence->getpar(4));
seq_6->value(rkr->efx_Sequence->getpar(5));
seq_7->value(rkr->efx_Sequence->getpar(6));
seq_8->value(rkr->efx_Sequence->getpar(7));
seq_mode->value(rkr->efx_Sequence->getpar(13));
seq_range->value(rkr->efx_Sequence->getpar(14));
}
void SequenceGui::cb_seq_preset(RKR_Choice* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_preset_i(o,v);
}

Fl_Menu_Item SequenceGui::menu_seq_preset[] = {
 {"Jumpy", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Stair Step", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Mild", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Wah Wah", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Filter Pan", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Stepper", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Shifter", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Zeke Trem", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Boogie", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Chorus", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Sequence 11", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void SequenceGui::cb_seq_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(314);
 return;
}
rkr->efx_Sequence->changepar(8,Dry_Wet((int)(o->value())));
}
void SequenceGui::cb_seq_WD(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_WD_i(o,v);
}

void SequenceGui::cb_seq_1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(315);
 return;
}
rkr->efx_Sequence->changepar(0,(int)o->value());
}
void SequenceGui::cb_seq_1(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_1_i(o,v);
}

void SequenceGui::cb_seq_2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(316);
 return;
}
rkr->efx_Sequence->changepar(1,(int)o->value());
}
void SequenceGui::cb_seq_2(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_2_i(o,v);
}

void SequenceGui::cb_seq_3_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(317);
 return;
}
rkr->efx_Sequence->changepar(2,(int)o->value());
}
void SequenceGui::cb_seq_3(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_3_i(o,v);
}

void SequenceGui::cb_seq_4_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(318);
 return;
}
rkr->efx_Sequence->changepar(3,(int)o->value());
}
void SequenceGui::cb_seq_4(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_4_i(o,v);
}

void SequenceGui::cb_seq_5_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(319);
 return;
}
rkr->efx_Sequence->changepar(4,(int)o->value());
}
void SequenceGui::cb_seq_5(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_5_i(o,v);
}

void SequenceGui::cb_seq_6_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(320);
 return;
}
rkr->efx_Sequence->changepar(5,(int)o->value());
}
void SequenceGui::cb_seq_6(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_6_i(o,v);
}

void SequenceGui::cb_seq_7_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(321);
 return;
}
rkr->efx_Sequence->changepar(6,(int)o->value());
}
void SequenceGui::cb_seq_7(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_7_i(o,v);
}

void SequenceGui::cb_seq_8_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(322);
 return;
}
rkr->efx_Sequence->changepar(7,(int)o->value());
}
void SequenceGui::cb_seq_8(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_8_i(o,v);
}

void SequenceGui::cb_seq_tempo_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(323);
 return;
}
rkr->efx_Sequence->changepar(9,(int)o->value());
}
void SequenceGui::cb_seq_tempo(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_tempo_i(o,v);
}

void SequenceGui::cb_seq_q_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(324);
 return;
}
rkr->efx_Sequence->changepar(10,(int)o->value()+64);
}
void SequenceGui::cb_seq_q(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_q_i(o,v);
}

void SequenceGui::cb_seq_stdf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(325);
 return;
}
rkr->efx_Sequence->changepar(12,(int)o->value());
}
void SequenceGui::cb_seq_stdf(RKR_Slider* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_stdf_i(o,v);
}

void SequenceGui::cb_seq_amp_i(RKR_Check_Button* o, void*) {
  rkr->efx_Sequence->changepar(11,(int)o->value());
}
void SequenceGui::cb_seq_amp(RKR_Check_Button* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_amp_i(o,v);
}

void SequenceGui::cb_seq_mode_i(RKR_Choice* o, void*) {
  rkr->efx_Sequence->changepar(13,(int)o->value());
}
void SequenceGui::cb_seq_mode(RKR_Choice* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_mode_i(o,v);
}

Fl_Menu_Item SequenceGui::menu_seq_mode[] = {
 {"Lineal", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"UpDown", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Stepper", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Shifter", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Tremor", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Arpegiator", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Chorus", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"TrigStepper", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Seq Delay", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {0,0,0,0,0,0,0,0,0}
};

void SequenceGui::cb_seq_range_i(RKR_Choice* o, void*) {
  rkr->efx_Sequence->changepar(14,(int)o->value());
}
void SequenceGui::cb_seq_range(RKR_Choice* o, void* v) {
  ((SequenceGui*)(o->parent()))->cb_seq_range_i(o,v);
}

Fl_Menu_Item SequenceGui::menu_seq_range[] = {
 {"450-2.5k", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"150-4k", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"40-800", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"100-1.6k", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"80-16k", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"60-18k", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"40-2.2k", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"20-6k", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {0,0,0,0,0,0,0,0,0}
};
SequenceGui::SequenceGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ seq_activar = new RKR_Light_Button(5, 4, 34, 16, "On");
  seq_activar->box(FL_UP_BOX);
  seq_activar->shortcut(0x36);
  seq_activar->color((Fl_Color)62);
  seq_activar->selection_color((Fl_Color)1);
  seq_activar->labeltype(FL_NORMAL_LABEL);
  seq_activar->labelfont(0);
  seq_activar->labelsize(10);
  seq_activar->labelcolor(FL_FOREGROUND_COLOR);
  seq_activar->callback((Fl_Callback*)cb_seq_activar, (void*)(2));
  seq_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  seq_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* seq_activar
{ seq_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  seq_preset->box(FL_FLAT_BOX);
  seq_preset->down_box(FL_BORDER_BOX);
  seq_preset->color(FL_BACKGROUND_COLOR);
  seq_preset->selection_color(FL_FOREGROUND_COLOR);
  seq_preset->labeltype(FL_NORMAL_LABEL);
  seq_preset->labelfont(0);
  seq_preset->labelsize(10);
  seq_preset->labelcolor(FL_BACKGROUND2_COLOR);
  seq_preset->textsize(10);
  seq_preset->textcolor(FL_BACKGROUND2_COLOR);
  seq_preset->callback((Fl_Callback*)cb_seq_preset, (void*)(12037));
  seq_preset->align(Fl_Align(FL_ALIGN_LEFT));
  seq_preset->when(FL_WHEN_RELEASE_ALWAYS);
  seq_preset->menu(menu_seq_preset);
} // RKR_Choice* seq_preset
{ seq_WD = new RKR_Slider(56, 25, 100, 10, "Dry/Wet");
  seq_WD->type(5);
  seq_WD->box(FL_FLAT_BOX);
  seq_WD->color((Fl_Color)178);
  seq_WD->selection_color((Fl_Color)62);
  seq_WD->labeltype(FL_NORMAL_LABEL);
  seq_WD->labelfont(0);
  seq_WD->labelsize(10);
  seq_WD->labelcolor(FL_BACKGROUND2_COLOR);
  seq_WD->maximum(127);
  seq_WD->step(1);
  seq_WD->textcolor(FL_BACKGROUND2_COLOR);
  seq_WD->callback((Fl_Callback*)cb_seq_WD);
  seq_WD->align(Fl_Align(FL_ALIGN_LEFT));
  seq_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_WD
{ seq_1 = new RKR_Slider(56, 37, 100, 10, "1");
  seq_1->type(5);
  seq_1->box(FL_FLAT_BOX);
  seq_1->color((Fl_Color)178);
  seq_1->selection_color((Fl_Color)62);
  seq_1->labeltype(FL_NORMAL_LABEL);
  seq_1->labelfont(0);
  seq_1->labelsize(10);
  seq_1->labelcolor(FL_BACKGROUND2_COLOR);
  seq_1->maximum(127);
  seq_1->step(1);
  seq_1->textcolor(FL_BACKGROUND2_COLOR);
  seq_1->callback((Fl_Callback*)cb_seq_1);
  seq_1->align(Fl_Align(FL_ALIGN_LEFT));
  seq_1->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_1
{ seq_2 = new RKR_Slider(56, 49, 100, 10, "2");
  seq_2->type(5);
  seq_2->box(FL_FLAT_BOX);
  seq_2->color((Fl_Color)178);
  seq_2->selection_color((Fl_Color)62);
  seq_2->labeltype(FL_NORMAL_LABEL);
  seq_2->labelfont(0);
  seq_2->labelsize(10);
  seq_2->labelcolor(FL_BACKGROUND2_COLOR);
  seq_2->maximum(127);
  seq_2->step(1);
  seq_2->textcolor(FL_BACKGROUND2_COLOR);
  seq_2->callback((Fl_Callback*)cb_seq_2);
  seq_2->align(Fl_Align(FL_ALIGN_LEFT));
  seq_2->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_2
{ seq_3 = new RKR_Slider(56, 61, 100, 10, "3");
  seq_3->type(5);
  seq_3->box(FL_FLAT_BOX);
  seq_3->color((Fl_Color)178);
  seq_3->selection_color((Fl_Color)62);
  seq_3->labeltype(FL_NORMAL_LABEL);
  seq_3->labelfont(0);
  seq_3->labelsize(10);
  seq_3->labelcolor(FL_BACKGROUND2_COLOR);
  seq_3->maximum(127);
  seq_3->step(1);
  seq_3->textcolor(FL_BACKGROUND2_COLOR);
  seq_3->callback((Fl_Callback*)cb_seq_3);
  seq_3->align(Fl_Align(FL_ALIGN_LEFT));
  seq_3->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_3
{ seq_4 = new RKR_Slider(56, 73, 100, 10, "4");
  seq_4->type(5);
  seq_4->box(FL_FLAT_BOX);
  seq_4->color((Fl_Color)178);
  seq_4->selection_color((Fl_Color)62);
  seq_4->labeltype(FL_NORMAL_LABEL);
  seq_4->labelfont(0);
  seq_4->labelsize(10);
  seq_4->labelcolor(FL_BACKGROUND2_COLOR);
  seq_4->maximum(127);
  seq_4->step(1);
  seq_4->textcolor(FL_BACKGROUND2_COLOR);
  seq_4->callback((Fl_Callback*)cb_seq_4);
  seq_4->align(Fl_Align(FL_ALIGN_LEFT));
  seq_4->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_4
{ seq_5 = new RKR_Slider(56, 85, 100, 10, "5");
  seq_5->type(5);
  seq_5->box(FL_FLAT_BOX);
  seq_5->color((Fl_Color)178);
  seq_5->selection_color((Fl_Color)62);
  seq_5->labeltype(FL_NORMAL_LABEL);
  seq_5->labelfont(0);
  seq_5->labelsize(10);
  seq_5->labelcolor(FL_BACKGROUND2_COLOR);
  seq_5->maximum(127);
  seq_5->step(1);
  seq_5->textcolor(FL_BACKGROUND2_COLOR);
  seq_5->callback((Fl_Callback*)cb_seq_5);
  seq_5->align(Fl_Align(FL_ALIGN_LEFT));
  seq_5->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_5
{ seq_6 = new RKR_Slider(56, 97, 100, 10, "6");
  seq_6->type(5);
  seq_6->box(FL_FLAT_BOX);
  seq_6->color((Fl_Color)178);
  seq_6->selection_color((Fl_Color)62);
  seq_6->labeltype(FL_NORMAL_LABEL);
  seq_6->labelfont(0);
  seq_6->labelsize(10);
  seq_6->labelcolor(FL_BACKGROUND2_COLOR);
  seq_6->maximum(127);
  seq_6->step(1);
  seq_6->textcolor(FL_BACKGROUND2_COLOR);
  seq_6->callback((Fl_Callback*)cb_seq_6);
  seq_6->align(Fl_Align(FL_ALIGN_LEFT));
  seq_6->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_6
{ seq_7 = new RKR_Slider(56, 109, 100, 10, "7");
  seq_7->type(5);
  seq_7->box(FL_FLAT_BOX);
  seq_7->color((Fl_Color)178);
  seq_7->selection_color((Fl_Color)62);
  seq_7->labeltype(FL_NORMAL_LABEL);
  seq_7->labelfont(0);
  seq_7->labelsize(10);
  seq_7->labelcolor(FL_BACKGROUND2_COLOR);
  seq_7->maximum(127);
  seq_7->step(1);
  seq_7->textcolor(FL_BACKGROUND2_COLOR);
  seq_7->callback((Fl_Callback*)cb_seq_7);
  seq_7->align(Fl_Align(FL_ALIGN_LEFT));
  seq_7->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_7
{ seq_8 = new RKR_Slider(56, 121, 100, 10, "8");
  seq_8->type(5);
  seq_8->box(FL_FLAT_BOX);
  seq_8->color((Fl_Color)178);
  seq_8->selection_color((Fl_Color)62);
  seq_8->labeltype(FL_NORMAL_LABEL);
  seq_8->labelfont(0);
  seq_8->labelsize(10);
  seq_8->labelcolor(FL_BACKGROUND2_COLOR);
  seq_8->maximum(127);
  seq_8->step(1);
  seq_8->textcolor(FL_BACKGROUND2_COLOR);
  seq_8->callback((Fl_Callback*)cb_seq_8);
  seq_8->align(Fl_Align(FL_ALIGN_LEFT));
  seq_8->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_8
{ seq_tempo = new RKR_Slider(56, 133, 100, 10, "Tempo");
  seq_tempo->type(5);
  seq_tempo->box(FL_FLAT_BOX);
  seq_tempo->color((Fl_Color)178);
  seq_tempo->selection_color((Fl_Color)62);
  seq_tempo->labeltype(FL_NORMAL_LABEL);
  seq_tempo->labelfont(0);
  seq_tempo->labelsize(10);
  seq_tempo->labelcolor(FL_BACKGROUND2_COLOR);
  seq_tempo->minimum(1);
  seq_tempo->maximum(600);
  seq_tempo->step(1);
  seq_tempo->textcolor(FL_BACKGROUND2_COLOR);
  seq_tempo->callback((Fl_Callback*)cb_seq_tempo);
  seq_tempo->align(Fl_Align(FL_ALIGN_LEFT));
  seq_tempo->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_tempo
{ seq_q = new RKR_Slider(56, 145, 100, 10, "Q");
  seq_q->tooltip("Filter Resonance");
  seq_q->type(5);
  seq_q->box(FL_FLAT_BOX);
  seq_q->color((Fl_Color)178);
  seq_q->selection_color((Fl_Color)62);
  seq_q->labeltype(FL_NORMAL_LABEL);
  seq_q->labelfont(0);
  seq_q->labelsize(10);
  seq_q->labelcolor(FL_BACKGROUND2_COLOR);
  seq_q->minimum(-64);
  seq_q->maximum(64);
  seq_q->step(1);
  seq_q->textcolor(FL_BACKGROUND2_COLOR);
  seq_q->callback((Fl_Callback*)cb_seq_q);
  seq_q->align(Fl_Align(FL_ALIGN_LEFT));
  seq_q->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_q
{ seq_stdf = new RKR_Slider(56, 157, 100, 10, "Stereo Df");
  seq_stdf->tooltip("Right Channel Step Lag");
  seq_stdf->type(5);
  seq_stdf->box(FL_FLAT_BOX);
  seq_stdf->color((Fl_Color)178);
  seq_stdf->selection_color((Fl_Color)62);
  seq_stdf->labeltype(FL_NORMAL_LABEL);
  seq_stdf->labelfont(0);
  seq_stdf->labelsize(10);
  seq_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  seq_stdf->maximum(7);
  seq_stdf->step(1);
  seq_stdf->textcolor(FL_BACKGROUND2_COLOR);
  seq_stdf->callback((Fl_Callback*)cb_seq_stdf);
  seq_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  seq_stdf->when(FL_WHEN_CHANGED);
} // RKR_Slider* seq_stdf
{ seq_amp = new RKR_Check_Button(9, 111, 43, 14, "Amp");
  seq_amp->tooltip("Amplitude/Alt. Mode");
  seq_amp->box(FL_NO_BOX);
  seq_amp->down_box(FL_BORDER_BOX);
  seq_amp->color(FL_BACKGROUND_COLOR);
  seq_amp->selection_color(FL_FOREGROUND_COLOR);
  seq_amp->labeltype(FL_NORMAL_LABEL);
  seq_amp->labelfont(0);
  seq_amp->labelsize(10);
  seq_amp->labelcolor(FL_BACKGROUND2_COLOR);
  seq_amp->callback((Fl_Callback*)cb_seq_amp, (void*)(2));
  seq_amp->align(Fl_Align(FL_ALIGN_TOP_LEFT));
  seq_amp->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* seq_amp
{ RKR_Choice* o = seq_mode = new RKR_Choice(90, 169, 62, 13, "M");
  seq_mode->tooltip("Modulation Mode");
  seq_mode->box(FL_FLAT_BOX);
  seq_mode->down_box(FL_BORDER_BOX);
  seq_mode->color(FL_BACKGROUND_COLOR);
  seq_mode->selection_color(FL_SELECTION_COLOR);
  seq_mode->labeltype(FL_NORMAL_LABEL);
  seq_mode->labelfont(0);
  seq_mode->labelsize(9);
  seq_mode->labelcolor(FL_BACKGROUND2_COLOR);
  seq_mode->textsize(9);
  seq_mode->textcolor(FL_BACKGROUND2_COLOR);
  seq_mode->callback((Fl_Callback*)cb_seq_mode, (void*)(12));
  seq_mode->align(Fl_Align(FL_ALIGN_LEFT));
  seq_mode->when(FL_WHEN_RELEASE);
  seq_mode->menu(menu_seq_mode);
  o->set_label_offset(-1);
  o->set_text_offset(-1);
} // RKR_Choice* seq_mode
{ RKR_Choice* o = seq_range = new RKR_Choice(16, 169, 57, 13, "R");
  seq_range->tooltip("Step Adjustment Range");
  seq_range->box(FL_FLAT_BOX);
  seq_range->down_box(FL_BORDER_BOX);
  seq_range->color(FL_BACKGROUND_COLOR);
  seq_range->selection_color(FL_SELECTION_COLOR);
  seq_range->labeltype(FL_NORMAL_LABEL);
  seq_range->labelfont(0);
  seq_range->labelsize(9);
  seq_range->labelcolor(FL_BACKGROUND2_COLOR);
  seq_range->textsize(9);
  seq_range->textcolor(FL_BACKGROUND2_COLOR);
  seq_range->callback((Fl_Callback*)cb_seq_range, (void*)(12));
  seq_range->align(Fl_Align(FL_ALIGN_LEFT));
  seq_range->when(FL_WHEN_RELEASE);
  seq_range->menu(menu_seq_range);
  o->set_label_offset(-1);
  o->set_text_offset(-1);
} // RKR_Choice* seq_range
position(X, Y);
end();
}
