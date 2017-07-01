//============================================================================
// Name        : average_N.cpp
// Author      : Golsana
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N=0;
	int input=0;
	int sum = 0;
	cout << "average of N numbers" << endl << endl;
	cout << "please enter N (your desired number):" << endl;
	cin>>N;
	//cout<<N<<endl;

	cout << "please enter "<< N <<" numbers:"<< endl <<endl;

	if ('N=!0'){
		for (int i =0; i < N; i++)
		{
			//cout<<"i: "<<i<<endl;
			//cout<<N<<endl;
			cout<<"enter number "<<i+1<<" :"<< endl << endl;
			//cout<<N<<endl;
			cin >>input;
			//cout<<"input is: " <<input<<endl;

			//cout<< "sum is: "<< (sum+=input) << endl;
			sum +=input;


		}

	float average = sum/N;
	cout<<"average is : "<<average<<endl;

	}

	else
		{cout<<" zero is not a valid number!";}


	//cout<<N<<endl;
	return 0;
}
