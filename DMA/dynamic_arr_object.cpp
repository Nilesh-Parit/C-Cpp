#include<iostream>
using namespace std;
#include<stdlib.h>
	class complex
	{

 	int real,img;
 	public:
 		void get()
 		{
 			cout<<"Enter real and imaginary"<<endl;
 			cin>>real>>img;
		 }
		 void put()
		 {
		 	cout<<"Complex no. is"<<endl;
		 	cout<<real<<"+"<<img<<"i"<<endl;
		 }
};

int main()
{
	int n,i;
	cout<<"Enter no. of objects"<<endl;
	cin>>n;
	complex* ptr=new complex[n];
	for(int i=0;i<n;i++)
	{
		ptr[i].get();
	}
	for(int i=0;i<n;i++)
	{
		ptr[i].put();
	}
}
