#include<iostream>
using namespace std;
int main(){
int i,t,rem,sum;
int start,end;
cin>>start>>end;


cout<<"list of armstrong no is";
for( i=start;i<=end;i++){
	t=i;
	sum=0;
	while(t>0){
		
	    rem=t%10;
		sum=sum+(rem*rem*rem);
		t=t/10;
	
	}
	if(i==sum){
		cout<<i<<endl;
	}
	
}


	
	
	
}
