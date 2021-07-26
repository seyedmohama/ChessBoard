#include "StackPage.hpp"

void StackPage::on_wrl_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection_data, guint info, guint time){
	piece = "wrl";
	pointerPiece = pWRLBtn;
	cellOrigin = positionOfPieces[piece];
	X_Position = 

	selection_data.set( selection_data.get_target(), "I'm Dataaaaa");
}

void StackPage::on_a3_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& selection_data, guint info, guint time){
	cellDestination = "a3";
	if(motionVerification()){
		
		pBoardGame->remove(*pointerPiece);
		pair = std::make_pair('a',3);
		pBoardGame->remove(*(squars[pair]));

		pBoardGame->attach(*(pointerPiece), positionExtraction(cellDestination).first, positionExtraction(cellDestination).second);
		pBoardGame->attach(*(squars[pair]), positionExtraction(positionOfPieces[piece]).first, positionExtraction(positionOfPieces[piece]).second);
	}
	context->drag_finish(false, false, time);
}

std::pair<int, int> StackPage::positionExtraction(std::string input){
	std::pair<int, int> pair;
	char ch = input[0];
	char nm = input[1];
 	ch -= 49;
	pair.first = stoi(ch);
	pair.second = (stoi(nm) - 8) * (-1);
	std::cout << pair.first << std::endl;
	std::cout << pair.second << std::endl;

	return pair;
}
