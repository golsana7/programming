//============================================================================
// Name        : week_days.cpp
// Author      : Golsana
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number = 0;
	cout << "!!!week days with switch_case!!!" << endl << endl;
	cout << "please enter a number between 0 to 6 and I'll give you name of the day!"<<endl;
	cin >> number;
	switch (number){
	case 0:
		cout << "This day is shanbe." << endl;
		break;
	case 1:
		cout << "This day is yekshanbe." << endl;
		break;
	case 2:
		cout << "This day is do shanbe." << endl;
		break;
	case 3:
		cout << "This day is se shanbe." << endl;
		break;
	case 4:
		cout << "This day is chahar shanbe :D." << endl;
		break;
	case 5:
		cout << "This day is panj shanbe." << endl;
		break;
	case 6 :
		cout << "This day is jome." << endl;
		break;
	default:
		cout << "Error!!wrong number!!!" << endl;
		break;

	}
	return 0;
}
