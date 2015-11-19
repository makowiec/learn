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

    int job_number;

    wxButton *button_info_r;
    wxButton *button_sys_r;
    wxButton *button_pic_r;
    wxButton *button_res_r;
    wxButton *button_desc_r;
    wxButton *button_job_r[10];
    wxButton *button_quit_r;

    wxStaticBitmap* title_r;
    wxStaticBitmap* logo_r;
    wxStaticBitmap* show_r;

    wxPanel *panel_r;
    wxPanel *panel_title;
    wxPanel *panel_info;
    wxPanel *panel_sys;
    wxPanel *panel_pic;
    wxPanel *panel_res;
    wxPanel *panel_desc;
    wxPanel *panel_logo;
    wxPanel *panel_job;
    wxPanel *panel_show;

    void quit_r(wxCommandEvent & event);
    void Onbutton_job_r0(wxCommandEvent & event);
    void Onbutton_job_r1(wxCommandEvent & event);
    void Onbutton_job_r2(wxCommandEvent & event);
    void Onbutton_job_r3(wxCommandEvent & event);
    void Onbutton_job_r4(wxCommandEvent & event);
    void Onbutton_job_r5(wxCommandEvent & event);
    void Onbutton_job_r6(wxCommandEvent & event);
    void Onbutton_job_r7(wxCommandEvent & event);
    void Onbutton_job_r8(wxCommandEvent & event);
    void Onbutton_job_r9(wxCommandEvent & event);
    void Onbutton_info_r(wxCommandEvent & event);
    void Onbutton_sys_r(wxCommandEvent & event);
    void Onbutton_pic_r(wxCommandEvent & event);
    void Onbutton_res_r(wxCommandEvent & event);
    void Onbutton_desc_r(wxCommandEvent & event);
    void button_hide_r();
};

#endif
