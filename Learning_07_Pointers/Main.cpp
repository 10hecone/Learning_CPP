#include <iostream>

void Foo(int* a)
{
	if(a) 
		*a = 50;
}


int main()
{
	int a = 0;
	float b = 0;

	int* p_int = &a;
	float* p_float = &b;

	Foo(p_int);

	std::cout << "Value of a : " << a << std::endl;
	std::cout << "Value of b : " << b << std::endl;
	std::cout << "Adress of b : " << p_int << std::endl;
	std::cout << "Adress of b : " << p_float << std::endl;

	std::cout << "Value of a (adress) : " << *p_int << std::endl;
	std::cout << "Value of b (adress) : " << *p_float << std::endl;

	std::cin.ignore();
	return 0;
}

