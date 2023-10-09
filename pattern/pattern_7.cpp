#include<iostream>
using namespace std;
/*
     *
    ***
   *****
  *******
 *********
***********
*/
int main(){
	int no;
	cout<<"Enter a number of lines"<<endl;
	cin>>no;
	
	for(int r=1;r<=no;r++)
	{
		for(int c=1;c<=no-r;c++)
		{
			cout<<" ";	
		}
		for(int c=1;c<=r;c++)
		{
			cout<<"*";
		}
        for(int c=2;c<=r;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;	
}
