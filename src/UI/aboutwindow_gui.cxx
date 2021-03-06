// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "aboutwindow_gui.h"

void AboutWindowGui::cb_LICENSE_i(Fl_Button*, void*) {
  m_rgui->show_lic();
}
void AboutWindowGui::cb_LICENSE(Fl_Button* o, void* v) {
  ((AboutWindowGui*)(o->parent()))->cb_LICENSE_i(o,v);
}

void AboutWindowGui::cb_OK_i(Fl_Button*, void*) {
  hide();
}
void AboutWindowGui::cb_OK(Fl_Button* o, void* v) {
  ((AboutWindowGui*)(o->parent()))->cb_OK_i(o,v);
}
AboutWindowGui::AboutWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _AboutWindowGui();
}

AboutWindowGui::AboutWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _AboutWindowGui();
}

AboutWindowGui::AboutWindowGui()
  : Fl_Double_Window(0, 0, 375, 280, "About Rakarrack-Plus") {
  clear_flag(16);
  _AboutWindowGui();
}

void AboutWindowGui::_AboutWindowGui() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ AB_Title = new Fl_Box(56, 4, 259, 41, "Rakarrack +");
  AB_Title->labelfont(1);
  AB_Title->labelsize(40);
  AB_Title->labelcolor(FL_BACKGROUND2_COLOR);
} // Fl_Box* AB_Title
{ AB_SubTitle = new Fl_Box(121, 39, 130, 22, "Audio F/X");
  AB_SubTitle->labelfont(1);
  AB_SubTitle->labelsize(16);
  AB_SubTitle->labelcolor(FL_BACKGROUND2_COLOR);
} // Fl_Box* AB_SubTitle
{ About_Version = new Fl_Box(69, 60, 233, 15);
  About_Version->labelsize(12);
  About_Version->labelcolor(FL_BACKGROUND2_COLOR);
  About_Version->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
} // Fl_Box* About_Version
{ AB_url = new Fl_Box(30, 77, 314, 22, "https://github.com/Stazed/rakarrack-plus");
  AB_url->labelfont(1);
  AB_url->labelsize(13);
  AB_url->labelcolor((Fl_Color)6);
} // Fl_Box* AB_url
{ AB_Authors = new Fl_Box(20, 96, 345, 26, "Copyright Josep Andreu, Ryan Billing, Douglas McClendon, Arnout Engelen <2007\
 - 2010>");
  AB_Authors->labelfont(1);
  AB_Authors->labelsize(8);
  AB_Authors->labelcolor(FL_BACKGROUND2_COLOR);
  AB_Authors->align(Fl_Align(FL_ALIGN_WRAP));
} // Fl_Box* AB_Authors
{ AB_A1 = new Fl_Box(44, 125, 281, 26, "Code of some effects and structure based on ZynAddSubFx by Paul Nasca Octavia\
n");
  AB_A1->labelfont(1);
  AB_A1->labelsize(8);
  AB_A1->labelcolor(FL_BACKGROUND2_COLOR);
  AB_A1->align(Fl_Align(FL_ALIGN_WRAP));
} // Fl_Box* AB_A1
{ AB_A2 = new Fl_Box(66, 172, 240, 15, "Code of Tuner taken from tuneit by Mario Lang");
  AB_A2->labelfont(1);
  AB_A2->labelsize(8);
  AB_A2->labelcolor(FL_BACKGROUND2_COLOR);
} // Fl_Box* AB_A2
{ AB_A3 = new Fl_Box(84, 185, 219, 24, "Code of Compressor based in ArtsCompresor by Matthias Kretz & Stefan Westerfe\
ld");
  AB_A3->labelfont(1);
  AB_A3->labelsize(8);
  AB_A3->labelcolor(FL_BACKGROUND2_COLOR);
  AB_A3->align(Fl_Align(FL_ALIGN_WRAP));
} // Fl_Box* AB_A3
{ AB_A4 = new Fl_Box(64, 151, 250, 20, "Code of some effects based on swh-plugins LADSPA by Steve Harris");
  AB_A4->labelfont(1);
  AB_A4->labelsize(8);
  AB_A4->labelcolor(FL_BACKGROUND2_COLOR);
  AB_A4->align(Fl_Align(FL_ALIGN_WRAP));
} // Fl_Box* AB_A4
{ AB_A5 = new Fl_Box(74, 208, 250, 20, "LV2 Plugins (From rkrlv2) by Spencer Jackson");
  AB_A5->labelfont(1);
  AB_A5->labelsize(8);
  AB_A5->labelcolor(FL_BACKGROUND2_COLOR);
  AB_A5->align(Fl_Align(FL_ALIGN_WRAP));
} // Fl_Box* AB_A5
{ AB_A6 = new Fl_Box(84, 224, 250, 20, "Rakarrack + modifications by Stazed");
  AB_A6->labelfont(1);
  AB_A6->labelsize(8);
  AB_A6->labelcolor(FL_BACKGROUND2_COLOR);
  AB_A6->align(Fl_Align(FL_ALIGN_WRAP));
} // Fl_Box* AB_A6
{ Fl_Button* o = new Fl_Button(48, 252, 92, 16, "LICENSE");
  o->labelsize(10);
  o->callback((Fl_Callback*)cb_LICENSE);
} // Fl_Button* o
{ Fl_Button* o = new Fl_Button(239, 252, 92, 16, "OK");
  o->labelsize(10);
  o->callback((Fl_Callback*)cb_OK);
} // Fl_Button* o
this->m_rgui = NULL;
end();
}

void AboutWindowGui::initialize(RKRGUI *_rgui ) {
  m_rgui= _rgui;
}
