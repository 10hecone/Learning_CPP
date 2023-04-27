#include <iostream>

int main()
{
	int a = 0, b = 0;

	std::cout << "Enter a then b : ";
	std::cin >> a >> b;
	std::cin.ignore();

	std::cout << "a + b = " << a + b << std::endl;
	std::cin.ignore();


	return 0;
}