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
pScoreFirstPL(nullptr),
pNegativScoreFirstPL(nullptr),
pScoreSecondPL(nullptr),
pNegativScoreSecondPL(nullptr),
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
	m_refGlade-> get_widget( "dialogConvertPawn", pDialogConvertPawn);
	m_refGlade-> get_widget( "dialogQueenBtn", pQueenBtnDialogConvertPawn);
	m_refGlade-> get_widget( "dialogKnightBtn", pKnightBtnDialogConvertPawn);
	m_refGlade-> get_widget( "dialogBishopBtn", pBishopBtnDialogConvertPawn);
	m_refGlade-> get_widget( "dialogRookBtn", pRookBtnDialogConvertPawn);
	m_refGlade-> get_widget( "doualMoveBtn", pDoualMoveBtn);
	m_refGlade-> get_widget( "undoBtn", pUndoBtn);

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

	handler = new Handler ( pGameNameEnt->get_text(), pPlayerFirstNameEnt->get_text(), pPlayerSecondNameEnt->get_text(), this);


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
	str += (handler-> player1.Name);
	str += ":";
	pFirstPLNameScoreLabel-> set_label(str);
	pScoreFirstPL-> set_label( std::to_string( handler-> player1.Score));
	
	str = "امتیاز منفی ";
	str += handler-> player1.Name;
	str += ":";
	pFirstPLNameNegativScoreLabel-> set_label(str);
	pNegativScoreFirstPL-> set_label( std::to_string( handler-> player1.NegativScore));

	str = "امتیاز ";
	str += handler-> player2.Name;
	str += ":";
	pSecondPLNameScoreLabel-> set_label(str);
	pScoreSecondPL-> set_label( std::to_string( handler-> player2.Score));

	str = "امتیاز منفی ";
	str += handler-> player2.Name;
	str += ":";
	pSecondPLNameNegativScoreLabel-> set_label(str);
	pNegativScoreSecondPL-> set_label( std::to_string( handler-> player2.NegativScore));


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
		pBoardGame-> attach( *( pieces[ i]), gridPositionExtraction( positionOfPieces[ nameOfPieces[ i]]) .first, gridPositionExtraction( positionOfPieces[ nameOfPieces[ i]]) .second );
	}


//	Place the blank squars in the original position
	for( size_t i = 1; i <= 64; i++){
		if(blankSquars[i]-> get_parent()){ // if widget is exist on grid then remove it
			pBoardGame-> remove( *( blankSquars[ i]));
		}
	}
	for( size_t i = 1; i <= 32; i++){
		pBoardGame-> attach( *( blankSquars[i]), gridPositionExtraction( positionOfBlankSquars[ i]).first, gridPositionExtraction( positionOfBlankSquars[ i]).second);
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
	blankSquars[1]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_1_cell_drag_data_received));
	blankSquars[2]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_2_cell_drag_data_received));
	blankSquars[3]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_3_cell_drag_data_received));
	blankSquars[4]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_4_cell_drag_data_received));
	blankSquars[5]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_5_cell_drag_data_received));
	blankSquars[6]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_6_cell_drag_data_received));
	blankSquars[7]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_7_cell_drag_data_received));
	blankSquars[8]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_8_cell_drag_data_received));
	blankSquars[9]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_9_cell_drag_data_received));
	blankSquars[10]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_10_cell_drag_data_received));
	blankSquars[11]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_11_cell_drag_data_received));
	blankSquars[12]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_12_cell_drag_data_received));
	blankSquars[13]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_13_cell_drag_data_received));
	blankSquars[14]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_14_cell_drag_data_received));
	blankSquars[15]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_15_cell_drag_data_received));
	blankSquars[16]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_16_cell_drag_data_received));
	blankSquars[17]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_17_cell_drag_data_received));
	blankSquars[18]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_18_cell_drag_data_received));
	blankSquars[19]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_19_cell_drag_data_received));
	blankSquars[20]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_20_cell_drag_data_received));
	blankSquars[21]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_21_cell_drag_data_received));
	blankSquars[22]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_22_cell_drag_data_received));
	blankSquars[23]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_23_cell_drag_data_received));
	blankSquars[24]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_24_cell_drag_data_received));
	blankSquars[25]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_25_cell_drag_data_received));
	blankSquars[26]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_26_cell_drag_data_received));
	blankSquars[27]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_27_cell_drag_data_received));
	blankSquars[28]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_28_cell_drag_data_received));
	blankSquars[29]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_29_cell_drag_data_received));
	blankSquars[30]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_30_cell_drag_data_received));
	blankSquars[31]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_31_cell_drag_data_received));
	blankSquars[32]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_32_cell_drag_data_received));
	blankSquars[33]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_33_cell_drag_data_received));
	blankSquars[34]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_34_cell_drag_data_received));
	blankSquars[35]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_35_cell_drag_data_received));
	blankSquars[36]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_36_cell_drag_data_received));
	blankSquars[37]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_37_cell_drag_data_received));
	blankSquars[38]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_38_cell_drag_data_received));
	blankSquars[39]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_39_cell_drag_data_received));
	blankSquars[40]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_40_cell_drag_data_received));
	blankSquars[41]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_41_cell_drag_data_received));
	blankSquars[42]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_42_cell_drag_data_received));
	blankSquars[43]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_43_cell_drag_data_received));
	blankSquars[44]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_44_cell_drag_data_received));
	blankSquars[45]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_45_cell_drag_data_received));
	blankSquars[46]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_46_cell_drag_data_received));
	blankSquars[47]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_47_cell_drag_data_received));
	blankSquars[48]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_48_cell_drag_data_received));
	blankSquars[49]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_49_cell_drag_data_received));
	blankSquars[50]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_50_cell_drag_data_received));
	blankSquars[51]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_51_cell_drag_data_received));
	blankSquars[52]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_52_cell_drag_data_received));
	blankSquars[53]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_53_cell_drag_data_received));
	blankSquars[54]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_54_cell_drag_data_received));
	blankSquars[55]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_55_cell_drag_data_received));
	blankSquars[56]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_56_cell_drag_data_received));
	blankSquars[57]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_57_cell_drag_data_received));
	blankSquars[58]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_58_cell_drag_data_received));
	blankSquars[59]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_59_cell_drag_data_received));
	blankSquars[60]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_60_cell_drag_data_received));
	blankSquars[61]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_61_cell_drag_data_received));
	blankSquars[62]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_62_cell_drag_data_received));
	blankSquars[63]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_63_cell_drag_data_received));
	blankSquars[64]-> signal_drag_data_received().connect( sigc::mem_fun( *this, &StackPage::on_64_cell_drag_data_received));

	pieces[0]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_0_chessman_drag_data_received));
	pieces[1]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_1_chessman_drag_data_received));
	pieces[2]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_2_chessman_drag_data_received));
	pieces[3]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_3_chessman_drag_data_received));
	pieces[4]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_4_chessman_drag_data_received));
	pieces[5]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_5_chessman_drag_data_received));
	pieces[6]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_6_chessman_drag_data_received));
	pieces[7]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_7_chessman_drag_data_received));
	pieces[8]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_8_chessman_drag_data_received));
	pieces[9]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_9_chessman_drag_data_received));
	pieces[10]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_10_chessman_drag_data_received));
	pieces[11]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_11_chessman_drag_data_received));
	pieces[12]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_12_chessman_drag_data_received));
	pieces[13]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_13_chessman_drag_data_received));
	pieces[14]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_14_chessman_drag_data_received));
	pieces[15]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_15_chessman_drag_data_received));
	pieces[16]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_16_chessman_drag_data_received));
	pieces[17]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_17_chessman_drag_data_received));
	pieces[18]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_18_chessman_drag_data_received));
	pieces[19]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_19_chessman_drag_data_received));
	pieces[20]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_20_chessman_drag_data_received));
	pieces[21]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_21_chessman_drag_data_received));
	pieces[22]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_22_chessman_drag_data_received));
	pieces[23]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_23_chessman_drag_data_received));
	pieces[24]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_24_chessman_drag_data_received));
	pieces[25]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_25_chessman_drag_data_received));
	pieces[26]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_26_chessman_drag_data_received));
	pieces[27]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_27_chessman_drag_data_received));
	pieces[28]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_28_chessman_drag_data_received));
	pieces[29]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_29_chessman_drag_data_received));
	pieces[30]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_30_chessman_drag_data_received));
	pieces[31]-> signal_drag_data_received() .connect( sigc::mem_fun( *this, &StackPage::on_31_chessman_drag_data_received));

//	doual move button get signal and set handler
	pDoualMoveBtn-> signal_clicked() .connect( sigc::mem_fun( *this, &StackPage::doualMoveBtn_clicked));

//	undo btn get signal and set handler
	pUndoBtn-> signal_clicked() .connect( sigc::mem_fun( *this, &StackPage::undoBtn_clicked));

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
	moveCode = "";
	moveCode += chessman;
	moveCode += cellOrigin;
	moveCode += cellDestination;

	std::cout << "move code : " << moveCode << std::endl;

	if( cellIsEmpty( positionOfPieces, cellDestination) == -1){
			Gtk::MessageDialog dialog( "دست به مهره!!", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_CLOSE);
			std::string message = "شما مهره ";
			message += chessman;
			message += " را برداشتید ولی هیچ حرکتی انجام ندادید و برای اولین بار در این نوبت امتیاز منفی کسب میکنید.\nیکبار دیگر مهره ای را جابجا کن.";
			dialog. set_secondary_text( message);
			dialog. run();

			return false;
	}

		if( handler-> pChessboard-> verifyMove( moveCode)){

			if(cellIsEmpty( positionOfPieces, cellDestination) == 0){
				std::string move;
				move += chessman;
				move += cellOrigin;
				move += 'x';
				char temp = pieceNameByPosition(positionOfPieces, cellDestination)[1];
				temp -= 32;
				move += temp;
				move += cellDestination;
	
				listOfMoves.push_back(move);//	push to list of movements
			}
			if(cellIsEmpty( positionOfPieces, cellDestination) == 1){
				listOfMoves.push_back(moveCode);
			}
	
			if( handler-> get_round_player()-> doualMove){
				handler-> pChessboard-> Move( positionExtraction( cellOrigin), positionExtraction( cellDestination));
				handler-> changeRound();
				handler-> get_round_player()-> doualMove = false;
				return true;
			}
	
			//	attack movement scoring
			if(cellIsEmpty( positionOfPieces, cellDestination) == 0){
				handler-> pChessboard-> HitScoring( handler-> get_round_player(), positionExtraction( cellDestination));
			}

			handler-> pChessboard-> Move( positionExtraction( cellOrigin), positionExtraction( cellDestination));


	//	Scorigs
	//	امتیاز نیمه دوم سرباز
			checkPawnInFrontHalfScore( this);
	//	بررسی ایا امتیاز تهدید کاربر میگیره یا نه و ثبت ان
			handler-> pChessboard-> Threat( positionExtraction( cellDestination));

			std::cout << "Scores:\tplayer1 = " << handler-> player1.Score << "\tplayer2 = " << handler-> player2.Score << std::endl <<
									 "Negativ Scores:\tplayer1 = " << handler-> player1.NegativScore << "\tplayer2 = " << handler-> player2.NegativScore << std::endl;

	//	change round
			handler-> changeRound();
	
			if( cellIsEmpty( positionOfPieces, cellDestination) == 1){
				return true;
			}
		}
		std::cout << "chessboard verifyMove = false" << std::endl;
		Gtk::MessageDialog dialog( "Motion warning!", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_CLOSE);
		std::string message = "Move " + moveCode[0] + std::string(" from ") + cellOrigin + " to " + cellDestination + " are invalid!";
		dialog. set_secondary_text( message);
		dialog. run();

		return false;
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

void StackPage::convertPawn( std::string chessman){
  positionOfPieces.erase( positionOfPieces.find( piece));
  
	int i;
	for( i = 0; i <= 31; i++){
		if(nameOfPieces[i] == piece){
			break;
		}
	}
	std::string str = chessman;
	if(chessman[0] == 'w'){
		str += handler-> numberOfWhiteConvertPawn;
		handler-> numberOfWhiteConvertPawn++;
	}
	if(chessman[0] == 'b'){
		str += handler-> numberOfBlackConvertPawn;
		handler-> numberOfBlackConvertPawn++;
	}

	nameOfPieces[i] = str; 
  positionOfPieces[str] = cellDestination;

	pDialogConvertPawn-> close();

	m_refGlade-> get_widget( chessman, pWidget[8]);
	pieces[i]-> property_image() = pWidget[8];
}

void StackPage::doualMoveBtn_clicked(){

	Gtk::MessageDialog dialog("دو حرکت در یک نوبت.", false, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_YES_NO);
	std::string message = handler-> get_round_player()-> Name;
	message += " شما میتوانید یک حرکت دیگر انجام دهید\n و به ازای ان ۳۰ امتیاز از دست بدهید.";
	dialog.set_secondary_text( message);
	int response = dialog.run();

	switch( response){
		case 0:// Yes button clicked
			handler-> changeRound();
			handler-> get_round_player()-> NegativScore -= 30;
			handler-> get_round_player()-> doualMove = true;
			break;
		case 1:// No button clicked
			break;
	}
}

void StackPage::undoBtn_clicked(){
	handler-> changeRound();
	auto it = listOfMoves.cend();
	it--;

	if( (*it)[3] == 'x'){
		if(handler-> get_round() == PlayersColor::White){
		//	remove image chessman on buttom grid removed pieces
			removeWidgetFromGrid( pRemovedPiecesGrid, numberBlackPiecesRemoved, 2);
			

			//	add blank image to buttom grid removed pieces
			std::string str = "removedImg";
			str += std::to_string( numberBlackPiecesRemoved);
			str += '2';
			
			Gtk::Image *pImage;
			m_refGlade-> get_widget( str, pImage);
			pRemovedPiecesGrid-> attach( *pImage, numberBlackPiecesRemoved, 0);

			numberBlackPiecesRemoved--;


		//	remove chessman from destination cell and move it to origin cell
			//	remove blank image that attached to origin cell
			removeWidgetFromBoard( pBoardGame, cellOrigin);
			for(auto positionOfBlankCellIt = positionOfBlankSquars.begin(); positionOfBlankCellIt != positionOfBlankSquars.end(); positionOfBlankCellIt++){
				if((*positionOfBlankCellIt).second == cellOrigin){
					(*positionOfBlankCellIt).second = "null";
				}
			}
			numberNewBlankSquars--;

			//	remove white chessman that attacked
			removeWidgetFromBoard( pBoardGame, cellDestination);

			//	attach to origin cell
			pBoardGame-> attach( *pointerPiece, positionExtraction( cellOrigin) .first, positionExtraction( cellOrigin) .second);
			for(auto positionOfPiecesIt = positionOfPieces.begin(); positionOfPiecesIt != positionOfPieces.end(); positionOfPiecesIt++){
				if((*positionOfPiecesIt).second == cellDestination){
					(*positionOfPiecesIt).second = cellOrigin;
				}
			}

			//	attach removed black chessman to the previos cell
			str = "b";
			str += (moveCode[4] + 32);
			if(moveCode[4] != 'Q' && moveCode[4] != 'K' && moveCode[4] != 'P'){
				std::string temp = str;
				temp += 'l';
				if(positionOfPieces[temp] == "removed"){
					str += 'l';
				}
				else{
					str += 'r';
				}
			}
			else if(moveCode[4] == 'P'){
				for(int i = 1; i <= 8; i++){
					std::string temp = str;
					temp += std::to_string(i);
					if(positionOfPieces[temp] == "removed"){
						str += std::to_string(i);
					}
				}
			}
			int i;
			for (int j = 0; ; j++){
				if(nameOfPieces[j] == str){
					i = j;
				}
			}
			pBoardGame-> attach( *(pieces[i]), positionExtraction( cellDestination) .first, positionExtraction( cellDestination) .second);
			positionOfPieces[str] = cellDestination;

		}
		else if(handler-> get_round() == PlayersColor::Black){
			removeWidgetFromGrid( pRemovedPiecesGrid, numberWhitePiecesRemoved, 0);
			
			std::string str = "removedImg";
			str += std::to_string( numberWhitePiecesRemoved);
			str += '2';
			
			Gtk::Image *pImage;
			m_refGlade-> get_widget( str, pImage);
			pRemovedPiecesGrid-> attach( *pImage, numberWhitePiecesRemoved, 0);
			numberWhitePiecesRemoved--;

			removeWidgetFromBoard( pBoardGame, cellOrigin);
			for(auto positionOfBlankCellIt = positionOfBlankSquars.begin(); positionOfBlankCellIt != positionOfBlankSquars.end(); positionOfBlankCellIt++){
				if((*positionOfBlankCellIt).second == cellOrigin){
					(*positionOfBlankCellIt).second = "null";
				}
			}
			numberNewBlankSquars--;

			removeWidgetFromBoard( pBoardGame, cellDestination);

			pBoardGame-> attach( *pointerPiece, positionExtraction( cellOrigin) .first, positionExtraction( cellOrigin) .second);
			for(auto positionOfPiecesIt = positionOfPieces.begin(); positionOfPiecesIt != positionOfPieces.end(); positionOfPiecesIt++){
				if((*positionOfPiecesIt).second == cellDestination){
					(*positionOfPiecesIt).second = cellOrigin;
				}
			}

			str = "w";
			str += (moveCode[4] + 32);
			if(moveCode[4] != 'Q' && moveCode[4] != 'K' && moveCode[4] != 'P'){
				std::string temp = str;
				temp += 'l';
				if(positionOfPieces[temp] == "removed"){
					str += 'l';
				}
				else{
					str += 'r';
				}
			}
			else if(moveCode[4] == 'P'){
				for(int i = 1; i <= 8; i++){
					std::string temp = str;
					temp += std::to_string(i);
					if(positionOfPieces[temp] == "removed"){
						str += std::to_string(i);
					}
				}
			}
			int i;
			for (int j = 0; ; j++){
				if(nameOfPieces[j] == str){
					i = j;
				}
			}
			pBoardGame-> attach( *(pieces[i]), positionExtraction( cellDestination) .first, positionExtraction( cellDestination) .second);
			positionOfPieces[str] = cellDestination;

		}
	}
	else{//	if movement is not an attack move
		pBoardGame-> remove( *pointerPiece);
		for(auto positionOfBlankCellIt = positionOfBlankSquars.cbegin(); positionOfBlankCellIt != positionOfBlankSquars.cend(); positionOfBlankCellIt++){
			if((*positionOfBlankCellIt).second == cellOrigin){
				pBoardGame-> remove( *(blankSquars[ (*positionOfBlankCellIt).first]));
				pBoardGame-> attach( *(blankSquars[ (*positionOfBlankCellIt).first]), positionExtraction( cellDestination) .first, positionExtraction( cellDestination) .second);
				positionOfBlankSquars[ (*positionOfBlankCellIt).first] = cellDestination;
			}
		}

		pBoardGame-> attach( *pointerPiece, positionExtraction( cellOrigin) .first, positionExtraction( cellOrigin) .second);

		positionOfPieces[ piece] = cellOrigin;
	}

	listOfMoves.pop_back();
	
	handler-> get_round_player()-> NegativScore -= 30;
}
