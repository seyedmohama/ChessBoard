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
	m_refGlade->get_widget("wnrBtn", pWNRBtn);
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
	buttonsArr[1] = pWBLBtn;
	buttonsArr[2] = pWNLBtn;
	buttonsArr[3] = pWQBtn;
	buttonsArr[4] = pWKBtn;
	buttonsArr[5] = pWNRBtn;
	buttonsArr[6] = pWBRBtn;
	buttonsArr[7] = pWRRBtn;
	buttonsArr[8] = pWP1Btn;
	buttonsArr[9] = pWP2Btn;
	buttonsArr[10] = pWP3Btn;
	buttonsArr[11] = pWP4Btn;
	buttonsArr[12] = pWP5Btn;
	buttonsArr[13] = pWP6Btn;
	buttonsArr[14] = pWP7Btn;
	buttonsArr[15] = pWP8Btn;

	buttonsArr[16] = pBRLBtn;
	buttonsArr[17] = pBBLBtn;
	buttonsArr[18] = pBNLBtn;
	buttonsArr[19] = pBQBtn;
	buttonsArr[20] = pBKBtn;
	buttonsArr[21] = pBNRBtn;
	buttonsArr[22] = pBBRBtn;
	buttonsArr[23] = pBRRBtn;
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

	//set positions of pieces
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
	positionOfPieces["brl"] = "a8";
	positionOfPieces["bbl"] = "b8";
	positionOfPieces["bnl"] = "c8";
	positionOfPieces["bq"] = "d8";
	positionOfPieces["bk"] = "e8";
	positionOfPieces["bnr"] = "f8";
	positionOfPieces["bbr"] = "g8";
	positionOfPieces["brr"] = "h8";
	positionOfPieces["bp1"] = "a7";
	positionOfPieces["bp2"] = "b7";
	positionOfPieces["bp3"] = "c7";
	positionOfPieces["bp4"] = "d7";
	positionOfPieces["bp5"] = "e7";
	positionOfPieces["bp6"] = "f7";
	positionOfPieces["bp7"] = "g7";
	positionOfPieces["bp8"] = "h7";

	// set positions of blank squars
	positionOfSquars[1] = "a3";
	positionOfSquars[2] = "b3";
	positionOfSquars[3] = "c3";
	positionOfSquars[4] = "d3";
	positionOfSquars[5] = "e3";
	positionOfSquars[6] = "f3";
	positionOfSquars[7] = "g3";
	positionOfSquars[8] = "h3";
	positionOfSquars[9] = "a4";
	positionOfSquars[10] = "b4";
	positionOfSquars[11] = "c4";
	positionOfSquars[12] = "d4";
	positionOfSquars[13] = "e4";
	positionOfSquars[14] = "f4";
	positionOfSquars[15] = "g4";
	positionOfSquars[16] = "h4";
	positionOfSquars[17] = "a5";
	positionOfSquars[18] = "b5";
	positionOfSquars[19] = "c5";
	positionOfSquars[20] = "d5";
	positionOfSquars[21] = "e5";
	positionOfSquars[22] = "f5";
	positionOfSquars[23] = "g5";
	positionOfSquars[24] = "h5";
	positionOfSquars[25] = "a6";
	positionOfSquars[26] = "b6";
	positionOfSquars[27] = "c6";
	positionOfSquars[28] = "d6";
	positionOfSquars[29] = "e6";
	positionOfSquars[30] = "f6";
	positionOfSquars[31] = "g6";
	positionOfSquars[32] = "h6";

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
	
	for(int i = 1;i <= 32;i++){
			squars[i] = (Gtk::Image*)nullptr;
			std::string id = (std::to_string(i)) + "sq";
			m_refGlade->get_widget( id, squars[i] );
			squars[i]->drag_dest_set( target);
	}

	buttonsArr[0]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_0_drag_data_get));
	buttonsArr[1]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_1_drag_data_get));
	buttonsArr[2]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_2_drag_data_get));
	buttonsArr[3]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_3_drag_data_get));
	buttonsArr[4]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_4_drag_data_get));
	buttonsArr[5]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_5_drag_data_get));
	buttonsArr[6]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_6_drag_data_get));
	buttonsArr[7]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_7_drag_data_get));
	buttonsArr[8]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_8_drag_data_get));
	buttonsArr[9]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_9_drag_data_get));
	buttonsArr[10]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_10_drag_data_get));
	buttonsArr[11]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_11_drag_data_get));
	buttonsArr[12]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_12_drag_data_get));
	buttonsArr[13]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_13_drag_data_get));
	buttonsArr[14]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_14_drag_data_get));
	buttonsArr[15]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_15_drag_data_get));
	buttonsArr[16]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_16_drag_data_get));
	buttonsArr[17]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_17_drag_data_get));
	buttonsArr[18]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_18_drag_data_get));
	buttonsArr[19]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_19_drag_data_get));
	buttonsArr[20]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_20_drag_data_get));
	buttonsArr[21]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_21_drag_data_get));
	buttonsArr[22]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_22_drag_data_get));
	buttonsArr[23]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_23_drag_data_get));
	buttonsArr[24]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_24_drag_data_get));
	buttonsArr[25]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_25_drag_data_get));
	buttonsArr[26]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_26_drag_data_get));
	buttonsArr[27]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_27_drag_data_get));
	buttonsArr[28]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_28_drag_data_get));
	buttonsArr[29]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_29_drag_data_get));
	buttonsArr[30]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_30_drag_data_get));
	buttonsArr[31]->signal_drag_data_get().connect(sigc::mem_fun(*this, &StackPage::on_31_drag_data_get));
	squars[1]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_1_drag_data_received));
	squars[2]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_2_drag_data_received));
	squars[3]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_3_drag_data_received));
	squars[4]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_4_drag_data_received));
	squars[5]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_5_drag_data_received));
	squars[6]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_6_drag_data_received));
	squars[7]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_7_drag_data_received));
	squars[8]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_8_drag_data_received));
	squars[9]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_9_drag_data_received));
	squars[10]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_10_drag_data_received));
	squars[11]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_11_drag_data_received));
	squars[12]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_12_drag_data_received));
	squars[13]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_13_drag_data_received));
	squars[14]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_14_drag_data_received));
	squars[15]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_15_drag_data_received));
	squars[16]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_16_drag_data_received));
	squars[17]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_17_drag_data_received));
	squars[18]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_18_drag_data_received));
	squars[19]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_19_drag_data_received));
	squars[20]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_20_drag_data_received));
	squars[21]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_21_drag_data_received));
	squars[22]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_22_drag_data_received));
	squars[23]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_23_drag_data_received));
	squars[24]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_24_drag_data_received));
	squars[25]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_25_drag_data_received));
	squars[26]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_26_drag_data_received));
	squars[27]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_27_drag_data_received));
	squars[28]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_28_drag_data_received));
	squars[29]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_29_drag_data_received));
	squars[30]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_30_drag_data_received));
	squars[31]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_31_drag_data_received));
	squars[32]->signal_drag_data_received().connect(sigc::mem_fun(*this,&StackPage::on_32_drag_data_received));
}

bool StackPage::motionVerification(){
	std::cout << "motion = " << piece << " from " <<  cellOrigin << " to " << cellDestination << std::endl;
	return true;
}

