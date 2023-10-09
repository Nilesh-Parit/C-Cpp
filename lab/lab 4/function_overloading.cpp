#include<iostream>
using namespace std;

class Addition{
	
	int a,b;
	double c,d;
	public:
	
	void add(int a,int b){
		cout<<"Sum of integer value is "<<a+b<<endl;
		
	}
	
	void add(double c,double d){
		cout<<"Sum of double value is "<<c+d<<endl;
	}

};

int main(){
	Addition a;
	a.add('a',5);
	a.	add(5.1f,8.6);
	return 0;
}
