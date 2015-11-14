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
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
{

// blokowanie rozmiaru okna
    SetMinSize(GetSize());
    SetMaxSize(GetSize());

// wysrodkowania okna
    Centre();

// tworzenie panelu
   wxPanel *panel_r = new wxPanel(this, wxID_ANY);

// tworznie przycisków
    button_job_r[0] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 1"), wxPoint(10, 68), wxSize(148, 40));
    button_job_r[1] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 2"), wxPoint(10, 116), wxSize(148, 40));
    button_job_r[2] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 3"), wxPoint(10, 168), wxSize(148, 40));
    button_job_r[3] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 4"), wxPoint(10, 212), wxSize(148, 40));
    button_job_r[4] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 5"), wxPoint(10, 260), wxSize(148, 40));
    button_job_r[5] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 6"), wxPoint(10, 308), wxSize(148, 40));
    button_job_r[6] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 7"), wxPoint(10, 356), wxSize(148, 40));
    button_job_r[7] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 8"), wxPoint(10, 404), wxSize(148, 40));
    button_job_r[8] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 9"), wxPoint(10, 452), wxSize(148, 40));
    button_job_r[9] = new wxButton(panel_r, wxID_ANY, wxT("Zadanie 10"), wxPoint(10, 500), wxSize(148, 40));

    button_info_r[0] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 68), wxSize(148, 40));
    button_info_r[1] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 116), wxSize(148, 40));
    button_info_r[2] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 168), wxSize(148, 40));
    button_info_r[3] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 212), wxSize(148, 40));
    button_info_r[4] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 260), wxSize(148, 40));
    button_info_r[5] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 308), wxSize(148, 40));
    button_info_r[6] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 356), wxSize(148, 40));
    button_info_r[7] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 404), wxSize(148, 40));
    button_info_r[8] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 452), wxSize(148, 40));
    button_info_r[9] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/info_icon.png")), wxPoint(168, 500), wxSize(148, 40));

    button_sys_r[0] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 68), wxSize(148, 40));
    button_sys_r[1] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 116), wxSize(148, 40));
    button_sys_r[2] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 168), wxSize(148, 40));
    button_sys_r[3] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 212), wxSize(148, 40));
    button_sys_r[4] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 260), wxSize(148, 40));
    button_sys_r[5] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 308), wxSize(148, 40));
    button_sys_r[6] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 356), wxSize(148, 40));
    button_sys_r[7] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 404), wxSize(148, 40));
    button_sys_r[8] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 452), wxSize(148, 40));
    button_sys_r[9] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/search_icon.png")), wxPoint(326, 500), wxSize(148, 40));

    button_pic_r[0] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 68), wxSize(148, 40));
    button_pic_r[1] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 116), wxSize(148, 40));
    button_pic_r[2] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 168), wxSize(148, 40));
    button_pic_r[3] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 212), wxSize(148, 40));
    button_pic_r[4] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 260), wxSize(148, 40));
    button_pic_r[5] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 308), wxSize(148, 40));
    button_pic_r[6] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 356), wxSize(148, 40));
    button_pic_r[7] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 404), wxSize(148, 40));
    button_pic_r[8] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 452), wxSize(148, 40));
    button_pic_r[9] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/rtg_icon.png")), wxPoint(484, 500), wxSize(148, 40));

    button_res_r[0] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 68), wxSize(148, 40));
    button_res_r[1] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 116), wxSize(148, 40));
    button_res_r[2] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 168), wxSize(148, 40));
    button_res_r[3] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 212), wxSize(148, 40));
    button_res_r[4] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 260), wxSize(148, 40));
    button_res_r[5] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 308), wxSize(148, 40));
    button_res_r[6] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 356), wxSize(148, 40));
    button_res_r[7] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 404), wxSize(148, 40));
    button_res_r[8] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 452), wxSize(148, 40));
    button_res_r[9] = new wxBitmapButton(panel_r, wxID_ANY, wxBitmap(wxT("./icons/gear_icon.png")), wxPoint(642, 500), wxSize(148, 40));

// akcja kliknieci
    button_job_r[0] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r0));
    button_job_r[1] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r1));
    button_job_r[2] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r2));
    button_job_r[3] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r3));
    button_job_r[4] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r4));
    button_job_r[5] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r5));
    button_job_r[6] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r6));
    button_job_r[7] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r7));
    button_job_r[8] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r8));
    button_job_r[9] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_job_r9));

    button_info_r[0] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r0));
    button_info_r[1] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r1));
    button_info_r[2] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r2));
    button_info_r[3] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r3));
    button_info_r[4] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r4));
    button_info_r[5] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r5));
    button_info_r[6] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r6));
    button_info_r[7] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r7));
    button_info_r[8] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r8));
    button_info_r[9] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_info_r9));

    button_sys_r[0] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r0));
    button_sys_r[1] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r1));
    button_sys_r[2] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r2));
    button_sys_r[3] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r3));
    button_sys_r[4] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r4));
    button_sys_r[5] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r5));
    button_sys_r[6] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r6));
    button_sys_r[7] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r7));
    button_sys_r[8] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r8));
    button_sys_r[9] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_sys_r9));

    button_pic_r[0] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r0));
    button_pic_r[1] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r1));
    button_pic_r[2] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r2));
    button_pic_r[3] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r3));
    button_pic_r[4] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r4));
    button_pic_r[5] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r5));
    button_pic_r[6] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r6));
    button_pic_r[7] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r7));
    button_pic_r[8] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r8));
    button_pic_r[9] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_pic_r9));

    button_res_r[0] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r0));
    button_res_r[1] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r1));
    button_res_r[2] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r2));
    button_res_r[3] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r3));
    button_res_r[4] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r4));
    button_res_r[5] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r5));
    button_res_r[6] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r6));
    button_res_r[7] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r7));
    button_res_r[8] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r8));
    button_res_r[9] -> Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::Onbutton_res_r9));

// tworznie przycisku Quit
    wxButton *button_rwin_Q = new wxButton(panel_r, wxID_EXIT, wxT("Quit"), wxPoint(642, 548), wxSize(148, 40));
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Rwin::OnQuit));

}



/*
--------------------------------------------------
        Hide button: info, sys, pic, res
--------------------------------------------------
*/
void Rwin::hide_button_r()
{
	for( int i = 0; i < 10; ++i )
		{
		button_info_r[i] -> Hide();
		button_sys_r[i] -> Hide();
		button_pic_r[i] -> Hide();
		button_res_r[i] -> Hide();
		}
}
/*
--------------------------------------------------
                    Quit
--------------------------------------------------
*/
void Rwin::OnQuit(wxCommandEvent & WXUNUSED(event))
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

}

void Rwin::Onbutton_info_r0(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r0(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r0(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r0(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 2
--------------------------------------------------
*/
void Rwin::Onbutton_job_r1(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r1(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r1(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r1(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r1(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 3
--------------------------------------------------
*/
void Rwin::Onbutton_job_r2(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r2(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r2(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r2(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r2(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 4
--------------------------------------------------
*/
void Rwin::Onbutton_job_r3(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r3(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r3(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r3(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r3(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 5
--------------------------------------------------
*/
void Rwin::Onbutton_job_r4(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r4(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r4(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r4(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r4(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 6
--------------------------------------------------
*/
void Rwin::Onbutton_job_r5(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r5(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r5(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r5(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r5(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 7
--------------------------------------------------
*/
void Rwin::Onbutton_job_r6(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r6(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r6(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r6(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r6(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 8
--------------------------------------------------
*/
void Rwin::Onbutton_job_r7(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r7(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r7(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r7(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r7(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 9
--------------------------------------------------
*/
void Rwin::Onbutton_job_r8(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r8(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r8(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r8(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r8(wxCommandEvent & WXUNUSED(event))
{

}
/*
--------------------------------------------------
                    Zadanie 10
--------------------------------------------------
*/
void Rwin::Onbutton_job_r9(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_info_r9(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_sys_r9(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_pic_r9(wxCommandEvent & WXUNUSED(event))
{

}

void Rwin::Onbutton_res_r9(wxCommandEvent & WXUNUSED(event))
{

}
