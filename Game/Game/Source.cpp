#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
#include <chrono>
#include<thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

	int main() {
		int again;
		int numChoice;
		int computer = 0;
		int count = 0;
		
		
		do {
			cout << "The computer will guess your number\n";
			cout << "Enter a number : ";
			cin >> numChoice;
			while (computer != numChoice)
			{
				srand(time(NULL));
				computer = rand() % 10 + 1;
				count++;
				if (computer == numChoice)
				{
					cout << "It guessed right";
				}

				else
				{
					sleep_for(milliseconds(700));
					cout << computer << endl;

				}
			}
			




			cout <<" It took " << count << " Play again? 1-Yes 2-No.";
			cin >> again;
			count = 0;
		} while (again != 2);


	system("pause");
	return 0;
}