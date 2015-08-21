/*
============================================================================
Name : learn.cpp
Author : makowiec
Version :
Copyright : priv
Description : Learn in gtkmm
============================================================================
*/

#include "rwin.h"
#include <iostream>

Startr::Startr()
: m_button_r1("Polnoc"), m_button_r2("Poludnie") // creates a new button with label "Hello World".

{
// Parametry okna.
set_border_width(30); //odleglosc pomiedzy obramowaniem okna, a elementami wewnatrz
set_title("Learn 2015"); //tytul
set_size_request(300,150); //rozmiar
set_position(Gtk::WIN_POS_CENTER); // pozyzja okna - wysrodkowana wzgledem pulpitu
set_resizable( false ); // blokowanie zmiany rozmiaru okna

// Kontener poziomy 1
Kontener_poziomy_r1.pack_start( m_button_r1, Gtk::PACK_EXPAND_WIDGET, 10 );
Kontener_poziomy_r1.pack_start( m_button_r2, Gtk::PACK_EXPAND_WIDGET, 10 );

Kontener_poziomy_r1.set_homogeneous( true ); //Ujednolicenie rozmiaru przyciskow

// When the button receives the "clicked" signal, it will call the
// on_button_clicked() method defined below.
m_button_r1.signal_clicked().connect(sigc::mem_fun(*this, &Startr::on_button_clicked_r1));
m_button_r2.signal_clicked().connect(sigc::mem_fun(*this, &Startr::on_button_clicked_r2));

// This packs the button into the Window (a container).
add( Kontener_poziomy_r1 );
show_all();
//add(m_button);

// The final step is to display this newly created widget...
//m_button_1.show();
//m_button_2.show();
}

Startr::~Startr()
{
}

void Startr::on_button_clicked_r1()
{
std::cout << "Hello P�noc" << std::endl;
}
void Startr::on_button_clicked_r2()
{
std::cout << "Hello Po�udnie" << std::endl;
}
