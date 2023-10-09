#include<iostream>
using namespace std;
void swap(int& ,int&);

int main(){
	
	int a,b;
	cout<<"Enter value for a and b"<<endl;
	cin>>a>>b;
	cout<<"Value of a and b before swapping is "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"Value of a and b after swapping is "<<a<<" "<<b;
}
void swap(int& p,int& q){
	
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"Value of p and q after swapping is "<<p<<" "<<q<<endl;
}
