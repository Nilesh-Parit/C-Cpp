#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter value of a and b\n";
	cin>>a>>b;
	cout<<"before swapping value of a and b is"<<a<<b<<endl;
	swap(a,b);
	cout<<"after swapping value of a and b is"<<a<<b<<endl;
}
void swap (int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q= temp;
	cout<<p<<q;
	
}
