#include "Functions.hpp"

int pow(int number, int n)
{
	int result = 1;

	for (int i = 0; i < n; i++)
	{
		result *= number;
	}

	return result;
}

int add(int a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}