#include <iostream>
#include <ctime>

int main()
{
	std::srand(time(nullptr));

	int max_try = 0;
	std::cout << "Number try : ";
	std::cin >> max_try;

	int random = std::rand() % 100;

	for (int i = 0; i < max_try; i++)
	{
		std::cout << "Enter a number between 0 and 100 (try: " << i << "/" << max_try << "): ";

		int number = 0;
		std::cin >> number;
		std::cin.ignore();
		if (random == number)
		{
			std::cout << "Victory : " << random << std::endl;
			break;
		}
		else if (number > random)
		{
			std::cout << "Clue : Too big" << std::endl;
		}
		else
		{
			std::cout << "Clue : Too small" << std::endl;
		}

		if (i >= max_try - 1)
		{
			std::cout << "Lost : " << random << std::endl;
		}
	}

	std::cin.ignore();
	return 0;
}