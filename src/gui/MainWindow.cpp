#include "MainWindow.hpp"

MainWindow::MainWindow(BaseObjectType* cobject , const Glib::RefPtr<Gtk::Builder>& refGlade) :
Gtk::Window(cobject),
m_refGlade(refGlade),
pStackPage(nullptr),
pExitBtn(nullptr){
  m_refGlade->get_widget_derived("StackID", pStackPage);
  m_refGlade->get_widget("exitBtnPage0", pExitBtn);

  if(pExitBtn){
    pExitBtn->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::hide));
  }
}

MainWindow::~MainWindow(){

}

