#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;


int main() {
	int random = 0;

	srand(time(NULL));
	for (int i = 0; i <= 10; i++)
	{
		
		random = rand() % 10 + 1;
		cout << random << endl;
	}

	
	system("pause");
	return 0;
}