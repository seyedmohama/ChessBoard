#include "StackPage.hpp"
#include <string>
#include <vector>
#include <iostream>
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
	m_refGlade->get_widget("wrlBtn", pWRLBtn);
	m_refGlade->get_widget("wrrBtn", pWRRBtn);
	m_refGlade->get_widget("wblBtn", pWBLBtn);
	m_refGlade->get_widget("wbrBtn", pWBRBtn);
	m_refGlade->get_widget("wnlBtn", pWNLBtn);
	m_refGlade->get_widget("wnlBtn", pWNRBtn);
	m_refGlade->get_widget("wqBtn", pWQBtn);
	m_refGlade->get_widget("wkBtn", pWKBtn);
	m_refGlade->get_widget("brlBtn", pBRLBtn);
	m_refGlade->get_widget("brrBtn", pBRRBtn);
	m_refGlade->get_widget("bblBtn", pBBLBtn);
	m_refGlade->get_widget("bbrBtn", pBBRBtn);
	m_refGlade->get_widget("bnlBtn", pBNLBtn);
	m_refGlade->get_widget("bnrBtn", pBNRBtn);
	m_refGlade->get_widget("bqBtn", pBQBtn);
	m_refGlade->get_widget("bkBtn", pBKBtn);
	m_refGlade->get_widget("bp1Btn", pBP1Btn);
	m_refGlade->get_widget("bp2Btn", pBP2Btn);
	m_refGlade->get_widget("bp3Btn", pBP3Btn);
	m_refGlade->get_widget("bp4Btn", pBP4Btn);
	m_refGlade->get_widget("bp5Btn", pBP5Btn);
	m_refGlade->get_widget("bp6Btn", pBP6Btn);
	m_refGlade->get_widget("bp7Btn", pBP7Btn);
	m_refGlade->get_widget("bp8Btn", pBP8Btn);
	m_refGlade->get_widget("wp1Btn", pWP1Btn);
	m_refGlade->get_widget("wp2Btn", pWP2Btn);
	m_refGlade->get_widget("wp3Btn", pWP3Btn);
	m_refGlade->get_widget("wp4Btn", pWP4Btn);
	m_refGlade->get_widget("wp5Btn", pWP5Btn);
	m_refGlade->get_widget("wp6Btn", pWP6Btn);
	m_refGlade->get_widget("wp7Btn", pWP7Btn);
	m_refGlade->get_widget("wp8Btn", pWP8Btn);
	buttonsArr[0] = pWRLBtn;
	buttonsArr[1] = pWRRBtn;
	buttonsArr[2] = pWBLBtn;
	buttonsArr[3] = pWBRBtn;
	buttonsArr[4] = pWNLBtn;
	buttonsArr[5] = pWNRBtn;
	buttonsArr[6] = pWQBtn;
	buttonsArr[7] = pWKBtn;
	buttonsArr[8] = pBRLBtn;
	buttonsArr[9] = pBRRBtn;
	buttonsArr[10] = pBBLBtn;
	buttonsArr[11] = pBBRBtn;
	buttonsArr[12] = pBNLBtn;
	buttonsArr[13] = pBNRBtn;
	buttonsArr[14] = pBQBtn;
	buttonsArr[15] = pBKBtn;
	buttonsArr[16] = pWP1Btn;
	buttonsArr[17] = pWP2Btn;
	buttonsArr[18] = pWP3Btn;
	buttonsArr[19] = pWP4Btn;
	buttonsArr[20] = pWP5Btn;
	buttonsArr[21] = pWP6Btn;
	buttonsArr[22] = pWP7Btn;
	buttonsArr[23] = pWP8Btn;
	buttonsArr[24] = pBP1Btn;
	buttonsArr[25] = pBP2Btn;
	buttonsArr[26] = pBP3Btn;
	buttonsArr[27] = pBP4Btn;
	buttonsArr[28] = pBP5Btn;
	buttonsArr[29] = pBP6Btn;
	buttonsArr[30] = pBP7Btn;
	buttonsArr[31] = pBP8Btn;

	
/*	
	pWNLImg->property_events() = Gdk::EventMask::BUTTON_PRESS_MASK;
	pWNLImg->signal_button_press_event().connect(sigc::mem_fun(*this,&StackPage::on_activate2));
	pWNLImg->property_focus_on_click() = true;
	pWNLImg->property_can_focus() = true;

	pWBLBtn->signal_clicked().connect(sigc::mem_fun(*this,&StackPage::on_activate));
	pWBLBtn->property_focus_on_click() = false;
	pWBLBtn->property_relief() = Gtk::ReliefStyle::RELIEF_NONE;
	pWBLBtn->set_focus_on_click(false);
	pWBLBtn->set_use_stock(false);

	pWBLBtn->signal_activate().connect(sigc::mem_fun(*this,&StackPage::on_wbl_active));
*/

  pGameBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &StackPage::set_visible_child), "start_game_page", Gtk::STACK_TRANSITION_TYPE_NONE));
	
	pStartGameBtn->signal_clicked().connect(sigc::mem_fun(*this,&StackPage::startGameBtn_clicked));
}

StackPage::~StackPage(){
}

void StackPage::startGameBtn_clicked(){
	positionOfPieces["wrl"] = "a1";
	positionOfPieces["wbl"] = "b1";
	positionOfPieces["wnl"] = "c1";
	positionOfPieces["wq"] = "d1";
	positionOfPieces["wk"] = "e1";
	positionOfPieces["wnr"] = "f1";
	positionOfPieces["wbr"] = "g1";
	positionOfPieces["wrr"] = "h1";
	positionOfPieces["wp1"] = "a2";
	positionOfPieces["wp2"] = "b2";
	positionOfPieces["wp3"] = "c2";
	positionOfPieces["wp4"] = "d2";
	positionOfPieces["wp5"] = "e2";
	positionOfPieces["wp6"] = "f2";
	positionOfPieces["wp7"] = "g2";
	positionOfPieces["wp8"] = "h2";
	positionOfPieces["brl"] = "a1";
	positionOfPieces["bbl"] = "b1";
	positionOfPieces["bnl"] = "c1";
	positionOfPieces["bq"] = "d1";
	positionOfPieces["bk"] = "e1";
	positionOfPieces["bnr"] = "f1";
	positionOfPieces["bbr"] = "g1";
	positionOfPieces["brr"] = "h1";
	positionOfPieces["bp1"] = "a2";
	positionOfPieces["bp2"] = "b2";
	positionOfPieces["bp3"] = "c2";
	positionOfPieces["bp4"] = "d2";
	positionOfPieces["bp5"] = "e2";
	positionOfPieces["bp6"] = "f2";
	positionOfPieces["bp7"] = "g2";
	positionOfPieces["bp8"] = "h2";
	m_refGlade->get_widget("gameNameEntry", pGameNameEnt);
	m_refGlade->get_widget("playerFirstNameEntry", pPlayerFirstNameEnt);
	m_refGlade->get_widget("playerSecondNameEntry", pPlayerSecondNameEnt);

	handler = new Handler ( pGameNameEnt->get_text(), pPlayerFirstNameEnt->get_text(), pPlayerSecondNameEnt->get_text());
	
	set_visible_child("game_page", Gtk::STACK_TRANSITION_TYPE_NONE);
	m_refGlade->get_widget("boardGameID", pBoardGame);
	m_refGlade->get_widget("overlayGameBoardID", pGameBoardOverlay);
	m_refGlade->get_widget("boardGameImageID", pGameBoardImage);
	m_refGlade->get_widget("gameNameLabelID", pGameNameLabel);

	m_refGlade->get_widget("brlImg", pBRLImg);



//	std::cout << "name of brl: " << pBRLImg->property_icon_name().get_value() << std::endl;
	std::cout << pBRLImg->get_name() << std::endl;

	Gtk::Allocation rectangle;
	rectangle.set_width(69);
	rectangle.set_height(69);

	pBoardGame->size_allocate(rectangle,0);
	pBoardGame->set_column_spacing(0);

	pGameBoardOverlay->add_overlay(*pBoardGame);
	pGameNameLabel->set_label(handler->get_gameName());


	std::vector<Gtk::TargetEntry>	target;
	target.push_back(Gtk::TargetEntry("Target"));

	for(size_t i = 0;i < 32;i++){
		buttonsArr[i]->drag_source_set(target);
	}
	
	for(int i = 3;i < 7;i++){
		for(int j = 97; j < 105; j++){
			pair = std::make_pair(char(j), i);
			squars[pair] = (Gtk::Image*)nullptr;
			std::string id = char(j) + std::to_string(i);
			m_refGlade->get_widget(id, squars[pair] );
			squars[pair]->drag_dest_set(target);
		}
	}
	
	pBoardGame->attach(*pWRLBtn, 0, 7);
	std::pair<char, int> newPair('a', 3);
	pBoardGame->attach(*(squars[newPair]), 0, 5);
	show_all();

	pWRLBtn->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_wrl_drag_data_get));
	std::pair<char,int> tempPair('a',3);
	squars[tempPair]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_a3_drag_data_received));
}

bool StackPage::motionVerification(){
	std::cout << "motion = " << piece << " from " <<  cellOrigin << " to " << cellDestination << std::endl;
	return true;
}

