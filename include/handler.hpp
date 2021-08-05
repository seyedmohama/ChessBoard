#include <iostream>
#include <string>

class Handler{
	public:
		enum class Color { White, Black};
		Handler(std::string, std::string, std::string);
		void set_gameName(std::string);
		void set_playerFirstName(std::string);
		void set_playerSecondName(std::string);
		void firstPlayerAppendScore(size_t);
		void firstPlayerAppendNegativScore(size_t);
		void secondPlayerAppendScore(size_t);
		void secondPlayerAppendNegativScore(size_t);
		std::string get_gameName();
		std::string get_playerFirstName();
		std::string get_playerSecondName();
		void changeRound();
		std::string get_round();
		virtual ~Handler();
	private:
		std::string playerFirstName;
		std::string playerSecondName;
		std::string gameName;
		int firstPlayerScore;
		int secondPlayerScore;
		int firstPlayerNegativScore;
		int secondPlayerNegativScore;
		Color round;
};
