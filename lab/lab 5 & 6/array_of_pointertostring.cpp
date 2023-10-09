#include<iostream>
using namespace std;
#include<string.h>
int main(){
	
	char *names[5] ={"anjal","tejal","beboo","anshika","aditya"};
	
	for(int i =0;i<=5;i++){
		int j=0;
		cout<<names[i]<<endl;
		cout<<(names+i)<<endl;
		cout<<*(names+i)<<endl;
		int x=strlen(names[i]);
		for(;j<=x;j++){
			cout<<*(*(names+i)+j);
			cout<<endl;
		}
		
	    }
			return 0;
}
