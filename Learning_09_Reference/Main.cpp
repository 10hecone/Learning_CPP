#include <iostream>

void foo(const int* a)
{
	std::cout << *a << std::endl;
}

void foo(const int& a)
{
	std::cout << a << std::endl;
}
int main()
{
	int a = 0;

	foo(a);
	// Pointers
	//int* ptr = &a;

	// References
	//int& ref = a;

	std::cout << a << std::endl;
	std::cin.ignore();

	return 0;
}

