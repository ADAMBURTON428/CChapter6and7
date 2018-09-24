#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

	int main() {
		int again;
		int numChoice;
		int secret;
		int count = 0;

		srand(time(NULL));
		secret = rand() % 10 + 1;
		do {
			cout << "The computer will guess your number";
			cout << "Enter a number : ";
			cin >> numChoice;

			if (secret == numChoice) 
			{
				cout << "It guessed right";
			}
			else 
			{
				secret = 0;
				secret = rand() % 10 + 1;
		
			}

			count++;




			cout <<"It took " << count << " Play again? 1y for Yes 2 for No.";
			cin >> again;
			count = 0;
		} while (again != 2);


	system("pause");
	return 0;
}