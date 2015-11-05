/*
============================================================================
Name 		: info.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : wyswietlanie okna z opisem zadania
============================================================================
*/
#include "info.hpp"
#include <iostream>
#include <gtkmm/scrolledwindow.h>
using namespace std;

Info::Info()
{

	// Parametry okna
	set_border_width(20); //odleglosc pomiedzy obramowaniem okna, a elementami wewnatrz
	set_title("Learn 2015 - zadanie"); //tytul
	set_size_request(800,600); //rozmiar
	set_position(Gtk::WIN_POS_CENTER); // pozyzja okna - wysrodkowana wzgledem pulpitu
	set_resizable( false ); // blokowanie zmiany rozmiaru okna

		// Load and display the image
		image.set("./data/job_r_1/info_r_1.png");
		mainGrid.attach(image,0,0,1,1);

		// Add the Quit button
		buttonQuit.add_label("Quit");
//		//buttonQuit.signal_pressed().connect(sigc::mem_fun(*this,&Info::close));
		mainGrid.attach(buttonQuit,0,2,1,1);

		// Display the main grid in the main window
		mainGrid.show_all();

		// Insert the grid in the main window
		add(mainGrid);

}

Info::~Info()
{

}

