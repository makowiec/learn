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

    void OnQuit(wxCommandEvent & event);
    void hide_button_r();

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

    void Onbutton_info_r0(wxCommandEvent & event);
    void Onbutton_info_r1(wxCommandEvent & event);
    void Onbutton_info_r2(wxCommandEvent & event);
    void Onbutton_info_r3(wxCommandEvent & event);
    void Onbutton_info_r4(wxCommandEvent & event);
    void Onbutton_info_r5(wxCommandEvent & event);
    void Onbutton_info_r6(wxCommandEvent & event);
    void Onbutton_info_r7(wxCommandEvent & event);
    void Onbutton_info_r8(wxCommandEvent & event);
    void Onbutton_info_r9(wxCommandEvent & event);

    void Onbutton_sys_r0(wxCommandEvent & event);
    void Onbutton_sys_r1(wxCommandEvent & event);
    void Onbutton_sys_r2(wxCommandEvent & event);
    void Onbutton_sys_r3(wxCommandEvent & event);
    void Onbutton_sys_r4(wxCommandEvent & event);
    void Onbutton_sys_r5(wxCommandEvent & event);
    void Onbutton_sys_r6(wxCommandEvent & event);
    void Onbutton_sys_r7(wxCommandEvent & event);
    void Onbutton_sys_r8(wxCommandEvent & event);
    void Onbutton_sys_r9(wxCommandEvent & event);

    void Onbutton_pic_r0(wxCommandEvent & event);
    void Onbutton_pic_r1(wxCommandEvent & event);
    void Onbutton_pic_r2(wxCommandEvent & event);
    void Onbutton_pic_r3(wxCommandEvent & event);
    void Onbutton_pic_r4(wxCommandEvent & event);
    void Onbutton_pic_r5(wxCommandEvent & event);
    void Onbutton_pic_r6(wxCommandEvent & event);
    void Onbutton_pic_r7(wxCommandEvent & event);
    void Onbutton_pic_r8(wxCommandEvent & event);
    void Onbutton_pic_r9(wxCommandEvent & event);

    void Onbutton_res_r0(wxCommandEvent & event);
    void Onbutton_res_r1(wxCommandEvent & event);
    void Onbutton_res_r2(wxCommandEvent & event);
    void Onbutton_res_r3(wxCommandEvent & event);
    void Onbutton_res_r4(wxCommandEvent & event);
    void Onbutton_res_r5(wxCommandEvent & event);
    void Onbutton_res_r6(wxCommandEvent & event);
    void Onbutton_res_r7(wxCommandEvent & event);
    void Onbutton_res_r8(wxCommandEvent & event);
    void Onbutton_res_r9(wxCommandEvent & event);

    wxButton *button_job_r[10];
    wxButton *button_info_r[10];
    wxButton *button_sys_r[10];
    wxButton *button_pic_r[10];
    wxButton *button_res_r[10];

};

#endif
