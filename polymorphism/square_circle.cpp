#include<iostream>
using namespace std;

class shape
{
	public:

	float area;
	public :
    virtual	void area1()=0;
	virtual void show()=0;
};

class square: public shape
{
	int s;
	public :
		square(int sd){
			s=sd;
		}
	void area1()
	{
		cout <<"Enter the length of side of a square in cm"<<endl;
		cin>>s;
		area = s*s;
	}
	void show()
	{
		
		cout<<"area of square  is "<<area;
	}
};
class circle: public shape
{

int r;
public :
	circle(int rd){
		r=rd;
	}

float  const pi = 3.142;

	void area1()
	{
		cout<<"Enter value fot r"<<endl;
		cin>>r;
		area =  pi*r*r;
	}
	void show()
	{
		cout<<"Area of  circle is "<<area<<endl;
		
	}
};
 int main(){
 	shape * ptr = new square(12);
 	ptr
 
 	
 }
