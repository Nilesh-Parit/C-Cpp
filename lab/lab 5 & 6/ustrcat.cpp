#include<iostream>
#include<cstring>
using namespace std;

void ustrcat(char*, char*);
int main()
{
	char a[]="abc", b[]="xyz";
	char res[]={"dfdkjfbg"};
	
	
	cout<<"Enter string1:"<<endl;
	cin>>a;
	cout<<"Enter string2:"<<endl;
	cin>>b;
	cout<<"before concat string is "<<a<<endl;
    
   
	ustrcat(a, b);//abcxyz
	cout<<"Concatinated string is: "<<a;
		//strcpy(b,a);
		cout<<a<<endl;
		cout<<sizeof(a)<<endl;
		cout<<a<<endl;
		cout<<strlen(a);
}

void ustrcat(char* p, char* q)
{
	int i;
	for(i=0; *p!='\0';i++)
	{
		p++;
	}
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
	*q='\0';
	
}

