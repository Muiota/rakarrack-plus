// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef har_gui_h
#define har_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Check_Button.h"
#include "RKR_Choice.h"
#include <FL/Fl_Group.H>
#include "RKR_Slider.h"
#include "../process.h"
#include "rakarrack.h"

class HarGui : public Fl_Group {
public:
  HarGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *har_activar;
private:
  inline void cb_har_activar_i(RKR_Light_Button*, void*);
  static void cb_har_activar(RKR_Light_Button*, void*);
public:
  RKR_Choice *har_preset;
private:
  inline void cb_har_preset_i(RKR_Choice*, void*);
  static void cb_har_preset(RKR_Choice*, void*);
  static Fl_Menu_Item menu_har_preset[];
public:
  RKR_Slider *har_WD;
private:
  inline void cb_har_WD_i(RKR_Slider*, void*);
  static void cb_har_WD(RKR_Slider*, void*);
public:
  RKR_Slider *har_int;
private:
  inline void cb_har_int_i(RKR_Slider*, void*);
  static void cb_har_int(RKR_Slider*, void*);
public:
  RKR_Slider *har_gan;
private:
  inline void cb_har_gan_i(RKR_Slider*, void*);
  static void cb_har_gan(RKR_Slider*, void*);
public:
  RKR_Slider *har_pan;
private:
  inline void cb_har_pan_i(RKR_Slider*, void*);
  static void cb_har_pan(RKR_Slider*, void*);
public:
  RKR_Slider *har_freq1;
private:
  inline void cb_har_freq1_i(RKR_Slider*, void*);
  static void cb_har_freq1(RKR_Slider*, void*);
public:
  RKR_Slider *har_gan1;
private:
  inline void cb_har_gan1_i(RKR_Slider*, void*);
  static void cb_har_gan1(RKR_Slider*, void*);
public:
  RKR_Slider *har_q1;
private:
  inline void cb_har_q1_i(RKR_Slider*, void*);
  static void cb_har_q1(RKR_Slider*, void*);
public:
  RKR_Check_Button *har_MIDI;
private:
  inline void cb_har_MIDI_i(RKR_Check_Button*, void*);
  static void cb_har_MIDI(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *har_SELECT;
private:
  inline void cb_har_SELECT_i(RKR_Check_Button*, void*);
  static void cb_har_SELECT(RKR_Check_Button*, void*);
public:
  RKR_Box *har_chordname;
  RKR_Slider *har_note;
private:
  inline void cb_har_note_i(RKR_Slider*, void*);
  static void cb_har_note(RKR_Slider*, void*);
public:
  RKR_Slider *har_type;
private:
  inline void cb_har_type_i(RKR_Slider*, void*);
  static void cb_har_type(RKR_Slider*, void*);
};
#endif
