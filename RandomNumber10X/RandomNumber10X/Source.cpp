#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>

using namespace std;


int main() {
	

	srand(time(NULL));
	for (int i = 0; i <= 10; i++)
	{
		int random = 0;
		i = rand() % 10 + 1;
		cout << i << endl;
	}

	
	system("pause");
	return 0;
}