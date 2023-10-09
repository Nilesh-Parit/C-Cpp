#include<iostream>
using namespace std;

/*
A
B C
D E F
G H I J
K L M N O
*/

int main(){
	int no;
	cin>>no;
	char ch ='A';
	cout<<"Enter a number of lines"<<endl;
	
	for(int r=1;r<=no;r++){
		for(int c=1;c<=r;c++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}
