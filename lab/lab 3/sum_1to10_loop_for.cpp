#include<iostream>
using namespace std;

int main()
{
	int num1;
	cout<<"Enter no. 1";
	cin>>num1;
	int num2;
	cout<<"Enter no. 2";
	cin>>num2;
		
	int sum=0;
	for(int i=num1;i<=num2;i++)
	{
		sum=sum+i;
	}
	cout<< "The sum of no. from "<<num1<<" to "<<num2<<" is "<<sum;
	return 0;
}
