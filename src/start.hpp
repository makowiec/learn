#ifndef GTKMM_EXAMPLE_START_HPP
#define GTKMM_EXAMPLE_START_HPP
/*
============================================================================
Name 		: start.hpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Glowne okno programu
============================================================================
*/
#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>

class Start : public Gtk::Window
{

public:
Start();
virtual ~Start();

protected:
//Signal handlers:
void on_button_clicked_1();
void on_button_clicked_2();

private:
Gtk::HBox Kontener_poziomy_1; // Deklaracja obiektu listy poziomej
Gtk::Button m_button_1, m_button_2; // Dekretacja przycisku
};

#endif // GTKMM_EXAMPLE_START_HPP
