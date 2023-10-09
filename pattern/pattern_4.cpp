#include<iostream>
using namespace std;
int main(){
	int no,i=1;
	cout<<"Enter a no"<<endl;
	cin>>no;
	
	for(int r=1;r<=no;r++){
		for(int c=1;c<=r;c++){
			cout<<i<<" ";
			i++;
		}
		cout<<endl;
	}
}
