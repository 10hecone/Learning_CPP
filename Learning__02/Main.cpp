#include <iostream>

int main()
{
	int type = 0;

	do {
		std::cout << "Enter type : ";
		std::cin >> type;
		std::cin.ignore();

		if (type == 1)
		{
			float average = 0.0f;
			std::cout << "Enter average : ";
			std::cin >> average;
			std::cin.ignore();

			if (average >= 20.0f)
			{
				std::cout << "Perfect" << std::endl;
			}
			else if (average >= 16.0f)
			{
				std::cout << "Greatest" << std::endl;
			}
			else if (average >= 14.0f)
			{
				std::cout << "Very good" << std::endl;
			}
			else if (average >= 12)
			{
				std::cout << "Good" << std::endl;
			}
			else
			{
				std::cout << "Any mention" << std::endl;
			}
		}
		else if (type == 2)
		{
			int age = 0;
			std::cout << "Enter age : ";
			std::cin >> age;
			std::cin.ignore();

			std::cout << "You are " << (age < 18 ? "minor" : "majeur") << std::endl;
		}
		else if (type == 3)
		{
			int age = 12;
			bool with_parents = true;
			if (age >= 16 || with_parents && age > 10)
			{
				std::cout << "Authorize" << std::endl;
			}
			else
			{
				std::cout << "Not authorize" << std::endl;
			}
		}
		else if (type == 0)
		{
			break;
		}
		else 
		{
			std::cout << "Not found type" << std::endl;
		}
	} while (true);

	return 0;
}