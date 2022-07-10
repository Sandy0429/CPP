#include<iostream>
using namespace std;

main()
{
	int n;
	int fact=1;
	cout<< "Enter no. \n";
	cin>> n;
	for(int i=n;i>=1;i--)
	{
		fact = fact *i;
		
	}
	cout<<"Factorial:"<<fact;
}
