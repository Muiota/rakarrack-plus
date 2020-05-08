// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "delayfilewindow_gui.h"

void DelayFileWindowGui::cb_Load_i(RKR_Button*, void*) {
  char *filename;
filename=fl_file_chooser("Load dly File:","(*.dly)",NULL,0);
if (filename==NULL) return;
filename=fl_filename_setext(filename,".dly");
//strcpy(rkr->efx_Echotron->Filename,filename);

m_delay_file = rkr->efx_Echotron->loadfile(filename);

apply_delay_file();
}
void DelayFileWindowGui::cb_Load(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()->parent()))->cb_Load_i(o,v);
}

void DelayFileWindowGui::cb_Save_i(RKR_Button*, void*) {
  char *filename;
#define EXT ".dly"
filename=fl_file_chooser("Save delay file:","(*" EXT")", NULL/*rkr->Preset_Name*/,0);
if (filename==NULL) return;
filename=fl_filename_setext(filename,EXT);
#undef EXT
save_delay_file(filename);
}
void DelayFileWindowGui::cb_Save(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()->parent()))->cb_Save_i(o,v);
}

void DelayFileWindowGui::cb_New_i(RKR_Button*, void*) {
  m_file_size = 0;
dly_filter->value(1);
dly_delay->value(1);
dly_Q_mode->value(0);
dly_scroll->clear();
add_button->do_callback();
}
void DelayFileWindowGui::cb_New(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()->parent()))->cb_New_i(o,v);
}

void DelayFileWindowGui::cb_add_button_i(RKR_Button*, void*) {
  m_file_size++;

dlyFileGroup *ADDG = new dlyFileGroup(30, (m_file_size * 30) + (60 - dly_scroll->yposition()), 540, 30);

//printf("Before X = %d: Y = %d\n", dly_scroll->xposition(), dly_scroll->yposition());

//ADDG->dly_freq->value(m_file_size);

dly_scroll->add(ADDG);
dly_scroll->redraw();

//dly_scroll->scroll_to(dly_scroll->xposition(), m_file_size * 30);

//printf("After X = %d: Y = %d\n", dly_scroll->xposition(), dly_scroll->yposition());
}
void DelayFileWindowGui::cb_add_button(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()->parent()))->cb_add_button_i(o,v);
}
DelayFileWindowGui::DelayFileWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _DelayFileWindowGui();
}

DelayFileWindowGui::DelayFileWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _DelayFileWindowGui();
}

DelayFileWindowGui::DelayFileWindowGui()
  : Fl_Double_Window(0, 0, 605, 265, "Echotron Delay File") {
  clear_flag(16);
  _DelayFileWindowGui();
}

void DelayFileWindowGui::_DelayFileWindowGui() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Delay_Group = new RKR_Group(0, 0, 605, 265);
  Delay_Group->box(FL_NO_BOX);
  Delay_Group->color(FL_BACKGROUND_COLOR);
  Delay_Group->selection_color(FL_BACKGROUND_COLOR);
  Delay_Group->labeltype(FL_NORMAL_LABEL);
  Delay_Group->labelfont(0);
  Delay_Group->labelsize(14);
  Delay_Group->labelcolor(FL_FOREGROUND_COLOR);
  Delay_Group->align(Fl_Align(FL_ALIGN_TOP));
  Delay_Group->when(FL_WHEN_RELEASE);
  { dly_filter = new RKR_Value_Input(25, 25, 40, 25, "Filter");
    dly_filter->box(FL_DOWN_BOX);
    dly_filter->color(FL_BACKGROUND2_COLOR);
    dly_filter->selection_color(FL_SELECTION_COLOR);
    dly_filter->labeltype(FL_NORMAL_LABEL);
    dly_filter->labelfont(0);
    dly_filter->labelsize(14);
    dly_filter->labelcolor(FL_FOREGROUND_COLOR);
    dly_filter->maximum(100);
    dly_filter->step(0.1);
    dly_filter->value(1);
    dly_filter->align(Fl_Align(FL_ALIGN_TOP));
    dly_filter->when(FL_WHEN_CHANGED);
  } // RKR_Value_Input* dly_filter
  { dly_delay = new RKR_Value_Input(90, 25, 40, 25, "Delay");
    dly_delay->box(FL_DOWN_BOX);
    dly_delay->color(FL_BACKGROUND2_COLOR);
    dly_delay->selection_color(FL_SELECTION_COLOR);
    dly_delay->labeltype(FL_NORMAL_LABEL);
    dly_delay->labelfont(0);
    dly_delay->labelsize(14);
    dly_delay->labelcolor(FL_FOREGROUND_COLOR);
    dly_delay->maximum(100);
    dly_delay->step(0.1);
    dly_delay->value(1);
    dly_delay->align(Fl_Align(FL_ALIGN_TOP));
    dly_delay->when(FL_WHEN_CHANGED);
  } // RKR_Value_Input* dly_delay
  { dly_Q_mode = new RKR_Value_Input(164, 25, 20, 25, "Q Mode");
    dly_Q_mode->box(FL_DOWN_BOX);
    dly_Q_mode->color(FL_BACKGROUND2_COLOR);
    dly_Q_mode->selection_color(FL_SELECTION_COLOR);
    dly_Q_mode->labeltype(FL_NORMAL_LABEL);
    dly_Q_mode->labelfont(0);
    dly_Q_mode->labelsize(14);
    dly_Q_mode->labelcolor(FL_FOREGROUND_COLOR);
    dly_Q_mode->step(1);
    dly_Q_mode->align(Fl_Align(FL_ALIGN_TOP));
    dly_Q_mode->when(FL_WHEN_CHANGED);
  } // RKR_Value_Input* dly_Q_mode
  { RKR_Button* o = new RKR_Button(210, 25, 70, 20, "Load");
    o->box(FL_UP_BOX);
    o->color(FL_BACKGROUND_COLOR);
    o->selection_color(FL_BACKGROUND_COLOR);
    o->labeltype(FL_NORMAL_LABEL);
    o->labelfont(0);
    o->labelsize(14);
    o->labelcolor(FL_FOREGROUND_COLOR);
    o->callback((Fl_Callback*)cb_Load);
    o->align(Fl_Align(FL_ALIGN_CENTER));
    o->when(FL_WHEN_RELEASE);
  } // RKR_Button* o
  { RKR_Button* o = new RKR_Button(290, 25, 70, 20, "Save");
    o->box(FL_UP_BOX);
    o->color(FL_BACKGROUND_COLOR);
    o->selection_color(FL_BACKGROUND_COLOR);
    o->labeltype(FL_NORMAL_LABEL);
    o->labelfont(0);
    o->labelsize(14);
    o->labelcolor(FL_FOREGROUND_COLOR);
    o->callback((Fl_Callback*)cb_Save);
    o->align(Fl_Align(FL_ALIGN_CENTER));
    o->when(FL_WHEN_RELEASE);
  } // RKR_Button* o
  { RKR_Button* o = new RKR_Button(375, 25, 70, 20, "New");
    o->box(FL_UP_BOX);
    o->color(FL_BACKGROUND_COLOR);
    o->selection_color(FL_BACKGROUND_COLOR);
    o->labeltype(FL_NORMAL_LABEL);
    o->labelfont(0);
    o->labelsize(14);
    o->labelcolor(FL_FOREGROUND_COLOR);
    o->callback((Fl_Callback*)cb_New);
    o->align(Fl_Align(FL_ALIGN_CENTER));
    o->when(FL_WHEN_RELEASE);
  } // RKR_Button* o
  { add_button = new RKR_Button(464, 22, 25, 25, "+");
    add_button->tooltip("Add Delay Line");
    add_button->box(FL_UP_BOX);
    add_button->color(FL_BACKGROUND_COLOR);
    add_button->selection_color(FL_BACKGROUND_COLOR);
    add_button->labeltype(FL_NORMAL_LABEL);
    add_button->labelfont(0);
    add_button->labelsize(21);
    add_button->labelcolor(FL_FOREGROUND_COLOR);
    add_button->callback((Fl_Callback*)cb_add_button);
    add_button->align(Fl_Align(FL_ALIGN_CENTER));
    add_button->when(FL_WHEN_RELEASE);
  } // RKR_Button* add_button
  { Fl_Round_Button* o = new Fl_Round_Button(513, 22, 72, 25, "Apply");
    o->tooltip("Apply Changes to Echotron");
    o->type(0);
    o->box(FL_ROUND_UP_BOX);
    o->down_box(FL_ROUND_DOWN_BOX);
  } // Fl_Round_Button* o
  { dly_group = new RKR_Group(34, 81, 543, 20, "  Pan           Time        Level          LP          BP          HP      Fr\
eq          Q       Stages  ");
    dly_group->box(FL_NO_BOX);
    dly_group->color(FL_BACKGROUND_COLOR);
    dly_group->selection_color(FL_BACKGROUND_COLOR);
    dly_group->labeltype(FL_NORMAL_LABEL);
    dly_group->labelfont(0);
    dly_group->labelsize(14);
    dly_group->labelcolor(FL_FOREGROUND_COLOR);
    dly_group->align(Fl_Align(FL_ALIGN_TOP));
    dly_group->when(FL_WHEN_RELEASE);
    dly_group->end();
  } // RKR_Group* dly_group
  { dly_scroll = new Fl_Scroll(25, 88, 560, 165);
    dly_scroll->end();
  } // Fl_Scroll* dly_scroll
  Delay_Group->end();
} // RKR_Group* Delay_Group
this->m_rkr = NULL;
this->m_rgui = NULL;
end();
resizable(this);
}

void DelayFileWindowGui::make_delay_window() {
  // The First Item is always added
  
  add_button->do_callback();
}

void DelayFileWindowGui::initialize(RKR *_rkr,RKRGUI *_rgui) {
  m_file_size = 0;
  m_rkr = _rkr;
  m_rgui= _rgui;
}

void DelayFileWindowGui::apply_delay_file() {
  dly_scroll->clear();
    m_file_size = 0;
      dly_filter->value(m_delay_file.subdiv_fmod);
      dly_delay->value(m_delay_file.subdiv_dmod);
      dly_Q_mode->value(m_delay_file.f_qmode);
      
      for(int i = 0; i < m_delay_file.fLength; ++i)
      {
          m_file_size++;
  
          dlyFileGroup *ADDG = new dlyFileGroup(30, (m_file_size * 30) + (60 - dly_scroll->yposition()), 540, 30);
  
          ADDG->dly_pan->value(m_delay_file.fPan[i]);
          ADDG->dly_time->value(m_delay_file.fTime[i]);
          ADDG->dly_level->value(m_delay_file.fLevel[i]);
          ADDG->dly_LP->value(m_delay_file.fLP[i]);
          ADDG->dly_BP->value(m_delay_file.fBP[i]);
          ADDG->dly_HP->value(m_delay_file.fHP[i]);
          ADDG->dly_freq->value(m_delay_file.fFreq[i]);
          ADDG->dly_Q->value(m_delay_file.fQ[i]);
          ADDG->dly_stages->value(m_delay_file.iStages[i] + 1);	// offset by 1
          
          dly_scroll->add(ADDG);
      }
  
  this->redraw();
}

void DelayFileWindowGui::save_delay_file(char *filename) {
  FILE *fn;
      char buf[256];
      fn = fopen(filename, "w");
  
      if (errno == EACCES)
      {
          rkr->Error_Handle(3);
          fclose(fn);
          return;
      }
      
          //General
      memset(buf, 0, sizeof (buf));
      sprintf(buf, "%f\t%f\t%d\n",m_delay_file.subdiv_fmod,m_delay_file.subdiv_dmod,m_delay_file.f_qmode);
      fputs(buf, fn);
      
      for(int i = 0; i < m_file_size; ++i)
      {
      
          memset(buf, 0, sizeof (buf));
          sprintf
          (
          buf, "%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%d\n",
          m_delay_file.fPan[i],
          m_delay_file.fTime[i],
          m_delay_file.fLevel[i],
          m_delay_file.fLP[i],
          m_delay_file.fBP[i],
          m_delay_file.fHP[i],
          m_delay_file.fFreq[i],
          m_delay_file.fQ[i],
          (m_delay_file.iStages[i] + 1)
          );
          fputs(buf, fn);
      }
      
      fclose(fn);
}
dlyFileGroup::dlyFileGroup(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
{ dly_pan = new RKR_Value_Input(6, 6, 40, 20);
  dly_pan->box(FL_DOWN_BOX);
  dly_pan->color(FL_BACKGROUND2_COLOR);
  dly_pan->selection_color(FL_SELECTION_COLOR);
  dly_pan->labeltype(FL_NO_LABEL);
  dly_pan->labelfont(0);
  dly_pan->labelsize(14);
  dly_pan->labelcolor(FL_FOREGROUND_COLOR);
  dly_pan->minimum(-1);
  dly_pan->step(0.01);
  dly_pan->align(Fl_Align(FL_ALIGN_TOP));
  dly_pan->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_pan
{ dly_time = new RKR_Value_Input(49, 6, 40, 20);
  dly_time->box(FL_DOWN_BOX);
  dly_time->color(FL_BACKGROUND2_COLOR);
  dly_time->selection_color(FL_SELECTION_COLOR);
  dly_time->labeltype(FL_NO_LABEL);
  dly_time->labelfont(0);
  dly_time->labelsize(14);
  dly_time->labelcolor(FL_FOREGROUND_COLOR);
  dly_time->minimum(-6);
  dly_time->maximum(6);
  dly_time->step(0.001);
  dly_time->value(1);
  dly_time->align(Fl_Align(FL_ALIGN_TOP));
  dly_time->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_time
{ dly_level = new RKR_Value_Input(101, 6, 45, 20);
  dly_level->box(FL_DOWN_BOX);
  dly_level->color(FL_BACKGROUND2_COLOR);
  dly_level->selection_color(FL_SELECTION_COLOR);
  dly_level->labeltype(FL_NO_LABEL);
  dly_level->labelfont(0);
  dly_level->labelsize(14);
  dly_level->labelcolor(FL_FOREGROUND_COLOR);
  dly_level->minimum(-10);
  dly_level->maximum(10);
  dly_level->step(0.001);
  dly_level->value(0.7);
  dly_level->align(Fl_Align(FL_ALIGN_TOP));
  dly_level->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_level
{ dly_LP = new RKR_Value_Input(160, 6, 42, 20);
  dly_LP->box(FL_DOWN_BOX);
  dly_LP->color(FL_BACKGROUND2_COLOR);
  dly_LP->selection_color(FL_SELECTION_COLOR);
  dly_LP->labeltype(FL_NO_LABEL);
  dly_LP->labelfont(0);
  dly_LP->labelsize(14);
  dly_LP->labelcolor(FL_FOREGROUND_COLOR);
  dly_LP->minimum(-2);
  dly_LP->maximum(2);
  dly_LP->step(0.001);
  dly_LP->value(1);
  dly_LP->align(Fl_Align(FL_ALIGN_TOP));
  dly_LP->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_LP
{ dly_BP = new RKR_Value_Input(210, 6, 42, 20);
  dly_BP->box(FL_DOWN_BOX);
  dly_BP->color(FL_BACKGROUND2_COLOR);
  dly_BP->selection_color(FL_SELECTION_COLOR);
  dly_BP->labeltype(FL_NO_LABEL);
  dly_BP->labelfont(0);
  dly_BP->labelsize(14);
  dly_BP->labelcolor(FL_FOREGROUND_COLOR);
  dly_BP->minimum(-2);
  dly_BP->maximum(2);
  dly_BP->step(0.001);
  dly_BP->value(-1);
  dly_BP->align(Fl_Align(FL_ALIGN_TOP));
  dly_BP->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_BP
{ dly_HP = new RKR_Value_Input(260, 6, 42, 20);
  dly_HP->box(FL_DOWN_BOX);
  dly_HP->color(FL_BACKGROUND2_COLOR);
  dly_HP->selection_color(FL_SELECTION_COLOR);
  dly_HP->labeltype(FL_NO_LABEL);
  dly_HP->labelfont(0);
  dly_HP->labelsize(14);
  dly_HP->labelcolor(FL_FOREGROUND_COLOR);
  dly_HP->minimum(-2);
  dly_HP->maximum(2);
  dly_HP->step(0.001);
  dly_HP->value(1);
  dly_HP->align(Fl_Align(FL_ALIGN_TOP));
  dly_HP->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_HP
{ dly_freq = new RKR_Value_Input(310, 6, 46, 20);
  dly_freq->box(FL_DOWN_BOX);
  dly_freq->color(FL_BACKGROUND2_COLOR);
  dly_freq->selection_color(FL_SELECTION_COLOR);
  dly_freq->labeltype(FL_NO_LABEL);
  dly_freq->labelfont(0);
  dly_freq->labelsize(14);
  dly_freq->labelcolor(FL_FOREGROUND_COLOR);
  dly_freq->minimum(20);
  dly_freq->maximum(26000);
  dly_freq->step(0.001);
  dly_freq->value(800);
  dly_freq->align(Fl_Align(FL_ALIGN_TOP));
  dly_freq->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_freq
{ dly_Q = new RKR_Value_Input(366, 6, 44, 20);
  dly_Q->box(FL_DOWN_BOX);
  dly_Q->color(FL_BACKGROUND2_COLOR);
  dly_Q->selection_color(FL_SELECTION_COLOR);
  dly_Q->labeltype(FL_NO_LABEL);
  dly_Q->labelfont(0);
  dly_Q->labelsize(14);
  dly_Q->labelcolor(FL_FOREGROUND_COLOR);
  dly_Q->maximum(300);
  dly_Q->step(0.01);
  dly_Q->value(2);
  dly_Q->align(Fl_Align(FL_ALIGN_TOP));
  dly_Q->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_Q
{ dly_stages = new RKR_Value_Input(425, 6, 20, 20);
  dly_stages->box(FL_DOWN_BOX);
  dly_stages->color(FL_BACKGROUND2_COLOR);
  dly_stages->selection_color(FL_SELECTION_COLOR);
  dly_stages->labeltype(FL_NO_LABEL);
  dly_stages->labelfont(0);
  dly_stages->labelsize(14);
  dly_stages->labelcolor(FL_FOREGROUND_COLOR);
  dly_stages->minimum(1);
  dly_stages->maximum(5);
  dly_stages->step(1);
  dly_stages->value(1);
  dly_stages->align(Fl_Align(FL_ALIGN_TOP));
  dly_stages->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_stages
position(X, Y);
end();
}
