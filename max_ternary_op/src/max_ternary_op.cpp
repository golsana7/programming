//============================================================================
// Name        : max_ternary_op.cpp
// Author      : Golsana
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int number1 = 0;
	int number2 = 0;
	int max = 0;
	cout << "give me two numbers, I'll give you the max!!!!" << endl << endl;
	cout << "enter the first number: " << endl;
	cin >> number1;
	cout << "enter the second number: " << endl;
	cin >> number2;
	//if (number1 > number2)
		//max = number1;
	//else
		//max = number2;
	max = ((number1 > number2) ? number1:number2);
	cout << "the max is: " << max << endl;




	return 0;
}
