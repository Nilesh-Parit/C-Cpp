#include<iostream>
using namespace std;

int main()
{
	int count=0;
	
	for(int i=2;count<25;i++)
	{
		  // not a prime no
	
		bool b = true;
		for(int j = 2;j<i;j++)
		{
				
			if(i==2)
			{
				cout<<i<<"prime no"<<endl;
				break;
			}
			
			if(i%j==0)
			{
					b = false;
					break;
			}
			
		}
		
	
	  if(b)
	  {cout<<count<<" "<<i<<" is a prime no"<<endl;
	  count++;}
	  
	}
			
  
}
	
