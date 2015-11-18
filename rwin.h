#ifndef RWIN_H
#define RWIN_H

/*
============================================================================
Name 		: rwin.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Okno dla danych z North ;)
============================================================================
*/

#include <wx/wx.h>

class Rwin : public wxFrame
{
public:

    Rwin(const wxString& title);

    wxButton *button_info;
    wxButton *button_sys;
    wxButton *button_pic;
    wxButton *button_res;
    wxButton *button_desc;
    wxButton *button_jobr[10];
    wxButton *button_quitr;

    wxStaticBitmap* titler;
    wxStaticBitmap* logor;
    wxStaticBitmap* showr;

    void quitr(wxCommandEvent & event);
};

#endif
