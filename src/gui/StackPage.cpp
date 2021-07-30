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

	// set positions of blank blankSquars
	positionOfBlankSquars[1] = "a3";
	positionOfBlankSquars[2] = "b3";
	positionOfBlankSquars[3] = "c3";
	positionOfBlankSquars[4] = "d3";
	positionOfBlankSquars[5] = "e3";
	positionOfBlankSquars[6] = "f3";
	positionOfBlankSquars[7] = "g3";
	positionOfBlankSquars[8] = "h3";
	positionOfBlankSquars[9] = "a4";
	positionOfBlankSquars[10] = "b4";
	positionOfBlankSquars[11] = "c4";
	positionOfBlankSquars[12] = "d4";
	positionOfBlankSquars[13] = "e4";
	positionOfBlankSquars[14] = "f4";
	positionOfBlankSquars[15] = "g4";
	positionOfBlankSquars[16] = "h4";
	positionOfBlankSquars[17] = "a5";
	positionOfBlankSquars[18] = "b5";
	positionOfBlankSquars[19] = "c5";
	positionOfBlankSquars[20] = "d5";
	positionOfBlankSquars[21] = "e5";
	positionOfBlankSquars[22] = "f5";
	positionOfBlankSquars[23] = "g5";
	positionOfBlankSquars[24] = "h5";
	positionOfBlankSquars[25] = "a6";
	positionOfBlankSquars[26] = "b6";
	positionOfBlankSquars[27] = "c6";
	positionOfBlankSquars[28] = "d6";
	positionOfBlankSquars[29] = "e6";
	positionOfBlankSquars[30] = "f6";
	positionOfBlankSquars[31] = "g6";
	positionOfBlankSquars[32] = "h6";

	//positionOfBlankSquars[33] = "a1";

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

	
	Gtk::Allocation rectangle;
	rectangle.set_width(609);
	rectangle.set_height(609);

	pBoardGame->size_allocate(rectangle,0);
	pBoardGame->set_column_spacing(0);

	pGameBoardOverlay->add_overlay(*pBoardGame);
	pGameNameLabel->set_label(handler->get_gameName());


	std::vector<Gtk::TargetEntry>	target;
	target.push_back(Gtk::TargetEntry("Target"));

	for( size_t i = 0; i < 32; i++){
		buttonsArr[i]->drag_source_set(target);
		buttonsArr[i]->drag_dest_set(target);
	}

	for( int i = 1; i <= 64; i++){
			blankSquars[i] = (Gtk::Image*)nullptr;
			std::string id = (std::to_string(i)) + "sq";
			m_refGlade->get_widget( id, blankSquars[i]);
			blankSquars[i]->drag_dest_set( target);
	}

	buttonsArr[0]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_0_drag_data_get));
	buttonsArr[1]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_1_drag_data_get));
	buttonsArr[2]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_2_drag_data_get));
	buttonsArr[3]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_3_drag_data_get));
	buttonsArr[4]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_4_drag_data_get));
	buttonsArr[5]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_5_drag_data_get));
	buttonsArr[6]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_6_drag_data_get));
	buttonsArr[7]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_7_drag_data_get));
	buttonsArr[8]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_8_drag_data_get));
	buttonsArr[9]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_9_drag_data_get));
	buttonsArr[10]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_10_drag_data_get));
	buttonsArr[11]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_11_drag_data_get));
	buttonsArr[12]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_12_drag_data_get));
	buttonsArr[13]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_13_drag_data_get));
	buttonsArr[14]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_14_drag_data_get));
	buttonsArr[15]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_15_drag_data_get));
	buttonsArr[16]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_16_drag_data_get));
	buttonsArr[17]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_17_drag_data_get));
	buttonsArr[18]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_18_drag_data_get));
	buttonsArr[19]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_19_drag_data_get));
	buttonsArr[20]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_20_drag_data_get));
	buttonsArr[21]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_21_drag_data_get));
	buttonsArr[22]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_22_drag_data_get));
	buttonsArr[23]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_23_drag_data_get));
	buttonsArr[24]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_24_drag_data_get));
	buttonsArr[25]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_25_drag_data_get));
	buttonsArr[26]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_26_drag_data_get));
	buttonsArr[27]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_27_drag_data_get));
	buttonsArr[28]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_28_drag_data_get));
	buttonsArr[29]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_29_drag_data_get));
	buttonsArr[30]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_30_drag_data_get));
	buttonsArr[31]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_31_drag_data_get));
	blankSquars[1]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_1s_drag_data_received));
	blankSquars[2]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_2s_drag_data_received));
	blankSquars[3]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_3s_drag_data_received));
	blankSquars[4]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_4s_drag_data_received));
	blankSquars[5]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_5s_drag_data_received));
	blankSquars[6]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_6s_drag_data_received));
	blankSquars[7]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_7s_drag_data_received));
	blankSquars[8]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_8s_drag_data_received));
	blankSquars[9]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_9s_drag_data_received));
	blankSquars[10]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_10s_drag_data_received));
	blankSquars[11]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_11s_drag_data_received));
	blankSquars[12]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_12s_drag_data_received));
	blankSquars[13]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_13s_drag_data_received));
	blankSquars[14]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_14s_drag_data_received));
	blankSquars[15]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_15s_drag_data_received));
	blankSquars[16]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_16s_drag_data_received));
	blankSquars[17]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_17s_drag_data_received));
	blankSquars[18]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_18s_drag_data_received));
	blankSquars[19]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_19s_drag_data_received));
	blankSquars[20]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_20s_drag_data_received));
	blankSquars[21]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_21s_drag_data_received));
	blankSquars[22]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_22s_drag_data_received));
	blankSquars[23]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_23s_drag_data_received));
	blankSquars[24]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_24s_drag_data_received));
	blankSquars[25]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_25s_drag_data_received));
	blankSquars[26]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_26s_drag_data_received));
	blankSquars[27]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_27s_drag_data_received));
	blankSquars[28]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_28s_drag_data_received));
	blankSquars[29]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_29s_drag_data_received));
	blankSquars[30]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_30s_drag_data_received));
	blankSquars[31]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_31s_drag_data_received));
	blankSquars[32]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_32s_drag_data_received));
	blankSquars[33]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_33s_drag_data_received));
	blankSquars[34]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_34s_drag_data_received));
	blankSquars[35]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_35s_drag_data_received));
	blankSquars[36]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_36s_drag_data_received));
	blankSquars[37]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_37s_drag_data_received));
	blankSquars[38]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_38s_drag_data_received));
	blankSquars[39]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_39s_drag_data_received));
	blankSquars[40]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_40s_drag_data_received));
	blankSquars[41]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_41s_drag_data_received));
	blankSquars[42]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_42s_drag_data_received));
	blankSquars[43]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_43s_drag_data_received));
	blankSquars[44]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_44s_drag_data_received));
	blankSquars[45]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_45s_drag_data_received));
	blankSquars[46]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_46s_drag_data_received));
	blankSquars[47]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_47s_drag_data_received));
	blankSquars[48]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_48s_drag_data_received));
	blankSquars[49]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_49s_drag_data_received));
	blankSquars[50]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_50s_drag_data_received));
	blankSquars[51]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_51s_drag_data_received));
	blankSquars[52]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_52s_drag_data_received));
	blankSquars[53]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_53s_drag_data_received));
	blankSquars[54]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_54s_drag_data_received));
	blankSquars[55]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_55s_drag_data_received));
	blankSquars[56]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_56s_drag_data_received));
	blankSquars[57]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_57s_drag_data_received));
	blankSquars[58]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_58s_drag_data_received));
	blankSquars[59]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_59s_drag_data_received));
	blankSquars[60]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_60s_drag_data_received));
	blankSquars[61]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_61s_drag_data_received));
	blankSquars[62]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_62s_drag_data_received));
	blankSquars[63]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_63s_drag_data_received));
	blankSquars[64]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_64s_drag_data_received));




	buttonsArr[0]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_0p_drag_data_received));
	buttonsArr[1]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_1p_drag_data_received));
	buttonsArr[2]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_2p_drag_data_received));
	buttonsArr[3]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_3p_drag_data_received));
	buttonsArr[4]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_4p_drag_data_received));
	buttonsArr[5]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_5p_drag_data_received));
	buttonsArr[6]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_6p_drag_data_received));
	buttonsArr[7]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_7p_drag_data_received));
	buttonsArr[8]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_8p_drag_data_received));
	buttonsArr[9]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_9p_drag_data_received));
	buttonsArr[10]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_10p_drag_data_received));
	buttonsArr[11]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_11p_drag_data_received));
	buttonsArr[12]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_12p_drag_data_received));
	buttonsArr[13]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_13p_drag_data_received));
	buttonsArr[14]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_14p_drag_data_received));
	buttonsArr[15]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_15p_drag_data_received));
	buttonsArr[16]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_16p_drag_data_received));
	buttonsArr[17]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_17p_drag_data_received));
	buttonsArr[18]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_18p_drag_data_received));
	buttonsArr[19]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_19p_drag_data_received));
	buttonsArr[20]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_20p_drag_data_received));
	buttonsArr[21]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_21p_drag_data_received));
	buttonsArr[22]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_22p_drag_data_received));
	buttonsArr[23]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_23p_drag_data_received));
	buttonsArr[24]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_24p_drag_data_received));
	buttonsArr[25]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_25p_drag_data_received));
	buttonsArr[26]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_26p_drag_data_received));
	buttonsArr[27]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_27p_drag_data_received));
	buttonsArr[28]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_28p_drag_data_received));
	buttonsArr[29]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_29p_drag_data_received));
	buttonsArr[30]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_30p_drag_data_received));
	buttonsArr[31]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_31p_drag_data_received));
	}

std::string StackPage::pieceNameByPosition(std::map< std::string, std::string> map, std::string position){
	for( auto it = map.cbegin(); it != map.cend(); it++){
		if((*it).second == position){
			return (*it).first;
		}
	}
	return "";
}

int StackPage::cellIsEmpty( std::map< std::string, std::string> map, std::string cell){
	for( auto it = map.cbegin(); it != map.cend(); it++){
		if((*it).second == cell){
			if((*it).first == piece){
				return -1;
			}
			return 0;
		}
	}
	return 1;
}

bool StackPage::motionVerification(){
	if(cellIsEmpty( positionOfPieces, cellDestination) == 0){
		std::cout << "motion attack = " << piece << " from " << cellOrigin << " to " << pieceNameByPosition( positionOfPieces, cellDestination) << " on "<< cellDestination << std::endl;
		return true;
	}
	if(cellIsEmpty( positionOfPieces, cellDestination) == -1){
		std::cout << "motion invalid!!!" << std::endl;
		return false;
	}
	std::cout << "motion = " << piece << " from " <<  cellOrigin << " to " << cellDestination << std::endl;
	return true;
}

