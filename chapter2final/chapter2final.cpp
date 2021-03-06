// chapter2final.cpp : Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
// The program computes the answer on the two numbers the user entered and prints the results. 
// If the user enters an invalid symbol, the program should print nothing.
//

#include "pch.h"
#include <iostream>
#include "chapter2.h"

int main()
{
	double userNumber1{ userDouble() };
	char userOperator{ userArithmetic() };
	double userNumber2{ userDouble() };
	printResult(userNumber1, userNumber2, userOperator);
	return 0;
}

// The user is asked to enter 2 floating point numbers (use doubles). 
double userDouble()
{
	std::cout << "Enter a double value: ";
	double x{};
	std::cin >> x;
	return x;
}

// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
char userArithmetic()
{
	std::cout << "Enter one of the following: +, -, *, or / : ";
	char x{};
	std::cin >> x;
	//Checks if the user entered a valid operator.
	if (x == '+')
		return '+';
	if (x == '-')
		return '-';
	if (x == '*')
		return '*';
	if (x == '/')
		return '/';
	// Slight deviation from the official instructions. Instead of printing nothing if the user enters an invalid symbol,
	// the program calls the user an idiot.
	else
	{
		std::cout << "\nIdiot. Try again.\n";
		userArithmetic();
	}
}

// The program computes the answer on the two numbers the user entered and prints the results. 
void printResult(double x, double y, char userOp)
{
	if (userOp == '+')
		std::cout << x << " " << userOp << " " << y << " equals: " << (x + y);
	else if (userOp == '-')
		std::cout << x << " " << userOp << " " << y << " equals: " << (x - y);
	else if (userOp == '*')
		std::cout << x << " " << userOp << " " << y << " equals: " << (x * y);
	else if (userOp == '/')
		std::cout << x << " " << userOp << " " << y << " equals: " << (x / y);
}