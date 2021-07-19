#include "MainWindow.hpp"

MainWindow::MainWindow(BaseObjectType* cobject , const Glib::RefPtr<Gtk::Builder>& refGlade) :
Gtk::Window(cobject),
m_refGlade(refGlade),
pStackPage(nullptr),
pExitBtn(nullptr),
pGameBtn(nullptr),
pStartGameBtn(nullptr){
  m_refGlade->get_widget_derived("StackID", pStackPage);
  m_refGlade->get_widget("exitBtnPage0", pExitBtn);
	m_refGlade->get_widget("gameBtnPage0", pGameBtn);
	m_refGlade->get_widget("startGameBtnID", pStartGameBtn);

	if(pGameBtn){
		pGameBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &MainWindow::set_size_request), 800, 200));
	}
  if(pExitBtn){
    pExitBtn->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::hide));
  }
	if(pStartGameBtn){
		pStartGameBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &MainWindow::set_size_request),1000,650));
	}
}

MainWindow::~MainWindow(){

}

