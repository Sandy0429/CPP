#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str ="kdfkshfksd";
	//convert into upper case
	for(int i=0;i<str.length();i++)
	{
		if(str[i] >= 'a' && str[i]<='z')
			str[i] -= 32;
	}
	
	cout<<str<<endl;
	
	//convert into lower case
	string str1 ="SDFDSFSDFS";
	for(int i=0;i<str.length();i++)
	{
		if(str1[i] >= 'A' && str1[i]<='Z')
			str1[i] += 32;
	}
	cout<<str1<<endl;
	
	//inbuilt function
	string s ="asfvmbtdofdx";
	transform(s.begin(),s.end(),s.begin(),::toupper);// 1,2-- string kaha se kaha tk h,3 kaha se krna h, 4 kya krna h
	cout<< s<<endl;
	transform(s.begin(),s.end(),s.begin(),::tolower);// 1,2-- string kaha se kaha tk h,3 kaha se krna h, 4 kya krna h
	cout<< s<<endl;
	
	//Form the biggest number from the numeric string
	 // soln: sort string
	 s="2344668679";
	 sort(s.begin(),s.end(),greater<int>());
	 cout<< s<<endl; //sort in descending order
	 
	 
	 //frequency
	 s= "asdfhadfadfsaasddddkkssssssssssj";
	 int freq[26];
	 for (int i=0;i<26;i++)
	 	freq[i]=0;
	 	
	 	for(int i=0;i<s.size();i++)
	 	{
	 		freq[s[i]-'a']++;
		 }
	 	
	 	char ans='a';
	 	int maxF=0;
	 	for (int i=0;i<26;i++)
	 	{
	 		if(freq[i]> maxF)
	 		{
	 			maxF= freq[i];
	 			ans = i+'a';
			 }
		 }
		 
		 cout<<maxF<<endl; //13
		 cout<<ans<<endl; //s
	 	
	 return 0;
}
