#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3,no;
	n1=0;
	n2=1;
	
	cout<<"Enter the no. "<<endl;
	cin>>no;
	
	for(int i=0;i<no;i++)
	{
		n3=n1+n2;
		cout<<n3<<"\t";
		n1=n2;
		n2=n3;
}
	
	
	
	
	return 0;
}
