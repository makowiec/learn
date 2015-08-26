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
: tab_r1( 12, 5, true ) // tabela 12x5

{
// Parametry okna.
	set_border_width(20); //odleglosc pomiedzy obramowaniem okna, a elementami wewnatrz
	set_title("Learn 2015"); //tytul
	set_size_request(800,600); //rozmiar
	set_position(Gtk::WIN_POS_CENTER); // pozyzja okna - wysrodkowana wzgledem pulpitu
	set_resizable( false ); // blokowanie zmiany rozmiaru okna

// Tabela 1
	dodawanie_przyciskow_tab_r1(); // funkcja dodajaca przyciski
	dodanie_napisow_tab_r1(); // funkcja dodajaca napisy "Zadanie nr"
	dodanie_ikon_tab_r1(); // funkcja dodajaca ikony do przyciskow
	dodawanie_przyciskow_zadan_tab_r1(); // funkcja dodajaca przyciski zadan

// Akcja klikniecie
	button_job_r[0].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_0));
	button_job_r[1].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_1));
	button_job_r[2].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_2));
	button_job_r[3].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_3));
	button_job_r[4].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_4));
	button_job_r[5].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_5));
	button_job_r[6].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_6));
	button_job_r[7].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_7));
	button_job_r[8].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_8));
	button_job_r[9].signal_clicked().connect(sigc::mem_fun(*this, &Rwin::on_button_clicked_job_r_9));


//Wyswietlane elementy
add( tab_r1 );
tab_r1.show();
label_head_r.show();
for( int i = 0; i < 10; ++i )
	{
	button_job_r[i].show();
	}
//show_all();
}

Rwin::~Rwin()
{

}

void Rwin::dodawanie_przyciskow_zadan_tab_r1()
{
	tab_r1.set_row_spacings(5); //odstepy pomiedzy wierszami
	tab_r1.set_col_spacings(10); //odstepy pomiedzy kolumnami

	for( int i = 0; i < 10; ++i )
		{
		tab_r1.attach( button_job_r[i], 0, 1, i+1, i+2 );
		button_job_r[i].set_size_request(0, 0);
		}
}

void Rwin::dodawanie_przyciskow_tab_r1()
{
	tab_r1.set_row_spacings(5); //odstepy pomiedzy wierszami
	tab_r1.set_col_spacings(10); //odstepy pomiedzy kolumnami

	for( int i = 0; i < 10; ++i )
	    {
		tab_r1.attach( button_info_r[i], 1, 2, i+1, i+2 );
		tab_r1.attach( button_sys_r[i], 2, 3, i+1, i+2 );
		tab_r1.attach( button_pic_r[i], 3, 4, i+1, i+2 );
		tab_r1.attach( button_res_r[i], 4, 5, i+1, i+2 );
		//button_info_r[i].set_size_request(30,5);
		//button_sys_r[i].set_size_request(5,5);
		//button_pic_r[i].set_size_request(5,5);
		//button_res_r[i].set_size_request(5,5);
	    }
}

void Rwin::dodanie_ikon_tab_r1()
{
	for( int i = 0; i < 10; ++i )
	    {
		button_info_r[i].add_pixlabel("./icons/info_icon.png", "Info");
		button_sys_r[i].add_pixlabel("./icons/search_icon.png", "Szukanie");
		button_pic_r[i].add_pixlabel("./icons/rtg_icon.png", "Cel");
		button_res_r[i].add_pixlabel("./icons/gear_icon.png", "Wynik");
	    }
}

void Rwin::dodanie_napisow_tab_r1()
{

	label_head_r.set_markup( "<span size=\"x-large\">Rrr...</span>");

	tab_r1.attach( label_head_r, 0, 5, 0, 1 );

	for( int i = 1; i < 11; ++i )
	    {
	        /* Konwertujemy liczbe na lancuch znakow */
	        char Temp[11];
	        sprintf( Temp, "Zadanie %i", i);
	        /* Ustawiamy etykiete */
	        button_job_r[i-1].set_label( Temp );

	    }
}

void Rwin::on_button_clicked_job_r_0()
{
	button_info_r[0].show();
	button_sys_r[0].show();
	button_pic_r[0].show();
	button_res_r[0].show();
}

void Rwin::on_button_clicked_job_r_1()
{
	button_info_r[1].show();
	button_sys_r[1].show();
	button_pic_r[1].show();
	button_res_r[1].show();
}

void Rwin::on_button_clicked_job_r_2()
{
	button_info_r[2].show();
	button_sys_r[2].show();
	button_pic_r[2].show();
	button_res_r[2].show();
}

void Rwin::on_button_clicked_job_r_3()
{
	button_info_r[3].show();
	button_sys_r[3].show();
	button_pic_r[3].show();
	button_res_r[3].show();
}

void Rwin::on_button_clicked_job_r_4()
{
	button_info_r[4].show();
	button_sys_r[4].show();
	button_pic_r[4].show();
	button_res_r[4].show();
}

void Rwin::on_button_clicked_job_r_5()
{
	button_info_r[5].show();
	button_sys_r[5].show();
	button_pic_r[5].show();
	button_res_r[5].show();
}

void Rwin::on_button_clicked_job_r_6()
{
	button_info_r[6].show();
	button_sys_r[6].show();
	button_pic_r[6].show();
	button_res_r[6].show();
}

void Rwin::on_button_clicked_job_r_7()
{
	button_info_r[7].show();
	button_sys_r[7].show();
	button_pic_r[7].show();
	button_res_r[7].show();
}

void Rwin::on_button_clicked_job_r_8()
{
	button_info_r[8].show();
	button_sys_r[8].show();
	button_pic_r[8].show();
	button_res_r[8].show();
}

void Rwin::on_button_clicked_job_r_9()
{
	button_info_r[9].show();
	button_sys_r[9].show();
	button_pic_r[9].show();
	button_res_r[9].show();
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
