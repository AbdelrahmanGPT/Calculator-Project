#include<iostream>

using namespace std;

char ReadOperation(string Message)
{
	char Operation = ' ';

	bool RepeatingCondition = 1;
	
	do
	{
		cout << Message << "\n";
		cin >> Operation;

		RepeatingCondition = (
			(Operation != '+') &&
			(Operation != '-') &&
			(Operation != '*') &&
			(Operation != '/') &&
			(Operation != '%'));

	} while (RepeatingCondition == true);

	return Operation;
}

double ReadNumber(string Message)
{
	double Number;
	cout << Message << "\n";
	cin >> Number;

	return Number;
}

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

bool DoYouWantToContinue()
{
	string Choice;
	do
	{
		cout << "DO YOU WANT TO CONTINUE[Y/N]\n";
		cin >> Choice;
	} while (Choice != "Y" && Choice != "y" && Choice != "N" && Choice != "n");

	if (Choice == "Y" || Choice == "y")
	{
		system("cls");
		return 1;
	}

	else
	{
		cout << "GOOD BYE :)\n";
		return 0;
	}
}

void StartCalculator()
{
	cout << "WELCOME TO CALULATOR :)\n";

	do
	{
		cout << "------------------------------------------\n";
		double Number1 = ReadNumber("ENTER FIRST NUMBER");
		char Operation = ReadOperation("ENTER OPERATION[+,-,*,/,%]");
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