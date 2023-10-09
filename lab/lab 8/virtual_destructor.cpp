#include<iostream>
using namespace std;
class A{
	public :
		 ~A(){
			cout<<"A class destructor"<<endl;
		}
		
};

class B : public A{
	public :
		~B(){
			cout<<"B class destructor is called"<<endl;
		}
};
int main(){
//	A *ptr = new B();
//	delete ptr;
	B *ptr1 = new B();
	delete ptr1;
	return 0;
}
