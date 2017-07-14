/*
 * main.cpp
 *
 *  Created on: Jul 14, 2017
 *      Author: golsana
 */



#include <iostream>
using namespace std;

int absolute(int x)
{
	if (x>0)
		return x;
	else
		return -x;
	//another way (better way?)
	/*if (x<0)
		x = -x;
	return x;*/
}
float absolute(float x)
{
	if (x>0.0)
		return x;
	else
		return -x;
	//another way (better way?)
	/*if (x<0.0)
		x = -x;
	return x;*/
}
int main()
{
	int number_int=0;
	float number_float = 0;
	cout<<"please enter your integer number: "<<endl;
	cin>> number_int;
	cout<<"the absolute value of your integer is: "<<absolute(number_int)<<endl<<endl;
	cout<<"please enter your float number"<<endl;
	cin>> number_float;
	cout<<"the absolute value of your float is: "<<absolute(number_float)<<endl;
	return 0;
}
