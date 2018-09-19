#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int doorGame() {
	int userDoorChoice;

	cout << "Welcome to my fabulous Game" << endl;
	cout << "Pick one of 3 doors\nDoor1\nDoor2\nDoor3\n";
	cin >> userDoorChoice;

	if (userDoorChoice == 1) {
		cout << "You win air...nice\n";
	}
	else if (userDoorChoice == 2) {
		cout << "You win a robot arm.\n";

	}
	else if (userDoorChoice == 3) {
		cout << "You win a million dollars in monopoly money.\n";
	}
	else
		cout << "I said 3 doors why did you say " << userDoorChoice << endl;
	return 0;
}
int randomGame() {
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;
	cout << "Pick a number between 1 and 10 ";
	cin >> numChoice;
	if (numChoice == secret) {
		cout << "You win bragging rights. ";
	}

	else
		cout << "Did you even try like seriously why " << numChoice << ".Come back and try again. " << endl;

	return 0;

}
int randomGame2() {
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 100 + 1;
	cout << "Pick a number between 1 and 100 ";
	cin >> numChoice;
	if (numChoice == secret) {
		cout << "You win bragging rights. ";
	}

	else
		cout << "Did you even try like seriously why " << numChoice << ".Come back and try again. " << endl;

	return 0;
}
int main() {
	int pickGame = 4;
	do {
		cout << "\nWelcome to my fabulous Game\nGame 1 or Game 2 or Game 3 or press 4 to leave but why would you. " << endl;
		cin >> pickGame;

		if (pickGame == 1) {
			doorGame();
		}
		else if (pickGame == 2) {

			randomGame();

		}
		else if (pickGame == 3) {
			randomGame2();
		}
		else if (pickGame == 4) {
			cout << "How could you.\n";
		}

	} while (pickGame != 4);
	system("pause");
	return 0;
}