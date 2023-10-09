#include<iostream>
#include<string.h>
using namespace std;

void fun();
static int count =0;
int main()
{
	fun();
	fun();
	fun();
	fun();
	cout<<"the func is called"<<count<<"times";
	return 0;
}

void fun()
{
	static int x=10;
	cout<<"value of x is ="<<x<<endl;
	x++;
	cout<<"modified value of x is = "<<x<<endl;	
	count++;
}
