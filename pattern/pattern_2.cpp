#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter a no"<<endl;
	cin>>no;
	
	for(int r=1;r<=no;r++){
		for(int c=1;c<=r;c++){
			cout<<c;
		}
		cout<<endl;
	}
}
