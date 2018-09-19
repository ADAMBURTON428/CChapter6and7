#include <iostream>
#include<string>

using namespace std;

int main() {

	char grade = ' ';
	string result;
	cout << "Enter your letter grade so we can judge you: ";
	cin >> grade;

	grade = toupper(grade);
	switch (grade)
	{
	case 'A':
		result = "Excellent";
		break;
	case 'B':
		result = "Meh, good but not great";
		break;
	case 'D':
	case 'F':
		result = "Good luck with that.";
		break;
	default:
		result = "not Valid";

	}//end swich
	cout << result;
	system("pause");
	return 0;

}