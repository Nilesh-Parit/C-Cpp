#include<iostream>
#include<cstring>
using namespace std;

class string1
{
	int len;
	char* ptr;
	
	public:
	
	string1()				//default constructor
	{
	}
	string1(const char* str)
	{
		this->len=strlen(str);
		ptr= new char[len+1];
		strcpy(ptr,str);
	}
	string1(int len,const char* str)
	{
		this->len=len;
		strcpy(ptr,str);
	}
	string1(string1& str)
	{
		cout<<"Copy constructor is called"<<endl;
		this->len=str.len;
		strcpy(this->ptr,str.ptr);
	}

	void acceptstring()
	{
		cout<<"Enter the length of the string"<<endl;
		cin>>len;
		ptr= new char[len+1];
		cout<<"Enter the string"<<endl;
		cin>>ptr;
	}
	void displaystring()
	{
		cout<<"the length of the string is "<<len<<endl;
		cout<<"the string is "<<ptr<<endl;
	}
	
	~string1()
	{
		cout<<"Destructor is called"<<endl;
	}
};

int main()
{	
	cout<<"---------Program starts----------"<<endl<<endl;
	
	string1 str1("Nilesh");		//parameterised constructor 1 (char *)
	str1.displaystring();

	string1 str2(5,"Rohan");     //parameterised constructor 2 (int , char*)
	str2.displaystring();
	
	string1 str3(str2);			//copy constructor
	str3.displaystring();
	
	string1 str4;				 
	str4.acceptstring();		//function = acceptstring()
	str4.displaystring();		//function = displaystring()
	
	
	cout<<"---------Program Ends----------"<<endl;
	
	return 0;
}

