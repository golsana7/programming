/*
 * main.cpp
 *
 *  Created on: Jul 12, 2017
 *      Author: golsana
 */

#include <iostream>
#include <math.h>
using namespace std;
const float pi = 3.14;


float diameter_circle(float radius)
{
	return radius*2;
}
float circumference_circle(float radius)
{
	return diameter_circle(radius)*pi;
}
float area_circle(float radius)
{
	return pow(radius,2)*pi;
}
int main()
{
	float radius = 0;
	cout<< "please enter the radius of the circle: "<<endl;
	cin>>radius;
	cout << "the diameter of the circle is: "<<diameter_circle(radius)<< endl;
	cout << "the circumference of the circle is: "<<circumference_circle(radius)<< endl;
	cout << "the area of the circle is: "<<area_circle(radius)<< endl;
	return 0;

}


