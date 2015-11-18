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

//tytul
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_title (wxT(".//image//titler.png"), wxBITMAP_TYPE_PNG);
    titler = new wxStaticBitmap(panel_title, 0, bmp_title);

//logo
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_logo (wxT(".//image//logo.png"), wxBITMAP_TYPE_PNG);
    logor = new wxStaticBitmap(panel_logo, 0, bmp_logo);

// tworznie przyciskow akcji
    button_info = new wxButton(panel_info, wxID_ANY, wxT("info"), wxPoint(10, 10), wxSize(140, 40));
    button_sys = new wxButton(panel_sys, wxID_ANY, wxT("sys"), wxPoint(10, 10), wxSize(140, 40));
    button_pic = new wxButton(panel_pic, wxID_ANY, wxT("pic"), wxPoint(10, 10), wxSize(140, 40));
    button_res = new wxButton(panel_res, wxID_ANY, wxT("res"), wxPoint(10, 10), wxSize(140, 40));
    button_desc = new wxButton(panel_desc, wxID_ANY, wxT("desc"), wxPoint(10, 10), wxSize(140, 40));

// tworzenie przycisków zadan i zakonczenia programu
    button_jobr[0] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 1"), wxPoint(20, 20), wxSize(90, 40));
    button_jobr[1] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 2"), wxPoint(20, 72), wxSize(90, 40));
    button_jobr[2] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 3"), wxPoint(20, 124), wxSize(90, 40));
    button_jobr[3] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 4"), wxPoint(20, 176), wxSize(90, 40));
    button_jobr[4] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 5"), wxPoint(20, 228), wxSize(90, 40));
    button_jobr[5] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 6"), wxPoint(20, 280), wxSize(90, 40));
    button_jobr[6] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 7"), wxPoint(20, 332), wxSize(90, 40));
    button_jobr[7] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 8"), wxPoint(20, 384), wxSize(90, 40));
    button_jobr[8] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 9"), wxPoint(20, 436), wxSize(90, 40));
    button_jobr[9] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 10"), wxPoint(20, 488), wxSize(90, 40));
    button_quitr = new wxButton(panel_job, wxID_EXIT, wxT("Koniec"), wxPoint(20, 540), wxSize(90, 40));

// strona startowa
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//image//start_page.png"), wxBITMAP_TYPE_PNG);
    showr = new wxStaticBitmap(panel_show, 0, bmp_show);

//akcje przyciskow
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::quitr));
}

// Fukncja przycisku koniec
    void Rwin::quitr(wxCommandEvent & WXUNUSED(event))
    {
        Close(true);
    }
