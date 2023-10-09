#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &new_a=a;
	cout<<a;
	cout<<new_a;
	new_a=20;
	cout<<a<<new_a;
	return 0;
} 
