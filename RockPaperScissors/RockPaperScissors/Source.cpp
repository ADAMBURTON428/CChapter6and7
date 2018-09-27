#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main() 
{
	int userChoice;
	int computerChoice;
	srand(time(NULL));
	computerChoice = rand() % 3 + 1;


	cout << "1-Rock \n2-Paper \n3-Scissors";
	cin >> userChoice;

	if (computerChoice == 1)
	{
		if (userChoice == 1)
		{
			cout << "Tie";
		}
		else if (userChoice == 2)
		{
			cout << "You win";
		}
		else
		{
			cout << "You lose";
		}


	}
	else if (computerChoice == 2)
	{
		if (userChoice == 1)
		{
			cout << "You lose";
		}
		else if (userChoice == 2)
		{
			cout << "Tie";
		}
		else
		{
			cout << "You win";
		}
	}
	else if (computerChoice == 3)
	{
		if (userChoice == 1)
		{
			cout << "You win";
		}
		else if (userChoice == 2)
		{
			cout << "You lose";
		}
		else
		{
			cout << "Tie";
		}

	}






	system("pause");
	return 0;
}