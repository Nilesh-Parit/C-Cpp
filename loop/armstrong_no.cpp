#include<iostream>
using namespace std;
int main(){
	int count =0;
	for(int i=0;i<=1000;i++){
		
		int num =i;
	    int dig,sum=0;
		
		while(num!=0){
			 dig= num%10;
			sum= sum+  dig*dig*dig;
			 num = num/10;
		}
		if(i==sum)
		{
				cout<<"armstrong no is "<<sum <<endl;
				count++;
		}
		
	}
	cout<<"count of armstrong no is "<<count <<endl;
}
