/*
 * main.cpp
 *
 *  Created on: Jul 18, 2017
 *      Author: golsana
 */


#include <iostream>
using namespace std;

int sum (int a, int b, int c=0, int d=0)//"c" and "d" are default parameters
{
	return a+b+c+d;
}

int main()
{
	int a=0; int b=0; int c=0; int d=0;
	cout<<"please enter a,b,c and d (integer numbers):"<<endl;
	cin>>a,b,c,d;
	int e=sum(a,b);// default parameters "c" and "d" are used in sum()
	cout<<"sum of a:"<<a<<" and b:"<<b<<" : "<<e<<endl;
	int f=sum(a,b,c);// default parameter "d" is used in sum()
	cout<<"sum of a:"<<a<<" and b:"<<b<<" and c:"<<c<<" : "<<f<<endl;
	return 0;
}


