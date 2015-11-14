/*
============================================================================
Name 		: main.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Program do nauki
============================================================================
*/

#include "main.h"
#include "start.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Start *start = new Start(wxT("Learn 2015"));

    start->Show(true);

    return true;
}
