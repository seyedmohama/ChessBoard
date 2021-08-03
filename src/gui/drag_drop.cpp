#include "StackPage.hpp"
#include "utility.hpp"
#include <iostream>
#include <string>

void StackPage::on_0_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wrl";
	pointerPiece = pieces[0];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_1_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wbl";
	pointerPiece = pieces[1];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_2_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wnl";
	pointerPiece = pieces[2];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_3_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wq";
	pointerPiece = pieces[3];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_4_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wk";
	pointerPiece = pieces[4];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_5_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wnr";
	pointerPiece = pieces[5];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_6_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wbr";
	pointerPiece = pieces[6];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_7_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wrr";
	pointerPiece = pieces[7];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_8_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp1";
	pointerPiece = pieces[8];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_9_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp2";
	pointerPiece = pieces[9];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_10_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp3";
	pointerPiece = pieces[10];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_11_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp4";
	pointerPiece = pieces[11];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_12_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp5";
	pointerPiece = pieces[12];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_13_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp6";
	pointerPiece = pieces[13];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_14_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp7";
	pointerPiece = pieces[14];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_15_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wp8";
	pointerPiece = pieces[15];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_16_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "brl";
	pointerPiece = pieces[16];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_17_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bbl";
	pointerPiece = pieces[17];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_18_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bnl";
	pointerPiece = pieces[18];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_19_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bq";
	pointerPiece = pieces[19];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_20_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bk";
	pointerPiece = pieces[20];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_21_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bnr";
	pointerPiece = pieces[21];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_22_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bbr";
	pointerPiece = pieces[22];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_23_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "brr";
	pointerPiece = pieces[23];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_24_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp1";
	pointerPiece = pieces[24];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_25_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp2";
	pointerPiece = pieces[25];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_26_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp3";
	pointerPiece = pieces[26];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_27_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp4";
	pointerPiece = pieces[27];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_28_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp5";
	pointerPiece = pieces[28];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_29_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp6";
	pointerPiece = pieces[29];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_30_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp7";
	pointerPiece = pieces[30];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}
void StackPage::on_31_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "bp8";
	pointerPiece = pieces[31];
	cellOrigin = positionOfPieces[piece];

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}

void StackPage::on_1s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 1;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_2s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 2;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_3s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 3;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_4s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 4;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_5s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 5;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_6s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 6;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_7s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 7;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_8s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 8;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_9s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 9;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_10s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 10;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_11s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 11;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_12s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 12;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_13s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 13;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_14s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 14;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_15s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 15;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_16s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 16;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_17s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 17;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_18s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 18;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_19s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 19;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_20s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 20;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_21s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 21;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_22s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 22;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_23s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 23;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_24s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 24;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_25s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 25;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_26s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 26;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_27s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 27;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_28s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 28;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_29s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 29;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_30s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 30;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_31s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 31;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_32s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 32;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_33s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 33;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_34s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 34;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_35s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 35;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_36s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 36;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_37s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 37;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_38s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 38;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_39s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 39;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_40s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 40;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_41s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 41;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_42s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 42;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_43s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 43;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_44s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 44;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_45s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 45;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_46s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 46;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_47s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 47;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_48s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 48;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_49s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 49;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_50s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 50;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_51s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 51;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_52s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 52;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_53s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 53;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_54s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 54;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_55s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 55;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_56s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 56;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_57s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 57;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_58s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 58;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_59s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 59;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_60s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 60;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_61s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 61;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_62s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 62;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_63s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 63;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
void StackPage::on_64s_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	int i = 64;
	cellDestination = positionOfBlankSquars[i];
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(blankSquars[i]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfBlankSquars[i]).first, positionExtraction(positionOfBlankSquars[i]).second);
		pBoardGame->attach(*(blankSquars[i]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfBlankSquars[i] = positionOfPieces[piece];
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}



void StackPage::on_0p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wrl";
	int i = 0;
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

void StackPage::on_1p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wbl";
	int i = 1;
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

void StackPage::on_2p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wnl";
	int i = 2;
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

void StackPage::on_3p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wq";
	int i = 3;
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

void StackPage::on_4p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wk";
	int i = 4;
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

void StackPage::on_5p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wnr";
	int i = 5;
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

void StackPage::on_6p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wbr";
	int i = 6;
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

void StackPage::on_7p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wrr";
	int i = 7;
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

void StackPage::on_8p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp1";
	int i = 8;
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

void StackPage::on_9p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp2";
	int i = 9;
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

void StackPage::on_10p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp3";
	int i = 10;
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

void StackPage::on_11p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp4";
	int i = 11;
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

void StackPage::on_12p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp5";
	int i = 12;
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

void StackPage::on_13p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp6";
	int i = 13;
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

void StackPage::on_14p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp7";
	int i = 14;
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

void StackPage::on_15p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "wp8";
	int i = 15;
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

void StackPage::on_16p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "brl";
	int i = 16;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_17p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bbl";
	int i = 17;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_18p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bnl";
	int i = 18;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_19p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bq";
	int i = 19;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_20p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bk";
	int i = 20;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_21p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bnr";
	int i = 21;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_22p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bbr";
	int i = 22;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_23p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "brr";
	int i = 23;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_24p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp1";
	int i = 24;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_25p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp2";
	int i = 25;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_26p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp3";
	int i = 26;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_27p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp4";
	int i = 27;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_28p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp5";
	int i = 28;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_29p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp6";
	int i = 29;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_30p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp7";
	int i = 30;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){

		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));
	
//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;	pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}

void StackPage::on_31p_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	std::string pieceNameDest = "bp8";
	int i = 31;
	cellDestination = positionOfPieces[pieceNameDest];
	if(motionVerification()){
		
		numberNewBlankSquars++;
		positionOfBlankSquars[numberNewBlankSquars + 32] = positionOfPieces[piece];

		pBoardGame->remove(*pointerPiece);
		pBoardGame->remove(*(pieces[i]));

//	move piece to removed pices list
		Gtk::Widget * pWidget = pRemovedPiecesGrid-> get_child_at( numberBlackPiecesRemoved, 2);
		pRemovedPiecesGrid-> remove( *pWidget);

		m_refGlade-> get_widget( nameOfPieces[ i], pImageTemp);
		pRemovedPiecesGrid-> attach( *pImageTemp, numberBlackPiecesRemoved, 2);
		numberBlackPiecesRemoved++;

		pBoardGame->remove(*(blankSquars[numberNewBlankSquars]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(positionOfPieces[pieceNameDest]).first, positionExtraction(positionOfPieces[pieceNameDest]).second);

		pBoardGame->attach(*(blankSquars[numberNewBlankSquars + 32]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);

		positionOfPieces[pieceNameDest] = "removed";
		positionOfPieces[piece] = cellDestination;
	}
	context->drag_finish(false, false, time);
}
