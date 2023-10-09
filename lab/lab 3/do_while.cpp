#include<iostream>
using namespace std;

int main()
{
	int n1,sum=0;
	cout<<"enter the no."<<endl;
	do
	{
		cin>>n1;
		sum=sum+n1;	
	}while(n1!=0);
	
	cout<<"The sum of all no."<<sum;
	
	return 0;
}
