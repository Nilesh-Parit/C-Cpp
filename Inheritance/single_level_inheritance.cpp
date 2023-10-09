#include<iostream>
using namespace std;

class A{
	public :
		A(){
			cout<<"In default of A"<<endl;
		}
		void display(){
			cout<<"In display of A"<<endl;
		}
	
};
class B : public A{
	public :
		B(){
			cout<<"In default of B"<<endl;
		}
		void display(){
			cout<<"In display of B"<<endl;
		}
	
}; 
int main()
{
	B b;
	b.display();
}
