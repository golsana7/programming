/*
 * main.cpp
 *
 *  Created on: Jul 12, 2017
 *      Author: golsana
 */


#include <iostream>
#include <math.h>
using namespace std;



int num_digits(int input)//for finding out how many digits the input has
{
	int digits = 0;
	while (input != 0)
	{
		input = input/10;
		digits ++;
	}
	return digits;
}
int reverse(int input)// reverse of the input
{
	int digits = num_digits(input);
	int R = 0;
	int sum = 0;
	int i = 0;
	while(input !=0 )
	{
		R = input % 10;
		input = input/10;
		sum = sum + R*pow(10,(digits-1-i));
		i++;
	}
	return sum;
}


int main()
{
	int input=0;
	cout<<"please enter your integer:"<<endl;
	cin>>input;
	cout << "the reverse of your integer is: "<<reverse(input)<<endl;
	return 0;
}

