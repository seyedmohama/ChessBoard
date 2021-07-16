#ifndef INC_STACKPAGE
#define INC_STACKPAGE

#include <gtkmm/stack.h>
#include <gtkmm/button.h>
#include <gtkmm/builder.h>

class StackPage : public Gtk::Stack{
	public:
		StackPage(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
		virtual ~StackPage();
	private:
		Gtk::Button *pGameBtn, *pExitBtn, *pSettingBtn;
		Glib::RefPtr<Gtk::Builder> m_refGlade;

};
#endif
