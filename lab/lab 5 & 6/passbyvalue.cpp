#include<iostream>
using namespace std;
void swap(int,int);
int main(){
	int a,b;
	cout<<"enter the value for a and b"<<endl;
	cin>>a>>b;
	cout<<"the value befor swaping after of a and b is "<<a<<b<<endl;
	swap(a,b);
    cout<<"the value after swaping after of a and b is "<<a<<b<<endl;
}
void swap(int p,int q){
	int temp;
temp=p;
p=q;
q=temp;
	cout<<"the value after swaping of p and q is "<<p<<q<<endl;
}
