#include<iostream>
using namespace std;

class Temp{
	int a;
	public:
	 
	void get();
	void show();
	friend void manipulate(Temp &);
};

void Temp::get(){
	cout<<"Enter value for a "<<endl;
	cin>>a;
}
void Temp::show(){
	cout<<"Value for a is "<<a<<endl;
}
void manipulate(Temp &t1){
	cout<<"this is a friend function"<<endl;
	
	t1.a= t1.a+ 5;
}
int main(){
	Temp t;
	t.get();
	manipulate(t);
	t.show();
}
