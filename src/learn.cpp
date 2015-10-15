/*
============================================================================
Name 		: learn.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Program do nauki
============================================================================
*/

#include "start.hpp"
#include "rwin.hpp"
#include <gtkmm/main.h>

int main (int argc, char *argv[])
{
Gtk::Main kit(argc, argv);

Start start;
//Shows the window and returns when it is closed.
Gtk::Main::run(start);

return 0;
}
