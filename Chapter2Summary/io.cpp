
#include "io.h"
#include<iostream>

int readNumber()
{
	std::cout << "Enter a Number to add : ";
	int number{};
	std::cin >> number;

	return number;
}

void writeAnswer(int value)
{
	std::cout << "The Answer is : " << value << '\n';
}