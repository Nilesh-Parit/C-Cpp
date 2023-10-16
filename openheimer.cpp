#include<iostream>
using namespace std;

int main()
{
	int arr[5][4]={ {11,12,13,14},
				    {15,16,17,18},
				    {19,20,21,22},
				    {23,24,25,26},
				    {23,24,25,26}, };
				    
	int cNo=4;
	int rNo=5;
	int cost=1000;
	
	if(rNo%2==1)
	{
		if(cNo%2==1)
		cout<<arr[rNo/2][cNo/2]<<" ";
		else
		cout<<arr[rNo/2][cNo/2-1]<<" ";
		cout<<arr[rNo/2][cNo/2];
	}
	else
	{
		cout<<"Sorry exact middle seat not found, Rs. "<<cost<<" refunded";
	}
	return 0;			  
}
