#ifndef INC_STACKPAGE
#define INC_STACKPAGE

#include <gtkmm/stack.h>
#include <gtkmm/button.h>
#include <gtkmm/builder.h>
#include <gtkmm/entry.h>
#include <gtkmm/grid.h>

class Handler;
class StackPage : public Gtk::Stack{
	public:
		StackPage(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
		virtual ~StackPage();
	private:
		Gtk::Button *pGameBtn, *pExitBtn, *pSettingBtn, *pStartGameBtn;
		Gtk::Entry *pGameNameEnt, *pPlayerFirstNameEnt, *pPlayerSecondNameEnt;
		Gtk::Grid *pBoardGame;
		Handler *handler ;
		Glib::RefPtr<Gtk::Builder> m_refGlade;

		void startGameBtn_clicked();
};
#endif
