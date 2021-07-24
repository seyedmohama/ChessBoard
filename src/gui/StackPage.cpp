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
	positionsOfPieces["wrl"] = "a1";
	positionsOfPieces["wbl"] = "b1";
	positionsOfPieces["wnl"] = "c1";
	positionsOfPieces["wq"] = "d1";
	positionsOfPieces["wk"] = "e1";
	positionsOfPieces["wnr"] = "f1";
	positionsOfPieces["wbr"] = "g1";
	positionsOfPieces["wrr"] = "h1";
	positionsOfPieces["wp1"] = "a2";
	positionsOfPieces["wp2"] = "b2";
	positionsOfPieces["wp3"] = "c2";
	positionsOfPieces["wp4"] = "d2";
	positionsOfPieces["wp5"] = "e2";
	positionsOfPieces["wp6"] = "f2";
	positionsOfPieces["wp7"] = "g2";
	positionsOfPieces["wp8"] = "h2";
	positionsOfPieces["brl"] = "a1";
	positionsOfPieces["bbl"] = "b1";
	positionsOfPieces["bnl"] = "c1";
	positionsOfPieces["bq"] = "d1";
	positionsOfPieces["bk"] = "e1";
	positionsOfPieces["bnr"] = "f1";
	positionsOfPieces["bbr"] = "g1";
	positionsOfPieces["brr"] = "h1";
	positionsOfPieces["bp1"] = "a2";
	positionsOfPieces["bp2"] = "b2";
	positionsOfPieces["bp3"] = "c2";
	positionsOfPieces["bp4"] = "d2";
	positionsOfPieces["bp5"] = "e2";
	positionsOfPieces["bp6"] = "f2";
	positionsOfPieces["bp7"] = "g2";
	positionsOfPieces["bp8"] = "h2";
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
	pWRLBtn->signal_drag_begin().connect(sigc::mem_fun(*this, &StackPage::on_wrl_drag_begin));
	pWRLBtn->signal_drag_data_delete().connect(sigc::mem_fun(*this,&StackPage::on_wsl_drag_data_delete));
	
	std::pair<char,int> tempPair('a',3);
	squars[tempPair]->signal_drag_drop
}

void StackPage::on_wrl_drag_begin(const Glib::RefPtr<Gdk::DragContext>& context){
	piece = "wrl";
	cellOrigin = positionsOfPieces[piece];



	std::cout << "on_wrl_drag_begin" << std::endl;
	std::cout << context->get_selection() << std::endl;
	std::cout << context->get_protocol() << std::endl;
	std::cout << context->get_actions() << std::endl;
	std::cout << "get_device\t" << context->get_device()->get_name() << std::endl;
	std::cout << "get_has_cursor: " << context->get_device()->get_has_cursor() << std::endl;
	std::cout << "get_source: " << context->get_device()->get_source() << std::endl;
	std::cout << "get_mode: " << context->get_device()->get_mode() << std::endl;
	std::cout << "get_n_keys: " << context->get_device()->get_n_keys() << std::endl;
	std::cout << "get_vendor_id: " << context->get_device()->get_vendor_id() << std::endl;
	std::cout << "get_product_id: " << context->get_device()->get_product_id() << std::endl;

}



void StackPage::on_wsl_drag_data_delete(const Glib::RefPtr<Gdk::DragContext>& context){
	std::cout << "on_wsl_drag_data_delete" << std::endl;
}


/*
void StackPage::on_activate() {
	std::cout << "ok" << std::endl;
}
bool StackPage::on_activate2(GdkEventButton* test) {
	std::cout << "ok" << std::endl;
	return true;
}
void StackPage::on_wbl_active(){
	pWBLBtn->set_relief(Gtk::RELIEF_NONE);
}*/


void StackPage::motionVerification(std::string cellOrigin, std::string item, std::string cellDestination){
	std::cout << "motion = " << item << " from " <<  cellOrigin << " to " << cellDestination << std::endl;
	return true;
}
