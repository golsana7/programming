//============================================================================
// Name        : Celsius_to_Fahrenheit.cpp
// Author      : Golsana
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"give me the degree in C, I'll give you in F!!" << endl <<endl;
	int Cel = 0;
	cout << "Please Enter the temperature in Celsius!" << endl;
	cin>> Cel;
	cout<<"The temperature in Fahrenheit is: "<<(Cel*1.8)+32<<endl;
	return 0;
}
