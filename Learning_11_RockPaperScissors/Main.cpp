#include <iostream>
#include <string>
#include <ctime>

char getPlayerChoice();
char getBotChoice();
void chooseWinner(char player, char bot);

int main()
{

	do {
		char player;
		char bot;

		std::cout << std::endl << "--------------------------------------" << std::endl << std::endl;
		std::cout << "Rock, Paper, Scissors !" << std::endl;
		player = getPlayerChoice();
		bot = getBotChoice();
		std::cout << std::endl;
		std::cout << "Your choice : " << player << std::endl;
		std::cout << "Bot choice : " << bot << std::endl;
		chooseWinner(player, bot);
	} while (true);

	std::cin.ignore();
	return 0;
}

char getPlayerChoice()
{
	std::cout << std::endl;
	char choice;
	do {
		std::cout << "Select your choice(r : Rock, p : Paper, s : Scissors) : ";
		std::cin >> choice;
	} while (choice != 'r' && choice != 'p' && choice != 's');

	return choice;
};

char getBotChoice()
{

	std::srand(time(nullptr));
	int random = std::rand() % 3;
	switch (random)
	{
		case 0: return 'r';
		case 1: return 'p';
		case 2: return 's';
	}
};

void chooseWinner(char player, char bot)
{
	std::cout << std::endl;
	if (player == bot) {
		std::cout << "It's a tie!" << std::endl;
	}

	switch (player) {
		case 'r':	
			if (bot == 'p') {
				std::cout << "It's a loose!" << std::endl;
			}
			else if (bot == 's')
			{
				std::cout << "It's a win!" << std::endl;
			}
			break;
		case 'p':
			if (bot == 's') {
				std::cout << "It's a loose!" << std::endl;
			}
			else if (bot == 'r')
			{
				std::cout << "It's a win!" << std::endl;
			}
			break;
		case 's':
			if (bot == 'r') {
				std::cout << "It's a loose!" << std::endl;
			}
			else if (bot == 'p')
			{
				std::cout << "It's a win!" << std::endl;
			}
			break;
	}
};
