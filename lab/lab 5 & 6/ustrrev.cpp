#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[]={"Nilesh"};
	char *b=a;
	int i,j;
	int l=strlen(a);
	int flag=0;
	
	for(i=0,j=l-1;j>i;i++,j--)
	{
		char ch=a[i];
		a[i]=a[j];
		a[j]=ch;
		
	}
	cout<<b<<endl;
	cout<<a<<endl;
	
	return 0;
}
