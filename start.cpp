/*
============================================================================
Name 		: start.cpp
Author 		: makowiec
Version 	: 0.1
Copyright 	: priv
Description : Glowne okno programu
============================================================================
*/

#include "start.h"
#include "rwin.h"

Start::Start(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 235))

{
// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// wysrodkowania okna
    Centre();

// tworzenie panelu
    wxPanel *panel_s = new wxPanel(this, wxID_ANY);

// tworznie przycisku
    wxButton *button_start_N = new wxButton(panel_s, wxID_ANY, wxT("North"), wxPoint(30, 30), wxSize(100, 75));
    wxButton *button_start_S = new wxButton(panel_s, wxID_ANY, wxT("South"), wxPoint(170, 30), wxSize(100, 75));
    wxButton *button_start_Q = new wxButton(panel_s, wxID_EXIT, wxT("Koniec"), wxPoint(100, 130), wxSize(100, 50));

// akcja - klikniecie
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Start::OnQuit));
    button_start_N -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Start::OnNorth));
    button_start_S -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Start::OnSouth));

// ustawienie zacznika na okreslony przycisk - taka ramka do przejscia tabulatorem
    //button_1->SetFocus();
    //button_2->SetFocus();


 }

// funkcja zamykajaca okno - przycisk utton_start_Q
void Start::OnQuit(wxCommandEvent & WXUNUSED(event))
{
    Close(true);
}
// funkcja dla przucisku button_start_N
void Start::OnNorth(wxCommandEvent & WXUNUSED(event))
{

    Rwin *rwin = new Rwin(wxT("North 2015"));
    rwin->Show(true);

}
//funkcja dla przycisku button_start_S
void Start::OnSouth(wxCommandEvent & WXUNUSED(event))
{

}
