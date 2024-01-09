#include<iostream>
#include "ABODAstd.h"

using namespace std;

void Calculator(double Number1, char Operation, double Number2)
{
	if (Operation == '+')
	{
		cout << "SUM = " << Number1 + Number2 << "\n";
	}

	else if (Operation == '-')
	{
		cout << "DIFFERENCE = " << Number1 - Number2 << "\n";
	}

	else if (Operation == '*')
	{
		cout << "PRODUCT = " << Number1 * Number2 << "\n";
	}

	else if (Operation == '/')
	{
		cout << "DIVISION = " << Number1 / Number2 << "\n";
	}

	else if (Operation == '%')
	{
		cout << "MODULAS = " << (long long)Number1 % (long long)Number2 << "\n";
	}

	else
	{
		cout << "INVALID CHOCIE\n";
	}
}

void StartCalculator()
{
	cout << "WELCOME TO CALULATOR :)\n";

	do
	{
		cout << "------------------------------------------\n";
		double Number1 = ReadNumber("ENTER FIRST NUMBER");
		char Operation = ReadArithmeticOperation("ENTER OPERATION[+,-,*,/,%]");
		double Number2 = ReadNumber("ENTER SECOND NUMBER");
		

		Calculator(Number1, Operation, Number2);

		cout << "------------------------------------------\n";

	} while (DoYouWantToContinue());

}

int main()
{
	StartCalculator();

	return 0;
}