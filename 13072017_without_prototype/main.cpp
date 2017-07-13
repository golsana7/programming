/*
 * main.cpp
 *
 *  Created on: Jul 13, 2017
 *      Author: golsana
 */

#include <iostream>
using namespace std;

void even (int number)
{
	if ((number%2) == 0)
		cout<<"It's an even number!"<<endl;
}void odd (int number)
{
	if ((number%2) != 0)
		cout<<"It's an odd number"<<endl;
	else
		even(number);
}

int main()
{
		int number = 0;
		cout<<"please enter your number: "<<endl;
		cin>>number;
		odd(number);
		return 0;
}

