#include<iostream>
using namespace std;

int fib(int n)
{
	if ((n ==1)||(n == 0))
	{
		return (n);
	}
	
	else
	{		
		return (fib(n-1)+ fib(n-2)); 
	}
}

main()
{
	int x,i=0;
	cout<<"Enter no: ";
	cin >> x;
	
	while(i<x)
	{
		cout <<" "<< fib(i);
		i++;
	}
}
/*
#include <iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}*/
