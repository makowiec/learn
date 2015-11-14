#ifndef START_H
#define START_H

/*
============================================================================
Name 		: start.h
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Glowne okno programu
============================================================================
*/

#include <wx/wx.h>

class Start : public wxFrame
{
public:
    Start(const wxString& title);

    void OnQuit(wxCommandEvent & event);
    void OnNorth(wxCommandEvent & event);
    void OnSouth(wxCommandEvent & event);
};
#endif
