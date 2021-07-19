#include "StackPage.hpp"
#include "handler.hpp"

StackPage::StackPage(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder>& refGlade) :
Gtk::Stack(cobject),
pGameBtn(nullptr),
pExitBtn(nullptr),
pSettingBtn(nullptr),
pStartGameBtn(nullptr),
handler(nullptr),
m_refGlade(refGlade){
  m_refGlade->get_widget("gameBtnPage0", pGameBtn);
  m_refGlade->get_widget("settingBtnPage0", pSettingBtn);
	m_refGlade->get_widget("startGameBtnID", pStartGameBtn);

  pGameBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &StackPage::set_visible_child), "start_game_page", Gtk::STACK_TRANSITION_TYPE_NONE));
	
	pStartGameBtn->signal_clicked().connect(sigc::mem_fun(*this,&StackPage::startGameBtn_clicked));
}

StackPage::~StackPage(){
}

void StackPage::startGameBtn_clicked(){
	m_refGlade->get_widget("gameNameEntry", pGameNameEnt);
	m_refGlade->get_widget("playerFirstNameEntry", pPlayerFirstNameEnt);
	m_refGlade->get_widget("playerSecondNameEntry", pPlayerSecondNameEnt);

	handler = new Handler ( pGameNameEnt->get_text(), pPlayerFirstNameEnt->get_text(), pPlayerSecondNameEnt->get_text());
	
	set_visible_child("game_page", Gtk::STACK_TRANSITION_TYPE_NONE);
	m_refGlade->get_widget("boardGameID", pBoardGame);
	m_refGlade->get_widget("overlayGameBoardID", pGameBoardOverlay);
	m_refGlade->get_widget("boardGameImageID", pGameBoardImage);
	m_refGlade->get_widget("gameNameLabelID", pGameNameLabel);

	pGameBoardOverlay->add_overlay(*pBoardGame);
	pGameNameLabel->set_label(handler->get_gameName());
}
