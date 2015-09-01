#ifndef GTKMM_EXAMPLE_RWIN_H
#define GTKMM_EXAMPLE_RWIN_H

#include <gtkmm/button.h>
#include <gtkmm/image.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm.h>
#include <gdk/gdk.h>

class Rwin : public Gtk::Window
{

public:
Rwin();
virtual ~Rwin();

protected:
//Signal handlers:
void dodawanie_przyciskow_zadan_tab_r1();
void dodawanie_przyciskow_tab_r1();
void dodanie_napisow_tab_r1();
void dodanie_ikon_tab_r1();
void ukrywanie_przyciskow_tab_r1();
void on_button_clicked_job_r_0();
void on_button_clicked_job_r_1();
void on_button_clicked_job_r_2();
void on_button_clicked_job_r_3();
void on_button_clicked_job_r_4();
void on_button_clicked_job_r_5();
void on_button_clicked_job_r_6();
void on_button_clicked_job_r_7();
void on_button_clicked_job_r_8();
void on_button_clicked_job_r_9();
void on_button_clicked_pic_r_0();
void on_button_clicked_pic_r_1();
void on_button_clicked_pic_r_2();
void on_button_clicked_pic_r_3();
void on_button_clicked_pic_r_4();
void on_button_clicked_pic_r_5();
void on_button_clicked_pic_r_6();
void on_button_clicked_pic_r_7();
void on_button_clicked_pic_r_8();
void on_button_clicked_pic_r_9();

private:
Gtk::Table tab_r1; // tabela
Gtk::Button
button_job_r[10], // wywolywanie zadan
button_info_r[10], // biezaca informacja o obiekcie
button_sys_r[10], // archiwalna informacja o obiekcie
button_pic_r[10], // podglad obiektu w zewnetrznym programie
button_res_r[10]; // podglad rezultatu
Gtk::Label
label_info_r[10], //etykiety tetowe pierwsze kolumny
label_head_r; // naglowek
//Gtk::Widget
//widget_1;
//image_info_r1;
};

#endif // GTKMM_EXAMPLE_RWIN_H
