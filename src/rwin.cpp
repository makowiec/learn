/*
============================================================================
Name : learn.cpp
Author : makowiec
Version :
Copyright : priv
Description : Okno dla danych z North ;)
============================================================================
*/

#include "rwin.h"
#include <iostream>
#include <cstdio>

Rwin::Rwin()
//: m_button_r1("Polnoc"), m_button_r2("Poludnie") // creates a new button with label "Hello World".
: tab_r1( 12, 5, false ) // tabela 12x5
{
// Parametry okna.
set_border_width(30); //odleglosc pomiedzy obramowaniem okna, a elementami wewnatrz
set_title("Learn 2015"); //tytul
set_size_request(800,600); //rozmiar
set_position(Gtk::WIN_POS_CENTER); // pozyzja okna - wysrodkowana wzgledem pulpitu
set_resizable( false ); // blokowanie zmiany rozmiaru okna

// Tabela 1
dodawanie_przyciskow_tab_r1(); // funkcja dodajaca przyciski
dodanie_napisow_tab_r1(); // funkcja dodajaca napisy "Zadanie nr"



// Kontener poziomy 1
//Kontener_poziomy_r1.pack_start( m_button_r1, Gtk::PACK_EXPAND_WIDGET, 10 );
//Kontener_poziomy_r1.pack_start( m_button_r2, Gtk::PACK_EXPAND_WIDGET, 10 );

//Kontener_poziomy_r1.set_homogeneous( true ); //Ujednolicenie rozmiaru przyciskow

// When the button receives the "clicked" signal, it will call the
// on_button_clicked() method defined below.
//m_button_r1.signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_r1));
//m_button_r2.signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_r2));

// This packs the button into the Window (a container).

add( tab_r1 );
show_all();
//add(m_button);

// The final step is to display this newly created widget...
//m_button_1.show();
//m_button_2.show();
}

Rwin::~Rwin()
{
}

void Rwin::dodawanie_przyciskow_tab_r1()
{
	tab_r1.set_row_spacings(10); //odstepy pomiedzy wierszami
	tab_r1.set_col_spacings(50); //odstepy pomiedzy kolumnami

	for( int i = 0; i < 10; ++i )
	    {
		tab_r1.attach( labet_info_r[i], 0, 1, i+1, i+2 );
		tab_r1.attach( button_info_r[i], 1, 2, i+1, i+2 );
		tab_r1.attach( button_sys_r[i], 2, 3, i+1, i+2 );
		tab_r1.attach( button_pic_r[i], 3, 4, i+1, i+2 );
		tab_r1.attach( button_res_r[i], 4, 5, i+1, i+2 );
	    }
}

void Rwin::dodanie_napisow_tab_r1()
{

	for( int i = 1; i < 11; ++i )
	    {
	        /* Konwertujemy liczbe na lancuch znakow */
	        char Temp[11];


	        sprintf( Temp, "Zadanie %i", i);

	        /* Ustawiamy etykiete */
	        labet_info_r[i-1].set_label( Temp );
	    }
}
/*void Rwin::on_button_clicked_r1()
{
std::cout << "Hello Pó³noc" << std::endl;
}
void Rwin::on_button_clicked_r2()
{
std::cout << "Hello Po³udnie" << std::endl;
}
*/
