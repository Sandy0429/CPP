//Insertion sort
/*
	assume that 1st two elements are in there respective place
	2 aray one sorted and one unsorted
		
*/
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
	
	for (int i=1;i<n;i++)
	{
		int current = arr[i];
		int j=i-1;
		
		while(arr[j]>current && j>=0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]= current;
	}
	
	for (int i=0;i<n;i++)
	{
		cout<< arr[i]<<" ";
	}
	cout<<endl;
}
	
