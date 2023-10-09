
#include<iostream>
using namespace std;
/*
A A A A A
B B B B
C C C
D D
E
*/
int main(){
	int no;
	cout<<"Enter a number of lines"<<endl;
	cin>>no;
				char ch ='A';


	
	
	for(int r=no;r>0;r--){
		for(int c=1;c<=r;c++){
			cout<<ch<<" ";
			
		}
		ch++;
		cout<<endl;
	}
}
