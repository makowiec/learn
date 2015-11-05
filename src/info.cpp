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
#include <cstdio>
using namespace std;

Info::Info()
{

	// Parametry okna
	set_border_width(20); //odleglosc pomiedzy obramowaniem okna, a elementami wewnatrz
	set_title("Learn 2015 - zadanie"); //tytul
	set_size_request(800,600); //rozmiar
	set_position(Gtk::WIN_POS_CENTER); // pozyzja okna - wysrodkowana wzgledem pulpitu
	set_resizable( false ); // blokowanie zmiany rozmiaru okna

}

Info::~Info()
{

}
