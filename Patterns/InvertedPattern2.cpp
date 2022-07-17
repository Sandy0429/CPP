//Inverted Pattern 2
/*

		1 2 3 4 5
		1 2 3 4
		1 2 3
		1 2
		1

*/
#include<iostream>
using namespace std;

int main()
{
	int n;	
	cin>>n;
	
	for(int i=n; i>=1; i--)
	{
		
		for(int k=1; k <= i; k++)
		{
			cout<<k<<" ";
		}		
		cout<<endl;
	}
	
	return 0;
}
