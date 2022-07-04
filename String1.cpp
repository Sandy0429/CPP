#include<iostream>
#include<string>

using namespace std;

int main()
{
//	
//	string str;
//	cin>>str;
//	cout<<str<<endl;
//	string str1(5,'n');
//	cout<<str1; // this will print 5 times n
//	cout<<endl;
//	
//	string str2="SandhyaCHoudhari";
//	cout<<str2<<endl;
//	
//	string str3;
//	getline(cin,str3); //input string with blank spaces
//	cout<<str3<<endl;
//	
	//functions of string
	
	string s1 ="fam", s2="ily";
	cout << s1+s2<<endl; // op: family
	s1.append(s2);
	cout << s1<<endl; // op: family
	
//	s1="fam";
//	cout<< s1[1]; //op:a
//	
//	string abc="kjdfkjsdhfkshfsdhfshfk";
//	cout<<abc;
//	abc.clear();//abc ki  sari value hatta dega jitna bhi uske aandar h
//	cout<<abc;
//	
	s1="abc";
	s2="xyz";
	cout << s2.compare(s1) << endl;//1 as s2 is greater than s1
	cout << s1.compare(s2) << endl;//-1 as s1 is smaller than s2
	s2="abc";
	cout << s2.compare(s1) << endl;//0 because strings are equal
	if(s1.compare(s2) ==0)
	{
		cout<<"Strings are equal"<<endl;
	}
	
	//checking if string is empty or not
	s1.clear();
	if(s1.empty())
	{
		cout<<"String is empty"<<endl;
	}
	
	//"erase"
	s1="nincompoop";
	s1.erase(3,2);//co remove ho jayega 3position se 2 character remove honge
	cout<<s1<<endl;
	
	//find
		s1="nincompoop";
	cout<<s1.find("com")<<endl;// op:3(op first occurance)
	cout<<s1.find("poo")<<endl;// op:6
	
	
	//insert at any point
	s1.insert(2,"lol");
	cout<<s1<<endl; //op: nilolncompoop
	
	//length of strng
	cout<<s1.size()<<endl;//op: 13
	cout<<s1.size()<<endl;//op:13
	
	for(int i=0;i<s1.length();i++)
	{
		cout<<s1[i]<<endl;
	}
	
	//substring
	s1="nincompoop";
	string s= s1.substr(6,4);//(index,characters)
	cout << s<<endl; //op:poop
	
	string num ="786";
//	int x =stoi(num);
//	cout<< x+2<< endl; //op: 788
	
	int n = 786;
//	cout<< to_string(n)+"2"<<endl; //7862


	
	return 0;
}
