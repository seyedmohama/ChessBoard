#ifndef INC_STACKPAGE
#define INC_STACKPAGE

#include <gdk/gdk.h>
#include <gtkmm/stack.h>
#include <gtkmm/button.h>
#include <gtkmm/builder.h>
#include <gtkmm/entry.h>
#include <gtkmm/grid.h>
#include <gtkmm/overlay.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/widget.h>
#include <map>
#include <utility>

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
		Gtk::Image *pGameBoardImage, *pWNLImg, *pBRLImg;
		Gtk::Label *pGameNameLabel;
		Handler *handler ;
		Glib::RefPtr<Gtk::Builder> m_refGlade;
		Gtk::Button *pWRLBtn, *pWRRBtn, *pWBLBtn, *pWBRBtn, *pWNLBtn, *pWNRBtn, *pWQBtn, *pWKBtn, *pBRLBtn, *pBRRBtn, *pBBLBtn, *pBBRBtn, *pBNLBtn, *pBNRBtn, *pBQBtn, *pBKBtn, *pWP1Btn, *pWP2Btn, *pWP3Btn, *pWP4Btn, *pWP5Btn, *pWP6Btn, *pWP7Btn, *pWP8Btn, *pBP1Btn, *pBP2Btn, *pBP3Btn, *pBP4Btn, *pBP5Btn, *pBP6Btn, *pBP7Btn, *pBP8Btn;
		std::array<Gtk::Button*, 32> buttonsArr;

		std::pair<char,int> pair;
		std::map<std::pair<char,int>, Gtk::Image*> squars; 

		std::map<std::string, std::string> positionOfPieces;
		std::string cellOrigin, piece, cellDestination;

		void startGameBtn_clicked();
		bool motionVerification(std::string cellOrigin, std::string item, std::string cellDestination);

		void on_wrl_drag_begin(const Glib::RefPtr<Gdk::DragContext>& context);
		void on_wsl_drag_data_delete(const Glib::RefPtr<Gdk::DragContext>&);
		/*
		void on_activate();
		bool on_activate2(GdkEventButton*);
		void on_wbl_active();
		*/
};

class Item : public Gtk::Button{
	public:
		Item(std::string,int,int);
	private:
		Gtk::Image image;
		void on_item_clicked();
};
#endif
