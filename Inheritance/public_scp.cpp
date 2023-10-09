#include<iostream>
using namespace std;

class A{
	int c;
	public : int a =567;
	
	protected : int b=987;
		public :
		 void display(){
		 	cout<<"In display of A"<<endl;
		 }
};
class B : public A{
	public :
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
class C : public B{
	public :
		
		
		void show(){
		cout<<a<<" "<<b<<endl; // error
	}
		
};
int main(){
	B bobj;
	bobj.show();
	C c;
	c.display();
	c.show();
}
