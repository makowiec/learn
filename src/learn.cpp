/*
============================================================================
Name : learn.cpp
Author : makowiec
Version :
Copyright : priv
Description : Learn in gttkmm
============================================================================
*/

#include "start.h"
#include <gtkmm/main.h>

int main (int argc, char *argv[])
{
Gtk::Main kit(argc, argv);

Start start;
//Shows the window and returns when it is closed.
Gtk::Main::run(start);

return 0;
}
