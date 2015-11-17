/*
============================================================================
Name 		: rwin.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Okno dla danych z North ;)
============================================================================
*/

#include "rwin.h"
#include <iostream>
#include <cstdio>

Rwin::Rwin(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(936, 758))
{

// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// wysrodkowania okna
    Centre();

// tworzenie panelu
    //panel glowny
    wxPanel *panel_r = new wxPanel(this, wxID_ANY);
    //panel tytulu
     wxPanel *panel_title = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 0), wxSize(800, 60));
    //panel czynnosci
    wxPanel *panel_info = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 60), wxSize(160, 60));
    wxPanel *panel_sys = new wxPanel(panel_r, wxID_ANY, wxPoint(160, 60), wxSize(160, 60));
    wxPanel *panel_pic = new wxPanel(panel_r, wxID_ANY, wxPoint(320, 60), wxSize(160, 60));
    wxPanel *panel_res = new wxPanel(panel_r, wxID_ANY, wxPoint(480, 60), wxSize(160, 60));
    wxPanel *panel_desc = new wxPanel(panel_r, wxID_ANY, wxPoint(640, 60), wxSize(160, 60));
    //panel loga
    wxPanel *panel_logo = new wxPanel(panel_r, wxID_ANY, wxPoint(800, 0), wxSize(120, 120));
    //panel zadan
    wxPanel *panel_job = new wxPanel(panel_r, wxID_ANY, wxPoint(800, 120), wxSize(120, 600));
    //panel do wyswietlania zawartosci
    wxPanel *panel_show = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 120), wxSize(800, 600));

//napis na gorze okna
    wxString  text = wxT("\n\Rrrr.");
    text_title = new wxStaticText(panel_title, wxID_ANY, text, wxPoint(0, 0), wxSize(800, 60), wxALIGN_CENTRE );

// tworznie przycisków
    button_logo = new wxButton(panel_logo, wxID_ANY, wxT("logo"), wxPoint(0, 0), wxSize(120, 120));
    button_info = new wxButton(panel_info, wxID_ANY, wxT("info"), wxPoint(0, 0), wxSize(160, 60));
    button_sys = new wxButton(panel_sys, wxID_ANY, wxT("sys"), wxPoint(0, 0), wxSize(160, 60));
    button_pic = new wxButton(panel_pic, wxID_ANY, wxT("pic"), wxPoint(0, 0), wxSize(160, 60));
    button_res = new wxButton(panel_res, wxID_ANY, wxT("res"), wxPoint(0, 0), wxSize(160, 60));
    button_desc = new wxButton(panel_desc, wxID_ANY, wxT("desc"), wxPoint(0, 0), wxSize(160, 60));
    button_job = new wxButton(panel_job, wxID_ANY, wxT("job"), wxPoint(0, 0), wxSize(120, 600));
    button_show = new wxButton(panel_show, wxID_ANY, wxT("show"), wxPoint(0, 0), wxSize(800, 600));


}
