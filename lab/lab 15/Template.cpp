#include <iostream>
using namespace std;

template <class N>
N swap2no(N& a, N& j)
{
	N temp;
	temp=a;
	a=j;
	j=temp;
	cout<<"After swapping:"<<a<<" "<<j<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Before swapping:"<<a<<" "<<b<<endl;
	swap2no(a,b);
	
	float c,d;
	cout<<"Enter two numbers:"<<endl;
	cin>>c>>d;
	cout<<"Before swapping:"<<c<<" "<<d<<endl;
	swap2no(c,d);
	
}
