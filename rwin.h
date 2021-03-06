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
#include <wx/html/htmlwin.h>
#include <wx/notebook.h>

class Rwin : public wxFrame
{
public:

    Rwin(const wxString& title);

    int job_number_r;
    int but_job_0_r;
    int but_job_1_r;
    int but_job_2_r;
    int but_job_3_r;
    int but_job_4_r;
    int but_job_5_r;
    int but_job_6_r;
    int but_job_7_r;
    int but_job_8_r;
    int but_job_9_r;

    wxButton *button_info_r;
    wxButton *button_pic_r;
    wxButton *button_res_r;
    wxButton *button_desc_r;
    wxButton *button_job_r[10];
    wxButton *button_quit_r;

    wxStaticBitmap *title_r;
    wxStaticBitmap *logo_r;
    wxStaticBitmap *show_r;
    wxStaticBitmap *show_t;
    wxStaticBitmap *pic_r;

    wxHtmlWindow *html_info_r;

    wxNotebook *res_book;

    wxBitmap *bmp_show;

    wxPanel *panel_r;
    wxPanel *panel_title;
    wxPanel *panel_info;
    wxPanel *panel_pic;
    wxPanel *panel_res;
    wxPanel *panel_desc;
    wxPanel *panel_logo;
    wxPanel *panel_job;
    wxPanel *panel_show;
    wxPanel *panel_show_h;
    wxPanel *panel_show_b;
    wxPanel *panel_book_pic;
    wxPanel *panel_book_text;
    wxPanel *panel_book_foto;

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
    void Onbutton_pic_r(wxCommandEvent & event);
    void Onbutton_res_r(wxCommandEvent & event);
    void Onbutton_desc_r(wxCommandEvent & event);
    void button_job_disable_r();
    void button_hide_r();
};

#endif
