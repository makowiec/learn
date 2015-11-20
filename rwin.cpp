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
#include "lotto.hpp"
#include <iostream>
#include <cstdio>

using namespace std;

Rwin::Rwin(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(936, 758))
{
//zmienne
    //aktualny numer zadania
    job_number_r=0;
    //stan przycisku job
    but_job_0_r = 0;
    but_job_1_r = 0;
    but_job_2_r = 0;
    but_job_3_r = 0;
    but_job_4_r = 0;
    but_job_5_r = 0;
    but_job_6_r = 0;
    but_job_7_r = 0;
    but_job_8_r = 0;
    but_job_9_r = 0;

// wywolanie lotto
    lotto();

// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// wysrodkowania okna
    Centre();

// tworzenie panelu
//panel glowny
    panel_r = new wxPanel(this, wxID_ANY);
//panel tytulu
    panel_title = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 0), wxSize(800, 60));
//panel czynnosci
    panel_info = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 60), wxSize(160, 60));
    panel_pic = new wxPanel(panel_r, wxID_ANY, wxPoint(160, 60), wxSize(160, 60));
    panel_res = new wxPanel(panel_r, wxID_ANY, wxPoint(320, 60), wxSize(160, 60));
    panel_desc = new wxPanel(panel_r, wxID_ANY, wxPoint(480, 60), wxSize(160, 60));
//panel loga
    panel_logo = new wxPanel(panel_r, wxID_ANY, wxPoint(800, 0), wxSize(120, 120));
//panel zadan
    panel_job = new wxPanel(panel_r, wxID_ANY, wxPoint(800, 120), wxSize(120, 600));
//panel do wyswietlania zawartosci
    panel_show = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 120), wxSize(800, 600));

//tytul
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_title (wxT(".//image//titler.png"), wxBITMAP_TYPE_PNG);
    title_r = new wxStaticBitmap(panel_title, 0, bmp_title);

//logo
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_logo (wxT(".//image//logo.png"), wxBITMAP_TYPE_PNG);
    logo_r = new wxStaticBitmap(panel_logo, 0, bmp_logo);

// tworznie przyciskow akcji
    button_info_r = new wxButton(panel_info, wxID_ANY, wxT("info"), wxPoint(10, 10), wxSize(140, 40));
    button_pic_r = new wxButton(panel_pic, wxID_ANY, wxT("pic"), wxPoint(10, 10), wxSize(140, 40));
    button_res_r = new wxButton(panel_res, wxID_ANY, wxT("res"), wxPoint(10, 10), wxSize(140, 40));
    button_desc_r = new wxButton(panel_desc, wxID_ANY, wxT("desc"), wxPoint(10, 10), wxSize(140, 40));

// tworzenie przycisków zadan i zakonczenia programu
    button_job_r[0] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 1"), wxPoint(20, 20), wxSize(90, 40));
    button_job_r[1] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 2"), wxPoint(20, 72), wxSize(90, 40));
    button_job_r[2] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 3"), wxPoint(20, 124), wxSize(90, 40));
    button_job_r[3] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 4"), wxPoint(20, 176), wxSize(90, 40));
    button_job_r[4] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 5"), wxPoint(20, 228), wxSize(90, 40));
    button_job_r[5] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 6"), wxPoint(20, 280), wxSize(90, 40));
    button_job_r[6] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 7"), wxPoint(20, 332), wxSize(90, 40));
    button_job_r[7] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 8"), wxPoint(20, 384), wxSize(90, 40));
    button_job_r[8] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 9"), wxPoint(20, 436), wxSize(90, 40));
    button_job_r[9] = new wxButton(panel_job, wxID_ANY, wxT("Zadanie 10"), wxPoint(20, 488), wxSize(90, 40));
    button_quit_r = new wxButton(panel_job, wxID_EXIT, wxT("Koniec"), wxPoint(20, 540), wxSize(90, 40));

// strona startowa
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//image//start_page.png"), wxBITMAP_TYPE_PNG);
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    //panel_show_h = new wxPanel(panel_show, wxID_ANY, wxPoint(0, 120), wxSize(800, 600));
    //HtmlWindow1 = new wxHtmlWindow(panel_show_h, wxID_ANY, wxPoint(0,0), wxSize(800,300), wxHW_DEFAULT_STYLE);
    //HtmlWindow1->LoadPage(_("data\\sample_1\\html\\task1.html"));

//akcje przyciskow
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::quit_r));
    button_job_r[0] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r0), NULL, this);
    button_job_r[1] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r1), NULL, this);
    button_job_r[2] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r2), NULL, this);
    button_job_r[3] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r3), NULL, this);
    button_job_r[4] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r4), NULL, this);
    button_job_r[5] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r5), NULL, this);
    button_job_r[6] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r6), NULL, this);
    button_job_r[7] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r7), NULL, this);
    button_job_r[8] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r8), NULL, this);
    button_job_r[9] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r9), NULL, this);

    button_info_r -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r), NULL, this);
    button_pic_r -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r), NULL, this);
    button_res_r -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r), NULL, this);
    button_desc_r -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_desc_r), NULL, this);

//Ukrywanie przycskow czynnosci
    panel_info -> Hide();
    panel_pic -> Hide();
    panel_res -> Hide();
    panel_desc -> Hide();
}
/*
--------------------------------------------------
Koniec
--------------------------------------------------
*/
    void Rwin::quit_r(wxCommandEvent & WXUNUSED(event))
    {
        Close(true);
    }
/*
--------------------------------------------------
Zadanie 1
--------------------------------------------------
*/
void Rwin::Onbutton_job_r0(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 0 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_1//png//job_1.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_0_r = 1;
}

/*
--------------------------------------------------
Zadanie 2
--------------------------------------------------
*/
void Rwin::Onbutton_job_r1(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 1 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_2//png//job_2.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_1_r = 1;
}

/*
--------------------------------------------------
Zadanie 3
--------------------------------------------------
*/
void Rwin::Onbutton_job_r2(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 2 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_3//png//job_3.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_2_r = 1;
}
/*
--------------------------------------------------
Zadanie 4
--------------------------------------------------
*/
void Rwin::Onbutton_job_r3(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 3 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_4//png//job_4.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_3_r = 1;
}
/*
--------------------------------------------------
Zadanie 5
--------------------------------------------------
*/
void Rwin::Onbutton_job_r4(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 4 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_5//png//job_5.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_4_r = 1;
}
/*
--------------------------------------------------
Zadanie 6
--------------------------------------------------
*/
void Rwin::Onbutton_job_r5(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 5 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_6//png//job_6.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_5_r = 1;
}
/*
--------------------------------------------------
Zadanie 7
--------------------------------------------------
*/
void Rwin::Onbutton_job_r6(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 6 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_7//png//job_7.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_6_r = 1;
}
/*
--------------------------------------------------
Zadanie 8
--------------------------------------------------
*/
void Rwin::Onbutton_job_r7(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 7 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_8//png//job_8.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_7_r = 1;
}
/*
--------------------------------------------------
Zadanie 9
--------------------------------------------------
*/
void Rwin::Onbutton_job_r8(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 8 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_9//png//job_9.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_8_r = 1;
}
/*
--------------------------------------------------
Zadanie 10
--------------------------------------------------
*/
void Rwin::Onbutton_job_r9(wxCommandEvent & WXUNUSED(event))
{
//okno serwisowe
    job_number_r = draw_now[ 9 ];
    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);

//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_10//png//job_10.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();

//zmiana stanu przycisku
    but_job_9_r = 1;
}
/*
--------------------------------------------------
Info
--------------------------------------------------
*/
void Rwin::Onbutton_info_r(wxCommandEvent & WXUNUSED(event))
{
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//data//sample_1//png//info_1.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

    panel_pic -> Show();
}
/*
--------------------------------------------------
Pic
--------------------------------------------------
*/
void Rwin::Onbutton_pic_r(wxCommandEvent & WXUNUSED(event))
{
    panel_res -> Show();
    panel_desc -> Show();
}
/*
--------------------------------------------------
Res
--------------------------------------------------
*/
void Rwin::Onbutton_res_r(wxCommandEvent & WXUNUSED(event))
{
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//image//start_page.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();
}
/*
--------------------------------------------------
Desc
--------------------------------------------------
*/
void Rwin::Onbutton_desc_r(wxCommandEvent & WXUNUSED(event))
{
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//image//logo.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();
}
/*
--------------------------------------------------
Ukrywanie przyciskow czynnosci
--------------------------------------------------
*/
void Rwin::button_hide_r()
{
    panel_info -> Hide();
    panel_pic -> Hide();
    panel_res -> Hide();
    panel_desc -> Hide();
}
/*
--------------------------------------------------
Ukrywanie przyciskow zadan
--------------------------------------------------
*/
void Rwin::button_job_disable_r()
{
    if (but_job_0_r = 1)
    {
        button_job_r[0] -> Disable();
    }

    if (but_job_1_r = 1)
    {
        button_job_r[1] -> Disable();
    }

    if (but_job_2_r = 1)
    {
        button_job_r[2] -> Disable();
    }

    if (but_job_3_r = 1)
    {
        button_job_r[3] -> Disable();
    }

    if (but_job_4_r = 1)
    {
        button_job_r[4] -> Disable();
    }

    if (but_job_5_r = 1)
    {
        button_job_r[5] -> Disable();
    }

    if (but_job_6_r = 1)
    {
        button_job_r[6] -> Disable();
    }

    if (but_job_7_r = 1)
    {
        button_job_r[7] -> Disable();
    }

    if (but_job_8_r = 1)
    {
        button_job_r[8] -> Disable();
    }

    if but_job_9_r = 1
    {
        button_job_r[9] -> Disable();
    }

}
