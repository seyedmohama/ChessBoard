#include "StackPage.hpp"
#include "utility.hpp"
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
pBoardGame(nullptr),
pRemovedPiecesGrid(nullptr),
m_refGlade(refGlade){
  m_refGlade->get_widget("gameBtnPage0", pGameBtn);
  m_refGlade->get_widget("settingBtnPage0", pSettingBtn);
	m_refGlade->get_widget("startGameBtnID", pStartGameBtn);
	m_refGlade->get_widget("exitBtnStack2", pExitBtnStack2);
	m_refGlade->get_widget("boardGameID", pBoardGame);
	m_refGlade->get_widget("overlayGameBoardID", pGameBoardOverlay);
	m_refGlade->get_widget("boardGameImageID", pGameBoardImage);
	m_refGlade->get_widget("gameNameLabelID", pGameNameLabel);
	m_refGlade-> get_widget( "removedPiecesGrid", pRemovedPiecesGrid);

	nameOfPieces[0] = "wrl";
 	nameOfPieces[1] = "wbl";
 	nameOfPieces[2] = "wnl";
 	nameOfPieces[3] = "wq";
 	nameOfPieces[4] = "wk";
 	nameOfPieces[5] = "wnr";
 	nameOfPieces[6] = "wbr";
 	nameOfPieces[7] = "wrr";
 	nameOfPieces[8] = "wp1";
 	nameOfPieces[9] = "wp2";
 	nameOfPieces[10] = "wp3";
 	nameOfPieces[11] = "wp4";
 	nameOfPieces[12] = "wp5";
 	nameOfPieces[13] = "wp6";
 	nameOfPieces[14] = "wp7";
 	nameOfPieces[15] = "wp8";
 	nameOfPieces[16] = "brl";
 	nameOfPieces[17] = "bbl";
 	nameOfPieces[18] = "bnl";
 	nameOfPieces[19] = "bq";
 	nameOfPieces[20] = "bk";
 	nameOfPieces[21] = "bnr";
 	nameOfPieces[22] = "bbr";
 	nameOfPieces[23] = "brr";
 	nameOfPieces[24] = "bp1";
 	nameOfPieces[25] = "bp2";
 	nameOfPieces[26] = "bp3";
 	nameOfPieces[27] = "bp4";
 	nameOfPieces[28] = "bp5";
 	nameOfPieces[29] = "bp6";
 	nameOfPieces[30] = "bp7";
 	nameOfPieces[31] = "bp8";

	std::string name;
	for( int i = 0; i <= 31; i++){
		name = nameOfPieces[i] + "Btn";
		m_refGlade-> get_widget( name, pieces[i]);
	}

	pGameBoardOverlay->add_overlay(*pBoardGame);

  pGameBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &StackPage::set_visible_child), "start_game_page", Gtk::STACK_TRANSITION_TYPE_NONE));
	
	pStartGameBtn->signal_clicked().connect(sigc::mem_fun(*this,&StackPage::startGameBtn_clicked));

	pExitBtnStack2-> signal_clicked() .connect( sigc::mem_fun( *this, &StackPage::exitBtnStack2_clicked));

	m_refGlade->get_widget( "reloadBtnStack2", pReloadBtnStack2);
	pReloadBtnStack2-> signal_clicked() .connect( sigc::mem_fun( *this, &StackPage::reloadBtnStack2_clicked));

	//	connect images blank squars on UI file to program code and set target to drag&drop.
	std::vector<Gtk::TargetEntry>	target;
	target.push_back(Gtk::TargetEntry("Target"));
	for( int i = 1; i <= 64; i++){
			blankSquars[i] = (Gtk::Image*)nullptr;
			std::string id = (std::to_string(i)) + "sq";
			m_refGlade->get_widget( id, blankSquars[i]);
			blankSquars[i]->drag_dest_set( target);
	}
//	Set pieces target for DnD
	for( size_t i = 0; i <= 31; i++){
		pieces[i]->drag_source_set(target);
		pieces[i]->drag_dest_set(target);
	}

}


StackPage::~StackPage(){
}

void StackPage::exitBtnStack2_clicked(){
	set_visible_child( "wellcome_page", Gtk::STACK_TRANSITION_TYPE_NONE);
	delete(handler);
}


void StackPage::startGameBtn_clicked(){

//	initial Board from class chessboard
	chessboard.initBoard();


//	setup separators on page stack2 game
	m_refGlade-> get_widget( "separator0Stack2", pSeparators[0]);
	m_refGlade-> get_widget( "separator1Stack2", pSeparators[1]);
	m_refGlade-> get_widget( "separator2Stack2", pSeparators[2]);
	m_refGlade-> get_widget( "separator3Stack2", pSeparators[3]);
	m_refGlade-> get_widget( "separator5Stack2", pSeparators[5]);
	m_refGlade-> get_widget( "separator6Stack2", pSeparators[6]);
	pSeparators[0]-> override_background_color( Gdk::RGBA("#8d99ae"));
	pSeparators[1]-> override_background_color( Gdk::RGBA("#8d99ae"));
	pSeparators[2]-> override_background_color( Gdk::RGBA("#8d99ae"));
	pSeparators[3]-> override_background_color( Gdk::RGBA("#8d99ae"));
	pSeparators[5]-> override_background_color( Gdk::RGBA("#8d99ae"));
	pSeparators[6]-> override_background_color( Gdk::RGBA("#8d99ae"));
	

//	create handler and set game name and player name to handler
	m_refGlade->get_widget("gameNameEntry", pGameNameEnt);
	m_refGlade->get_widget("playerFirstNameEntry", pPlayerFirstNameEnt);
	m_refGlade->get_widget("playerSecondNameEntry", pPlayerSecondNameEnt);

	handler = new Handler ( pGameNameEnt->get_text(), pPlayerFirstNameEnt->get_text(), pPlayerSecondNameEnt->get_text());


//	setup scoreboard
	m_refGlade-> get_widget( "firstPLNameScoreLabel", pFirstPLNameScoreLabel);
	m_refGlade-> get_widget( "secondPLNameScoreLabel", pSecondPLNameScoreLabel);
	m_refGlade-> get_widget( "firstPLNameNegativScoreLabel", pFirstPLNameNegativScoreLabel);
	m_refGlade-> get_widget( "secondPLNameNegativScoreLabel", pSecondPLNameNegativScoreLabel);
	m_refGlade-> get_widget( "scoreFirstPL", pScoreFirstPL);
	m_refGlade-> get_widget( "negativScoreFirstPL", pNegativScoreFirstPL);
	m_refGlade-> get_widget( "scoreSecondPL", pScoreSecondPL);
	m_refGlade-> get_widget( "negativScoreSecondPL", pNegativScoreSecondPL);

	std::string str = "امتیاز ";
	str += (handler-> get_playerFirstName());
	str += ":";
	pFirstPLNameScoreLabel-> set_label(str);
	pScoreFirstPL-> set_label("0");
	
	str = "امتیاز منفی ";
	str += handler-> get_playerFirstName();
	str += ":";
	pFirstPLNameNegativScoreLabel-> set_label(str);
	pNegativScoreFirstPL-> set_label("0");

	str = "امتیاز ";
	str += handler-> get_playerSecondName();
	str += ":";
	pSecondPLNameScoreLabel-> set_label(str);
	pScoreSecondPL-> set_label("0");

	str = "امتیاز منفی ";
	str += handler-> get_playerSecondName();
	str += ":";
	pSecondPLNameNegativScoreLabel-> set_label(str);
	pNegativScoreSecondPL-> set_label("0");


//	set game name on page Stack2
	pGameNameLabel->set_label(handler->get_gameName());


//	Show the startGame Page	
	set_visible_child("game_page", Gtk::STACK_TRANSITION_TYPE_NONE);
	
//	set positions of pieces
	//	initial white pieces location
	int count = 0;
	for( size_t i = 0; i <= 1; i++){
		for( size_t j = 0; j <= 7; j++){
			positionOfPieces[ nameOfPieces[ count]] = generateLocationOfChessBoard( j, i);
			count ++;
		}
	}
	//	initial black pieces location
	for( size_t i = 7; i >= 6; i--){
		for( size_t j = 0; j <= 7; j++){
			positionOfPieces[ nameOfPieces[ count]] = generateLocationOfChessBoard( j, i);
			count++;
		}
	}


//	set positions of blankSquars
	count = 1;
	for( int i = 2; i <= 5; i++){
		for( int j = 0; j <= 7; j++){
			positionOfBlankSquars[ count] = generateLocationOfChessBoard( j, i);
			count++;
		}
	}
	for(int i = 33; i <= 64; i++){
		positionOfBlankSquars[i] = "null";
	}

	
//	Place the pieces in the original position
	for( int i = 0; i <= 31; i++){
		if( pieces[ i]-> get_parent()){ // if chessman is exist on board then remove it
			pBoardGame-> remove( *( pieces[ i]));
		}
	}
	for( int i = 0; i <= 31; i++){ //	initial chessman on original locations
		pBoardGame-> attach( *( pieces[ i]), positionExtraction( positionOfPieces[ nameOfPieces[ i]]) .first, positionExtraction( positionOfPieces[ nameOfPieces[ i]]) .second );
	}


//	Place the blank squars in the original position
	for( size_t i = 1; i <= 64; i++){
		if(blankSquars[i]-> get_parent()){ // if widget is exist on grid then remove it
			pBoardGame-> remove( *( blankSquars[ i]));
		}
	}
	for( size_t i = 1; i <= 32; i++){
		pBoardGame-> attach( *( blankSquars[i]), positionExtraction( positionOfBlankSquars[ i]).first, positionExtraction( positionOfBlankSquars[ i]).second);
	}


	pieces[0]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_0_drag_data_get));
	pieces[1]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_1_drag_data_get));
	pieces[2]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_2_drag_data_get));
	pieces[3]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_3_drag_data_get));
	pieces[4]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_4_drag_data_get));
	pieces[5]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_5_drag_data_get));
	pieces[6]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_6_drag_data_get));
	pieces[7]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_7_drag_data_get));
	pieces[8]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_8_drag_data_get));
	pieces[9]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_9_drag_data_get));
	pieces[10]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_10_drag_data_get));
	pieces[11]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_11_drag_data_get));
	pieces[12]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_12_drag_data_get));
	pieces[13]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_13_drag_data_get));
	pieces[14]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_14_drag_data_get));
	pieces[15]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_15_drag_data_get));
	pieces[16]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_16_drag_data_get));
	pieces[17]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_17_drag_data_get));
	pieces[18]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_18_drag_data_get));
	pieces[19]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_19_drag_data_get));
	pieces[20]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_20_drag_data_get));
	pieces[21]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_21_drag_data_get));
	pieces[22]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_22_drag_data_get));
	pieces[23]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_23_drag_data_get));
	pieces[24]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_24_drag_data_get));
	pieces[25]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_25_drag_data_get));
	pieces[26]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_26_drag_data_get));
	pieces[27]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_27_drag_data_get));
	pieces[28]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_28_drag_data_get));
	pieces[29]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_29_drag_data_get));
	pieces[30]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_30_drag_data_get));
	pieces[31]-> signal_drag_data_get() .connect( sigc::mem_fun( *this, &StackPage::on_31_drag_data_get));
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

	pieces[0]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_0p_drag_data_received));
	pieces[1]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_1p_drag_data_received));
	pieces[2]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_2p_drag_data_received));
	pieces[3]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_3p_drag_data_received));
	pieces[4]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_4p_drag_data_received));
	pieces[5]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_5p_drag_data_received));
	pieces[6]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_6p_drag_data_received));
	pieces[7]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_7p_drag_data_received));
	pieces[8]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_8p_drag_data_received));
	pieces[9]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_9p_drag_data_received));
	pieces[10]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_10p_drag_data_received));
	pieces[11]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_11p_drag_data_received));
	pieces[12]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_12p_drag_data_received));
	pieces[13]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_13p_drag_data_received));
	pieces[14]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_14p_drag_data_received));
	pieces[15]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_15p_drag_data_received));
	pieces[16]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_16p_drag_data_received));
	pieces[17]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_17p_drag_data_received));
	pieces[18]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_18p_drag_data_received));
	pieces[19]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_19p_drag_data_received));
	pieces[20]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_20p_drag_data_received));
	pieces[21]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_21p_drag_data_received));
	pieces[22]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_22p_drag_data_received));
	pieces[23]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_23p_drag_data_received));
	pieces[24]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_24p_drag_data_received));
	pieces[25]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_25p_drag_data_received));
	pieces[26]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_26p_drag_data_received));
	pieces[27]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_27p_drag_data_received));
	pieces[28]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_28p_drag_data_received));
	pieces[29]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_29p_drag_data_received));
	pieces[30]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_30p_drag_data_received));
	pieces[31]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_31p_drag_data_received));


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
	char chessman = piece[1];
	chessman -= 32;//	captalize
	std::string moveCode; //create move string code
	moveCode += chessman;
	moveCode += cellOrigin;
	moveCode += cellDestination;

	std::cout << "move code : " << moveCode << std::endl;
	if( cellIsEmpty( positionOfPieces, cellDestination) == -1){
			Gtk::MessageDialog dialog( "دست به مهره!!", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_CLOSE);
			std::string message = "شما مهره ";
			message += chessman;
			message += " را برداشتید ولی هیچ حرکتی انجام ندادید و برای اولین بار در این نوبت امتیاز منفی کسب میکنید.";
			dialog. set_secondary_text( message);
			dialog. run();

			return false;
	}
	if( chessboard.verifyMove( moveCode)){
		
		std::cout << "chessboard verifyMove = true" << std::endl;
		chessboard.Move( positionExtraction( cellOrigin), positionExtraction( cellDestination));

		if(cellIsEmpty( positionOfPieces, cellDestination) == 0){
			std::cout << "motion attack = " << piece << " from " << cellOrigin << " to " << pieceNameByPosition( positionOfPieces, cellDestination) << " on "<< cellDestination << std::endl;
			return true;
		}
		if( cellIsEmpty( positionOfPieces, cellDestination) == 1){
			std::cout << "motion = " << piece << " from " <<  cellOrigin << " to " << cellDestination << std::endl;
			return true;
		}
	}
	else{
		std::cout << "chessboard verifyMove = false" << std::endl;
			Gtk::MessageDialog dialog( "Motion warning!", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_CLOSE);
			std::string message = "Move " + moveCode[0] + std::string(" from ") + cellOrigin + " to " + cellDestination + " are invalid!";
			dialog. set_secondary_text( message);
			dialog. run();

			return false;
	}
}

void StackPage::reloadBtnStack2_clicked(){

	std::cout << "\npositionOfPieces :" << std::endl;
	std::cout << "\twrl\t" << positionOfPieces["wrl"] << std::endl <<
	"\twbl\t" << positionOfPieces["wbl"]  << std::endl <<
	"\twnl\t" << positionOfPieces["wnl"]  << std::endl <<
	"\twq\t" << positionOfPieces["wq"]  << std::endl <<
	"\twk\t" << positionOfPieces["wk"]  << std::endl <<
	"\twnr\t" << positionOfPieces["wnr"]  << std::endl <<
	"\twbr\t" << positionOfPieces["wbr"]  << std::endl <<
	"\twrr\t" << positionOfPieces["wrr"]  << std::endl <<
	"\twp1\t" << positionOfPieces["wp1"]  << std::endl <<
	"\twp2\t" << positionOfPieces["wp2"]  << std::endl <<
	"\twp3\t" << positionOfPieces["wp3"]  << std::endl <<
	"\twp4\t" << positionOfPieces["wp4"]  << std::endl <<
	"\twp5\t" << positionOfPieces["wp5"]  << std::endl <<
	"\twp6\t" << positionOfPieces["wp6"]  << std::endl <<
	"\twp7\t" << positionOfPieces["wp7"]  << std::endl <<
	"\twp8\t" << positionOfPieces["wp8"]  << std::endl <<
	"\tbrl\t" << positionOfPieces["brl"]  << std::endl <<
	"\tbbl\t" << positionOfPieces["bbl"]  << std::endl <<
	"\tbnl\t" << positionOfPieces["bnl"]  << std::endl <<
	"\tbq\t" << positionOfPieces["bq"]  << std::endl <<
	"\tbk\t" << positionOfPieces["bk"]  << std::endl <<
	"\tbnr\t" << positionOfPieces["bnr"]  << std::endl <<
	"\tbbr\t" << positionOfPieces["bbr"]  << std::endl <<
	"\tbrr\t" << positionOfPieces["brr"]  << std::endl <<
	"\tbp1\t" << positionOfPieces["bp1"]  << std::endl <<
	"\tbp2\t" << positionOfPieces["bp2"]  << std::endl <<
	"\tbp3\t" << positionOfPieces["bp3"]  << std::endl <<
	"\tbp4\t" << positionOfPieces["bp4"]  << std::endl <<
	"\tbp5\t" << positionOfPieces["bp5"]  << std::endl <<
	"\tbp6\t" << positionOfPieces["bp6"]  << std::endl <<
	"\tbp7\t" << positionOfPieces["bp7"]  << std::endl <<
	"\tbp8\t" << positionOfPieces["bp8"]  << std::endl;

	std::cout << "positionOfBlankSquars :" << std::endl;
	for( int i = 1; i < 64; i++){
		std::cout << "\t" << i << "\t" << positionOfBlankSquars[i] << std::endl;
	}

}
