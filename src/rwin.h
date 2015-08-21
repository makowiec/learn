#ifndef GTKMM_EXAMPLE_STARTR_H
#define GTKMM_EXAMPLE_STARTR_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>

class Startr : public Gtk::Window
{

public:
Startr();
virtual ~Startr();

protected:
//Signal handlers:
void on_button_clicked_r1();
void on_button_clicked_r2();

private:
Gtk::HBox Kontener_poziomy_r1; // Deklaracja obiektu listy poziomej
Gtk::Button m_button_r1, m_button_r2; // Dekretacja przycisku
};

#endif // GTKMM_EXAMPLE_STARTR_H
