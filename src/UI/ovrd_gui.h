// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef ovrd_gui_h
#define ovrd_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>

class OvrdGui : public Fl_Group {
public:
  OvrdGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *ovrd_activar;
private:
  inline void cb_ovrd_activar_i(Fl_Light_Button*, void*);
  static void cb_ovrd_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *ovrd_preset;
private:
  inline void cb_ovrd_preset_i(Fl_Choice*, void*);
  static void cb_ovrd_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_ovrd_preset[];
public:
  SliderW *ovrd_WD;
private:
  inline void cb_ovrd_WD_i(SliderW*, void*);
  static void cb_ovrd_WD(SliderW*, void*);
public:
  SliderW *ovrd_LRc;
private:
  inline void cb_ovrd_LRc_i(SliderW*, void*);
  static void cb_ovrd_LRc(SliderW*, void*);
public:
  SliderW *ovrd_drive;
private:
  inline void cb_ovrd_drive_i(SliderW*, void*);
  static void cb_ovrd_drive(SliderW*, void*);
public:
  SliderW *ovrd_level;
private:
  inline void cb_ovrd_level_i(SliderW*, void*);
  static void cb_ovrd_level(SliderW*, void*);
public:
  Fl_Choice *ovrd_tipo;
private:
  inline void cb_ovrd_tipo_i(Fl_Choice*, void*);
  static void cb_ovrd_tipo(Fl_Choice*, void*);
  static Fl_Menu_Item menu_ovrd_tipo[];
public:
  Fl_Check_Button *ovrd_neg;
private:
  inline void cb_ovrd_neg_i(Fl_Check_Button*, void*);
  static void cb_ovrd_neg(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *ovrd_st;
private:
  inline void cb_ovrd_st_i(Fl_Check_Button*, void*);
  static void cb_ovrd_st(Fl_Check_Button*, void*);
public:
  SliderW *ovrd_pan;
private:
  inline void cb_ovrd_pan_i(SliderW*, void*);
  static void cb_ovrd_pan(SliderW*, void*);
public:
  Fl_Check_Button *ovrd_pf;
private:
  inline void cb_ovrd_pf_i(Fl_Check_Button*, void*);
  static void cb_ovrd_pf(Fl_Check_Button*, void*);
public:
  SliderW *ovrd_lpf;
private:
  inline void cb_ovrd_lpf_i(SliderW*, void*);
  static void cb_ovrd_lpf(SliderW*, void*);
public:
  SliderW *ovrd_hpf;
private:
  inline void cb_ovrd_hpf_i(SliderW*, void*);
  static void cb_ovrd_hpf(SliderW*, void*);
};
#endif