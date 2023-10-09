#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
	int n;
	cout<<"enter array size"<<endl;
	cin>>n;
	
	int*p=new int[n];
	cout<<"enter "<< n << " elements"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<"\t";
	}
	
	delete[]p;
	
	return 0;
}


