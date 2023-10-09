#include<iostream>
using namespace std;
int main(){
	int base,exp,pow=1;
	cout<<"Enter base value"<<endl;
	cin>>base;
	cout<<"Enter exponent value"<<endl;
	cin>>exp;
	
	for(int i =1;i<=exp;i++){
	pow=pow*base;
		
	}
	cout<<"Power is "<<pow;
}
