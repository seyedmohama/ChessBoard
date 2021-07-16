#include "StackPage.hpp"

StackPage::StackPage(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder>& refGlade) :
Gtk::Stack(cobject),
pGameBtn(nullptr),
pExitBtn(nullptr),
pSettingBtn(nullptr),
m_refGlade(refGlade){
  m_refGlade->get_widget("gameBtnPage0", pGameBtn);
  m_refGlade->get_widget("settingBtnPage0", pSettingBtn);

  pGameBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &StackPage::set_visible_child), "start_game_page", Gtk::STACK_TRANSITION_TYPE_NONE));
  //pSettingBtn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &StackPage::set_visible_child), "start_game_page", Gtk::STACK_TRANSITION_TYPE_NONE));
}

StackPage::~StackPage(){
}

