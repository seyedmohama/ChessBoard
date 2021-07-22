#ifndef INC_STACKPAGE
#define INC_STACKPAGE

#include <gtkmm/stack.h>
#include <gtkmm/button.h>
#include <gtkmm/builder.h>
#include <gtkmm/entry.h>
#include <gtkmm/grid.h>
#include <gtkmm/overlay.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>

class Handler;
class StackPage : public Gtk::Stack{
	public:
		StackPage(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
		virtual ~StackPage();
	private:
		Gtk::Button *pGameBtn, *pExitBtn, *pSettingBtn, *pStartGameBtn;
		Gtk::Entry *pGameNameEnt, *pPlayerFirstNameEnt, *pPlayerSecondNameEnt;
		Gtk::Grid *pBoardGame;
		Gtk::Overlay *pGameBoardOverlay;
		Gtk::Image *pGameBoardImage;
		Gtk::Label *pGameNameLabel;
		Handler *handler ;
		Glib::RefPtr<Gtk::Builder> m_refGlade;
		Gtk::Button *pWBLBtn;

		void startGameBtn_clicked();
};
#endif
