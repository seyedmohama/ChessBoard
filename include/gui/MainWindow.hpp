#ifndef INC_MAINWINDOW
#define INC_MAINWINDOW

#include <gtkmm/window.h>
#include <gtkmm/builder.h>
#include <string>
#include "StackPage.hpp"

class MainWindow : public Gtk::Window
{
public:
	MainWindow(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder> &refGlade);
	virtual ~MainWindow();

protected:
	Glib::RefPtr<Gtk::Builder> m_refGlade;
	StackPage *pStackPage;
	Gtk::Button *pExitBtn, *pGameBtn, *pStartGameBtn;
};

#endif
