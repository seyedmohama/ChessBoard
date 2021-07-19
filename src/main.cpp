#include <iostream>
#include <gtkmm/application.h>
#include <gtkmm/cssprovider.h>
#include "MainWindow.hpp"

int main(){
  auto app = Gtk::Application::create();
	auto styleProvider = Gtk::CssProvider::create();
	auto styleContext = Gtk::StyleContext::create();
  auto builder = Gtk::Builder::create();

  builder->add_from_file("../UI.glade");

  MainWindow *mainWindow = nullptr;


  builder->get_widget_derived("mainWindow", mainWindow);

	styleProvider->load_from_resource("../res/style.css");
	Glib::RefPtr<Gdk::Screen> refScreen = mainWindow->get_screen();
	styleContext->add_provider_for_screen(refScreen, styleProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  if(mainWindow){
    app->run(*mainWindow);
  }
  delete mainWindow;

  return 0;
}
