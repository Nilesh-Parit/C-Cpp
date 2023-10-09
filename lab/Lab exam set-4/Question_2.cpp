#include<iostream>
#include<cstring> //string file inclusion is done only for implementation of array of charecter pointers
using namespace std;

void ustrcat(char*, char*);
int ustrlen(char*);
void ustrcpy(char*,char*);

int main()
{
	// user defined string concatenate function
	
	char a[]="Nilesh", b[]="Parit";
	
	cout<<"before concatinating string a = ";
	cout<<a<<endl;
	cout<<"before concatinating string b = ";
	cout<<b<<endl;
    
	ustrcat(a, b);
	cout<<"Concatinated string a is: "<<a<<endl<<endl;
	
	// user defined string length function
	
	char c[]={"Kolhapur"};
	int result;
	result= ustrlen(c);
	cout<<"the string is "<<c<<endl;
	cout<<"The length of the string is "<<result<<endl<<endl;
	
	// user defined string copy function
	
	char d[]="Hello", e[]="World";
	cout<<"the string 1 is "<<d<<endl;
	cout<<"the string 2 is "<<e<<endl;
	ustrcpy(e,d);
    cout<<"string 1 copied in string 2 is = "<<e<<endl<<endl;
    
    // implementation of array of charecter pointers
    
    cout<<endl<<"Implementation of array of charecter pointers"<<endl;
    
    char *names[4] ={"Nilesh","Abhishek","Pranav","Varad",};
	
	for(int i =0;i<=4;i++)
	{
		int x=strlen(names[i]);
		for(int j=0;j<=x;j++)
		{
			cout<<*(*(names+i)+j);
		}
		cout<<endl;
	}
	
	return 0;
}
void ustrcat(char* p, char* q)	// user defined string concatenate function
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
int ustrlen(char *b)		// user defined string length function
{
	int len=0;
	int i;
	for(i=0;b[i]!='\0';i++)
	len++;
	
	return len;
}
void ustrcpy(char* p,char* q)		// user defined string copy function
{
	
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
	*p='\0';
	
}

