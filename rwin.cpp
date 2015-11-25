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
#include "lotto.h"
#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

Rwin::Rwin(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(936, 758))
{
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
//panele czynnosci
    panel_info = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 60), wxSize(160, 60));
    panel_pic = new wxPanel(panel_r, wxID_ANY, wxPoint(160, 60), wxSize(160, 60));
    panel_res = new wxPanel(panel_r, wxID_ANY, wxPoint(320, 60), wxSize(160, 60));
    panel_desc = new wxPanel(panel_r, wxID_ANY, wxPoint(480, 60), wxSize(160, 60));
//panel loga
    panel_logo = new wxPanel(panel_r, wxID_ANY, wxPoint(800, 0), wxSize(120, 120));
//panel zadan
    panel_job = new wxPanel(panel_r, wxID_ANY, wxPoint(800, 120), wxSize(120, 600));
//panele do wyswietlania zawartosci
    panel_show = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 120), wxSize(800, 600));
    panel_show_h = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 120), wxSize(800, 600));
    panel_show_b = new wxPanel(panel_r, wxID_ANY, wxPoint(0, 120), wxSize(800, 600));

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

// tworzenie przyciskÃ³w zadan i zakonczenia programu
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

//zmienne
//wylosowany numer zadania
    int job_number_r = 0;
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
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 0 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job0_string;
    job0_string << job_number_r;
    string job0_rs = job0_string.str();

// ustawienie sciezki dla job0
    std::string job0_patch = ".//data//sample_";
                job0_patch += job0_rs;
                job0_patch += "//png//job_";
                job0_patch += job0_rs;
                job0_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job0_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}

/*
--------------------------------------------------
                    Zadanie 2
--------------------------------------------------
*/
void Rwin::Onbutton_job_r1(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 1 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job1_string;
    job1_string << job_number_r;
    string job1_rs = job1_string.str();

// ustawienie sciezki dla job1
    std::string job1_patch = ".//data//sample_";
                job1_patch += job1_rs;
                job1_patch += "//png//job_";
                job1_patch += job1_rs;
                job1_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job1_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}

/*
--------------------------------------------------
                    Zadanie 3
--------------------------------------------------
*/
void Rwin::Onbutton_job_r2(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 2 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job2_string;
    job2_string << job_number_r;
    string job2_rs = job2_string.str();

// ustawienie sciezki dla job2
    std::string job2_patch = ".//data//sample_";
                job2_patch += job2_rs;
                job2_patch += "//png//job_";
                job2_patch += job2_rs;
                job2_patch += ".png";


//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job2_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Zadanie 4
--------------------------------------------------
*/
void Rwin::Onbutton_job_r3(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 3 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job3_string;
    job3_string << job_number_r;
    string job3_rs = job3_string.str();

// ustawienie sciezki dla job3
    std::string job3_patch = ".//data//sample_";
                job3_patch += job3_rs;
                job3_patch += "//png//job_";
                job3_patch += job3_rs;
                job3_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job3_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Zadanie 5
--------------------------------------------------
*/
void Rwin::Onbutton_job_r4(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 4 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job4_string;
    job4_string << job_number_r;
    string job4_rs = job4_string.str();

// ustawienie sciezki dla job4
    std::string job4_patch = ".//data//sample_";
                job4_patch += job4_rs;
                job4_patch += "//png//job_";
                job4_patch += job4_rs;
                job4_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job4_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Zadanie 6
--------------------------------------------------
*/
void Rwin::Onbutton_job_r5(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 5 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job5_string;
    job5_string << job_number_r;
    string job5_rs = job5_string.str();

// ustawienie sciezki dla job5
    std::string job5_patch = ".//data//sample_";
                job5_patch += job5_rs;
                job5_patch += "//png//job_";
                job5_patch += job5_rs;
                job5_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job5_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Zadanie 7
--------------------------------------------------
*/
void Rwin::Onbutton_job_r6(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 6 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job6_string;
    job6_string << job_number_r;
    string job6_rs = job6_string.str();

// ustawienie sciezki dla job6
    std::string job6_patch = ".//data//sample_";
                job6_patch += job6_rs;
                job6_patch += "//png//job_";
                job6_patch += job6_rs;
                job6_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job6_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Zadanie 8
--------------------------------------------------
*/
void Rwin::Onbutton_job_r7(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 7 ];
//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job7_string;
    job7_string << job_number_r;
    string job7_rs = job7_string.str();

// ustawienie sciezki dla job7
    std::string job7_patch = ".//data//sample_";
                job7_patch += job7_rs;
                job7_patch += "//png//job_";
                job7_patch += job7_rs;
                job7_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job7_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Zadanie 9
--------------------------------------------------
*/
void Rwin::Onbutton_job_r8(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 8 ];

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job8_string;
    job8_string << job_number_r;
    string job8_rs = job8_string.str();

// ustawienie sciezki dla job8
    std::string job8_patch = ".//data//sample_";
                job8_patch += job8_rs;
                job8_patch += "//png//job_";
                job8_patch += job8_rs;
                job8_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job8_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Zadanie 10
--------------------------------------------------
*/
void Rwin::Onbutton_job_r9(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//przypisanie wylosowanego numeru zadania
    job_number_r = draw_now[ 9 ];


//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Numer zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//ukrywanie i wyswietlanie przyciskow
    Rwin::button_hide_r();
    panel_info -> Show();

// zamiana int na string
    std::ostringstream job9_string;
    job9_string << job_number_r;
    string job9_rs = job9_string.str();

// ustawienie sciezki dla job9
    std::string job9_patch = ".//data//sample_";
                job9_patch += job9_rs;
                job9_patch += "//png//job_";
                job9_patch += job9_rs;
                job9_patch += ".png";

//zmiana obrazka na panel_show
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (job9_patch, wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//funkcja ukrywajaca przyciski zadan wykonanych
    Rwin::button_job_disable_r();
}
/*
--------------------------------------------------
                    Info
--------------------------------------------------
*/
void Rwin::Onbutton_info_r(wxCommandEvent & WXUNUSED(event))
{
//ukrywanie i wyswietlanie paneli
    panel_show -> Hide();
    panel_show_b -> Hide();
    panel_show_h -> Show();

//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Info do zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//przpisywanie wartosci 0 do html_info_r
//jest to potrzedne gdy uzytkowni nie powroci z podstrony do strony glownej
//i kliknie inny przycisk
    if (html_info_r != 0)
        {
        html_info_r -> Destroy();
        }

// zamiana int na string
    std::ostringstream info_string;
    info_string << job_number_r;
    string info_rs = info_string.str();

// ustawienie sciezki dla info
    std::string info_patch = ".//data//sample_";
                info_patch += info_rs;
                info_patch += "//html//info";
                info_patch += info_rs;
                info_patch += ".html";

//wyswietlanie pliku html
    html_info_r = new wxHtmlWindow(panel_show_h, wxID_ANY, wxPoint(0,0), wxSize(800,300), wxHW_DEFAULT_STYLE);
    html_info_r -> LoadPage(info_patch);

//wyswietlenie przycisku pic
    panel_pic -> Show();
}
/*
--------------------------------------------------
                    Pic
--------------------------------------------------
*/
void Rwin::Onbutton_pic_r(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();
//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Obrazek do zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/
//wyswietlanie obrazka informacyjnego
    wxImage::AddHandler(new wxPNGHandler);
    wxBitmap bmp_show (wxT(".//image//info_page.png"), wxBITMAP_TYPE_PNG);
    show_r -> Destroy();
    show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    show_r -> Update();

//wyswietlenie przycisku res i desc
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
    panel_show_b -> Show();
    panel_show -> Hide();
    panel_show_h -> Hide();
//okno serwisowe
/*    wxString Foobar;
    Foobar.Printf( wxT("Odpowied do zadania %d."), job_number_r);
    wxMessageBox(Foobar);
*/

    res_book = new wxNotebook(panel_show_b, wxID_ANY, wxPoint(0,0), wxSize(800, 600));
    panel_book_pic = new wxPanel(res_book, wxID_ANY, wxPoint(0, 0), wxSize(800, 600));
    panel_book_text = new wxPanel(res_book, wxID_ANY, wxPoint(0, 0), wxSize(800, 600));
    panel_book_foto = new wxPanel(res_book, wxID_ANY, wxPoint(0, 0), wxSize(800, 600));
    res_book -> AddPage(panel_book_pic, _("Wynik"), false);
    res_book -> AddPage(panel_book_text, _("Opis"), false);
    res_book -> AddPage(panel_book_foto, _("Zdjêcia"), false);

// zamiana int na string
    std::ostringstream res_string;
    res_string << job_number_r;
    string res_rs = res_string.str();

// ustawienie sciezki dla res
    std::string res_patch = ".//data//sample_";
                res_patch += res_rs;
                res_patch += "//png//res_";
                res_patch += res_rs;
                res_patch += ".png";

    //wxImage::AddHandler(new wxPNGHandler);
    //wxBitmap bmp_show (wxT(".//image//start_page.png"), wxBITMAP_TYPE_PNG);
    //show_r -> Destroy();
    //show_r = new wxStaticBitmap(panel_show, 0, bmp_show);
    //show_r -> Update();
}
/*
--------------------------------------------------
                    Desc
--------------------------------------------------
*/
void Rwin::Onbutton_desc_r(wxCommandEvent & WXUNUSED(event))
{
    panel_show -> Show();
    panel_show_h -> Hide();
    panel_show_b -> Hide();

//    panel_show -> Hide();
//    panel_show_h -> Show();
//    if (html_r != 0)
//        {
//        html_r -> Destroy();
//        }
//    html_r = new wxHtmlWindow(panel_show_h, wxID_ANY, wxPoint(0,0), wxSize(800,300), wxHW_DEFAULT_STYLE);
//    html_r -> LoadPage(_("data\\sample_1\\html\\task1.html"));
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

    fstream file("file_name.txt");

if (file.good())
{
    button_job_r[0] -> Disable();
    panel_pic -> Disable();
}

}
