#include<iostream>
using namespace std;

class A{
	int a;
	public :
		A(){
			cout<<"In default of A"<<endl;
		}
		A(int a){
			cout<<"In para of A\n";
			this ->a=a;
		}
		void display(){
			cout<<"In display of A"<<endl;
			cout<<"Value of A is "<<a<<endl;
		}
	
};
class B : public A{
	int b;
	public :
		B(){
			cout<<"In default of B"<<endl;
		}
		B(int b){
			cout<<"In para of B\n";
			this ->b=b;
		}
		void display(){
			cout<<"In display of B"<<endl;
				cout<<"Value of B is "<<b<<endl;
		}
	
}; 
int main()
{
	B b(20);
	b.display();
	cout<<sizeof(b);
}
