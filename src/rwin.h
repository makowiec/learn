#ifndef GTKMM_EXAMPLE_RWIN_H
#define GTKMM_EXAMPLE_RWIN_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm.h>

class Rwin : public Gtk::Window
{

public:
Rwin();
virtual ~Rwin();

protected:
//Signal handlers:
//void on_button_clicked_r1();
//void on_button_clicked_r2();
void dodawanie_przyciskow_tab_r1();

private:
Gtk::Table tab_r1; // tabela
Gtk::Button
button_info_r[10], // biezaca informacja o obiekcie
button_sys_r[10], // archiwalna informacja o obiekcie
button_pic_r[10], // podglad obiektu w zewnetrznym programie
button_res_r[10]; // podglad rezultatu

/*
button_info_r01, button_info_r02, button_info_r03, button_info_r04, button_info_r05, // biezaca informacja o obiekcie
button_info_r06, button_info_r07, button_info_r08, button_info_r09, button_info_r10, // biezaca informacja o obiekcie
button_sys_r01, button_sys_r02, button_sys_r03, button_sys_r04, button_sys_r05, // archiwalna informacja o obiekcie
button_sys_r06, button_sys_r07, button_sys_r08, button_sys_r09, button_sys_r10, // archiwalna informacja o obiekcie
button_pic_r01, button_pic_r02, button_pic_r03, button_pic_r04, button_pic_r05, // podglad obiektu w zewnetrznym programie
button_pic_r06, button_pic_r07, button_pic_r08, button_pic_r09, button_pic_r10, // podglad obiektu  w zewnetrznym programie
button_res_r01, button_res_r02, button_res_r03, button_res_r04, button_res_r05, // podglad rezultatu
button_res_r06, button_res_r07, button_res_r08, button_res_r09, button_res_r10; // podglad rezultatu
*/
};

#endif // GTKMM_EXAMPLE_RWIN_H
