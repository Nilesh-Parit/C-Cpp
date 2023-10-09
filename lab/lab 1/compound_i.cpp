#include<iostream>

using namespace std;
#include<cmath>
int main()
{
	int p=10000;
	int t =7;
	float r=6.25;
	int n =4;
	
	float result = p*pow((1+(r/(n*100))),(n*t));
	
	cout<<"the compound intrest is "<<result;
}
