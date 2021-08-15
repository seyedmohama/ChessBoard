#include <iostream>
#include <gtkmm/application.h>
#include "MainWindow.hpp"

int main(){
  auto app = Gtk::Application::create();
  auto builder = Gtk::Builder::create();

  builder->add_from_file("../UI.glade");

  MainWindow *mainWindow = nullptr;


  builder->get_widget_derived("mainWindow", mainWindow);

  try{
    if(mainWindow){
     app->run(*mainWindow);
    }
    delete mainWindow;
  }
  catch(...){
    mainWindow-> close();
    std::cout << "errrrrrr" << std::endl;
  }
  return 0;
}
