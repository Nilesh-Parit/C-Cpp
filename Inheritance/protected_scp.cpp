#include<iostream>
using namespace std;

class A{
	int c=55;
	public : int a=98;
	
	protected : int b=65;
		public :
		 void display(){
		 	cout<<"In display of A"<<endl;
		 }
};
class B : protected A{
	public :
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
class C : private B{
	public :
		
		
		void show(){
		cout<<a<<" "<<b<<endl;// error
	}
		
};
int main(){
	B bobj;
	bobj.show();
	C c;
//	c.display();
	c.show();
}
