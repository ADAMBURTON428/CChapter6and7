#include <iostream>
#include <time.h>
//#include <random>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again = 0;
	srand(time(NULL));
	secretBook = rand() % 57 + 1;
	do {
		cout << "Welcome to my chamber of chambers.";
		cout << " Otherwise knows as chamber." << endl;
		cout << "What you thought it was going to be a good name." << endl;
		cout << "There is a magic book, but only one. You get two tries to find it.\n If you do not you will perish.\n";


		while (pickBook != secretBook && count != 2)
		{
			cout << " Now choose a book by number >>> ";
			cin >> pickBook;
			if (pickBook < secretBook)
			{
				cout << "the number was to low";
			}
			else if (pickBook > secretBook)
			{
				cout << "The number was to high";
			}
			else if (pickBook == secretBook)
			{
				cout << "No you got my book";
			}
			count++;
		}
		if (count == 2)
		{
			cout << " You are dead by Dudes with towels";

		}
		else
		{
			cout << "Nice Book";
		}
		cout << " Play again? 1 for Yes 2 for No.";
		cin >> again;
		pickBook = 0;
		count = 0;
	} while (again != 2);

	system("pause");
	return 0;
}