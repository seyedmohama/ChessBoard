#include "StackPage.hpp"
#include "handler.hpp"
#include "utility.hpp"
#include <iostream>
#include <string>

void StackPage::on_ip_drag_data_recieved( int i, const Glib::RefPtr<Gdk::DragContext>& context, guint time){
	std::string pieceNameDest = nameOfPieces[i];
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
		
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberWhitePiecesRemoved, 0);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberWhitePiecesRemoved, 0);
		numberWhitePiecesRemoved++;

pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_is_drag_data_recieved(int i, const Glib::RefPtr<Gdk::DragContext>& context, guint time){
	cellDestination = positionOfBlankSquars[i];
	std::cout << "cell destination : " << cellDestination << std::endl;
	if(motionVerification()){
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));
		
		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}

	handler->changeRound();

	context->drag_finish(false, false, time);
}

void StackPage::on_i_drag_data_get( int i, Gtk::SelectionData& selection_data){
	piece = nameOfPieces[i];
	pointerPiece = pieces[i];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
	std::cout << "drag data get" << std::endl;
}
void StackPage::on_0_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 0, selection_data);
}
void StackPage::on_1_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 1, selection_data);
}
void StackPage::on_2_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 2, selection_data);
}
void StackPage::on_3_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 3, selection_data);
}
void StackPage::on_4_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 4, selection_data);
}
void StackPage::on_5_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 5, selection_data);
}
void StackPage::on_6_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 6, selection_data);
}
void StackPage::on_7_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 7, selection_data);
}
void StackPage::on_8_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 8, selection_data);
}
void StackPage::on_9_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 9, selection_data);
}
void StackPage::on_10_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 10, selection_data);
}
void StackPage::on_11_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 11, selection_data);
}
void StackPage::on_12_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 12, selection_data);
}
void StackPage::on_13_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 13, selection_data);
}
void StackPage::on_14_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 14, selection_data);
}
void StackPage::on_15_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 15, selection_data);
}
void StackPage::on_16_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 16, selection_data);
}
void StackPage::on_17_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 17, selection_data);
}
void StackPage::on_18_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 18, selection_data);
}
void StackPage::on_19_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 19, selection_data);
}
void StackPage::on_20_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 20, selection_data);
}
void StackPage::on_21_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 21, selection_data);
}
void StackPage::on_22_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 22, selection_data);
}
void StackPage::on_23_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 23, selection_data);
}
void StackPage::on_24_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 24, selection_data);
}
void StackPage::on_25_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 25, selection_data);
}
void StackPage::on_26_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 26, selection_data);
}
void StackPage::on_27_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 27, selection_data);
}
void StackPage::on_28_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 28, selection_data);
}
void StackPage::on_29_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 29, selection_data);
}
void StackPage::on_30_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 30, selection_data);
}
void StackPage::on_31_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	on_i_drag_data_get( 31, selection_data);
}

void StackPage::on_1s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(1, context, time);
}
void StackPage::on_2s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(2, context, time);
}
void StackPage::on_3s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(3, context, time);
}
void StackPage::on_4s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(4, context, time);
}
void StackPage::on_5s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(5, context, time);
}
void StackPage::on_6s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(6, context, time);
}
void StackPage::on_7s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(7, context, time);
}
void StackPage::on_8s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(8, context, time);
}
void StackPage::on_9s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(9, context, time);
}
void StackPage::on_10s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(10, context, time);
}
void StackPage::on_11s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(11, context, time);
}
void StackPage::on_12s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(12, context, time);
}
void StackPage::on_13s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(13, context, time);
}
void StackPage::on_14s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(14, context, time);
}
void StackPage::on_15s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(15, context, time);
}
void StackPage::on_16s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(16, context, time);
}
void StackPage::on_17s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(17, context, time);
}
void StackPage::on_18s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(18, context, time);
}
void StackPage::on_19s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(19, context, time);
}
void StackPage::on_20s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(20, context, time);
}
void StackPage::on_21s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(21, context, time);
}
void StackPage::on_22s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(22, context, time);
}
void StackPage::on_23s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(23, context, time);
}
void StackPage::on_24s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(24, context, time);
}
void StackPage::on_25s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(25, context, time);
}
void StackPage::on_26s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(26, context, time);
}
void StackPage::on_27s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(27, context, time);
}
void StackPage::on_28s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(28, context, time);
}
void StackPage::on_29s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(29, context, time);
}
void StackPage::on_30s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(30, context, time);
}
void StackPage::on_31s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(31, context, time);
}
void StackPage::on_32s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(32, context, time);
}
void StackPage::on_33s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(33, context, time);
}
void StackPage::on_34s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(34, context, time);
}
void StackPage::on_35s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(35, context, time);
}
void StackPage::on_36s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(36, context, time);
}
void StackPage::on_37s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(37, context, time);
}
void StackPage::on_38s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(38, context, time);
}
void StackPage::on_39s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(39, context, time);
}
void StackPage::on_40s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(40, context, time);
}
void StackPage::on_41s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(41, context, time);
}
void StackPage::on_42s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(42, context, time);
}
void StackPage::on_43s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(43, context, time);
}
void StackPage::on_44s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(44, context, time);
}
void StackPage::on_45s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(45, context, time);
}
void StackPage::on_46s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(46, context, time);
}
void StackPage::on_47s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(47, context, time);
}
void StackPage::on_48s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(48, context, time);
}
void StackPage::on_49s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(49, context, time);
}
void StackPage::on_50s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(50, context, time);
}
void StackPage::on_51s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(51, context, time);
}
void StackPage::on_52s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(52, context, time);
}
void StackPage::on_53s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(53, context, time);
}
void StackPage::on_54s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(54, context, time);
}
void StackPage::on_55s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(55, context, time);
}
void StackPage::on_56s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(56, context, time);
}
void StackPage::on_57s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(57, context, time);
}
void StackPage::on_58s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(58, context, time);
}
void StackPage::on_59s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(59, context, time);
}
void StackPage::on_60s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(60, context, time);
}
void StackPage::on_61s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(61, context, time);
}
void StackPage::on_62s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(62, context, time);
}
void StackPage::on_63s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(63, context, time);
}
void StackPage::on_64s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_is_drag_data_recieved(64, context, time);
}


void StackPage::on_0p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 0, context, time);
}
void StackPage::on_1p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 1, context, time);
}
void StackPage::on_2p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 2, context, time);
}
void StackPage::on_3p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 3, context, time);
}
void StackPage::on_4p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 4, context, time);
}
void StackPage::on_5p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 5, context, time);
}
void StackPage::on_6p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 6, context, time);
}
void StackPage::on_7p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 7, context, time);
}
void StackPage::on_8p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 8, context, time);
}
void StackPage::on_9p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 9, context, time);
}
void StackPage::on_10p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 10, context, time);
}
void StackPage::on_11p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 11, context, time);
}
void StackPage::on_12p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 12, context, time);
}
void StackPage::on_13p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 13, context, time);
}
void StackPage::on_14p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 14, context, time);
}
void StackPage::on_15p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 15, context, time);
}
void StackPage::on_16p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 16, context, time);
}
void StackPage::on_17p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 17, context, time);
}
void StackPage::on_18p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 18, context, time);
}
void StackPage::on_19p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 19, context, time);
}
void StackPage::on_20p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 20, context, time);
}
void StackPage::on_21p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 21, context, time);
}
void StackPage::on_22p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 22, context, time);
}
void StackPage::on_23p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 23, context, time);
}
void StackPage::on_24p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 24, context, time);
}
void StackPage::on_25p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 25, context, time);
}
void StackPage::on_26p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 26, context, time);
}
void StackPage::on_27p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 27, context, time);
}
void StackPage::on_28p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 28, context, time);
}
void StackPage::on_29p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 29, context, time);
}
void StackPage::on_30p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 30, context, time);
}
void StackPage::on_31p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	on_ip_drag_data_recieved( 31, context, time);
}
