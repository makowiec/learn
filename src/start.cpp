/*
============================================================================
Name : start.cpp
Author : makowiec
Version :
Copyright : priv
Description : Learn in gtkmm
============================================================================
*/

#include "start.h"
#include "rwin.h"
#include <iostream>
#include <gtkmm/main.h>

Start::Start()
: m_button_1("North"), m_button_2("South") // tworzenie przycikow

{
// Parametry okna
set_border_width(30); //odleglosc pomiedzy obramowaniem okna, a elementami wewnatrz
set_title("Learn 2015"); //tytul
set_size_request(300,150); //rozmiar
set_position(Gtk::WIN_POS_CENTER); // pozyzja okna - wysrodkowana wzgledem pulpitu
set_resizable( false ); // blokowanie zmiany rozmiaru okna

// Kontener poziomy 1
Kontener_poziomy_1.pack_start( m_button_1, Gtk::PACK_EXPAND_WIDGET, 10 );
Kontener_poziomy_1.pack_start( m_button_2, Gtk::PACK_EXPAND_WIDGET, 10 );

Kontener_poziomy_1.set_homogeneous( true ); //Ujednolicenie rozmiaru przyciskow

// When the button receives the "clicked" signal, it will call the
// on_button_clicked() method defined below.
m_button_1.signal_clicked().connect(sigc::mem_fun(*this, &Start::on_button_clicked_1));
m_button_2.signal_clicked().connect(sigc::mem_fun(*this, &Start::on_button_clicked_2));

// This packs the button into the Window (a container).
add( Kontener_poziomy_1 );
show_all();
//add(m_button);

// The final step is to display this newly created widget...
//m_button_1.show();
//m_button_2.show();
}

Start::~Start()
{
}
// Wywolanie fukcji dla przyciskow
void Start::on_button_clicked_1()
{

	Startr rwin;
	//Shows the window and returns when it is closed.
	Gtk::Main::run(rwin);


//std::cout << "Hello Pó³noc" << std::endl;
}
void Start::on_button_clicked_2()
{
std::cout << "Hello Hella" << std::endl;
}
