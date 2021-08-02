#include <iostream>
#include <string>

class Handler{
	public:
		Handler(std::string, std::string, std::string);
		void set_gameName(std::string);
		void set_playerFirstName(std::string);
		void set_playerSecondName(std::string);
		std::string get_gameName();
		std::string get_playerFirstName();
		std::string get_playerSecondName();
		virtual ~Handler();
	private:
		std::string playerFirstName;
		std::string playerSecondName;
		std::string gameName;
};
