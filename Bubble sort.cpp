//repeatedly swap two adjacent elements if they are in wrong order
#include<iostream>
using namespace std;

main(){
	
	cout<<"Enter no of elements: ";
	int n;
	cin>> n;
	
	cout <<endl<<"Enter elements ";
	int arr[n];
		
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout <<endl<<"Sorted elements ";
	
	for(int i=n; i>0;i--)
	{
		for(int j=0; j<n-1;j++)
		{
			if( arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	
	for (int i=0;i<n;i++)
	{
		cout<< arr[i]<<" ";
	}
	cout<<endl;
	
}
	
