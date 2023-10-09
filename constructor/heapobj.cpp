#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(){
			
			a=10;
			cout<<"constr of class A"<<endl;
		}
		void show()
		{
			cout<<a<<endl;
			cout<<"show fun of A class"<<endl;
		}
		~A(){
			cout<<"destruc"<<this<<endl;
		}
		
};
fun(){
	
	A* ap1=new A;
	ap1->show();
	delete ap1;
	cout<<ap1<<endl;}
int main(){
	{
	A aobj;
	aobj.show();}
//	constr of class A
//10
//show fun of A class11802016
//show fun of A class
		{
		A* ap=new A;
	ap->show();}
	fun();
	}
