#include<iostream>
using namespace std;
int main()
{
	int sum1=0,sum2=0;
	
	for(int i=1;i<=20;i++)
	{
		if(i%2==0)
		{
		sum1=sum1+i;
		
	}
	else 
{
		sum2=sum2+i;
		
		
}
}
cout<<"sum of even no. is "<<sum1<<endl;
cout<<"Sum of odd no is "<<sum2<<endl;		
	}
