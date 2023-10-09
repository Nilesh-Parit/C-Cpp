#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	//Arithmetic operators
	cout<<"Addition of a and b="<<a+b;	
	cout<<"\nSubstraction ="<<b-a;	
	cout<<"\nMultiplication ="<<b*a;
	cout<<"\nDivision ="<<b/a;
	//Relational operators
	cout<<"\nGreater than ="<<(b>a);
	cout<<"\nLess than ="<<(b<a);
	//logical operators
	cout<<"\nAnd operator"<<(a&&b);
	cout<<"\nOr operator"<<(a||b);
	cout<<"\nnot equal to operator"<<(a!=b);
	//Bitwise operator
	cout<<"\nAnd operator"<<(a&b)<<endl;
	//Assignment operator
	int inc=a++;
	cout<<"\nIncrement operator"<<inc;	
	cout<<"\nIncrement operator"<<inc;
	return 0;
}
