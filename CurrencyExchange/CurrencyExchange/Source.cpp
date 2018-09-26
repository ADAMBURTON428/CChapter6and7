#include <iostream>
#include<string>

using namespace std;

int main() {

	double US;
	double Canadian= .9813;
	double Euro = .757;
	double Rupee = 52.53;
	double Yen = 80.92;
	double Peso = 13.1544;
	double Rand = 7.7522;
	double Pound = .6178;
	int userChoice;
	double converted;

	cout << "Enter US dollars: ";
	cin >> US;
	cout << "/nWhat currency do you want to convert to: \n1-Canadian Dollar \n2-Euro \n3-Rupee \n4-Yen \n5-Peso \n6-Rand \n7-Pound";
	cin >> userChoice;
	if (userChoice == 1)
	{
		converted = Canadian * US;

		cout << "It has been converted to " << converted << " in Canadian Dollars";


	}
	else if (userChoice == 2)
	{
		converted = Euro * US;

		cout << "It has been converted to " << converted << " in Euros";

	}

	else if (userChoice == 3)
	{
		converted = Rupee * US;

		cout << "It has been converted to " << converted << " in Rupees";

	}
	else if (userChoice == 4)
	{
		converted = Yen * US;

		cout << "It has been converted to " << converted << " in Yens";

	}
	else if (userChoice == 5)
	{
		converted = Peso * US;

		cout << "It has been converted to " << converted << " in Pesos";

	}
	else if (userChoice == 6)
	{
		converted = Rand * US;

		cout << "It has been converted to " << converted << " in Rands";

	}
	else if (userChoice == 7)
	{
		converted = Pound * US;

		cout << "It has been converted to " << converted << " in Pounds";

	}
	else
		cout << userChoice << " is not valid option";






	system("pause");
	return 0;

}