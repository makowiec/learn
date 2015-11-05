#ifndef INFO_HPP
#define INFO_HPP
/*
============================================================================
Name 		: info.hpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : wyswietlanie okna z opisem zadania
============================================================================
*/
#include <gtkmm.h>
#include <gdk/gdk.h>
#include <gtkmm/image.h>
#include <gtkmm/window.h>

class Info : public Gtk::Window
{

public:
Info();
virtual ~Info();

protected:
Gtk::Image image;
Gtk::Button buttonQuit;
Gtk::Grid mainGrid;
};

#endif
