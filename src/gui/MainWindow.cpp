#include "MainWindow.hpp"

MainWindow::MainWindow(BaseObjectType* cobject , const Glib::RefPtr<Gtk::Builder>& refGlade) :
Gtk::Window(cobject),
m_refGlade(refGlade),
pStackPage(nullptr),
pExitBtn(nullptr),
pGameBtn(nullptr){
  m_refGlade->get_widget_derived("StackID", pStackPage);
  m_refGlade->get_widget("exitBtnPage0", pExitBtn);
	m_refGlade->get_widget("gameBtnPage0", pGameBtn);

	if(pGameBtn){
		pGameBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &MainWindow::set_size_request), 800, 200));
	}
  if(pExitBtn){
    pExitBtn->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::hide));
  }
}

MainWindow::~MainWindow(){

}

