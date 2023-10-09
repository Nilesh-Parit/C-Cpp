#include<iostream>
using namespace std;

class A{
	int a;
	public :
		A(){
			cout<<"In default of A"<<endl;
		}
	 A(int);
	 void display();
	
	
};
	A::A(int p){
			cout<<"In para of A\n";
		a=p;
				cout<<"Value of a is "<<a<<endl;

		}
		
			void A::display(){
			cout<<"In display of A"<<endl;
			cout<<"Value of a is "<<a<<endl;
		}
		
class B : public A{
	int b;
	public :
	B(int,int);
	void display();
	
	
	
}; 
	B::B(int p,int q):A(p){
			cout<<"In para of B\n";
		b=q;
		}
			void B::display(){
			cout<<"In display of B"<<endl;
				cout<<"Value of b is "<<b<<endl;
		}
int main()
{
	B b(20,50);
	b.display();
 
}
