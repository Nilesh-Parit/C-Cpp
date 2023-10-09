#include<iostream>
using namespace std;

class A{
	public :
	A(){
		cout<<"A class constructor "<<endl;
	}
		~A(){
		cout<<"A class destructor "<<endl;
	}
};

class B : public A{
		public :

	B(){
		cout<<"B class constructor "<<endl;
	}
		~B(){
		cout<<"B class destructor "<<endl;
	}
};

class C : public A{
		public :

	
	C(){
		cout<<"C class constructor "<<endl;
	}
		~C(){
		cout<<"C class destructor "<<endl;
	}
};

int main(){
	 A a;
	 {B b;}
	 {C c;}
	 return 0;
	
}
