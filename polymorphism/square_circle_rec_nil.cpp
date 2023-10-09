#include<iostream>
using namespace std;

class shape
{
	public:
	float area1,circum1;
	virtual void area() = 0;
	virtual void circum() = 0;
	
	void display()
	{
		cout<<"the area of the square is "<<area1<< endl;
		cout<<"the circum of the square is "<<circum1<< endl;
	}
};
class sqre:public shape
{	int side;

	public:
	sqre()
	{
		cout<<"Enter the length of side of a square "<<endl;
		cin>>side;
	}
	void area()
	{
		area1= (float)side*(float)side;
	}
	void circum()
	{
		circum1=4*side;
	}

};
class rec:public shape
{	int len,bred;
	public:
	rec()
	{
		cout<<"Enter the length of rectangle"<<endl;
		cin>>len;
		cout<<"Enter the breadth of rectangle"<<endl;
		cin>>bred;
	}
	void area()
	{
		area1= len * bred;
	}
	void circum()
	{
		circum1=2*(len+bred);
	}
};
class cir:public shape
{	int rad;
	const float PI = 3.142;
	public:
	cir()
	{
		cout<<"Enter the radius of circle"<<endl;
		cin>>rad;
	}
	void area()
	{
		area1= PI*rad*rad;
	}
	void circum()
	{
		circum1=2*PI*rad;
	}
};

int main()
{	
	shape* ptr = new sqre();
	ptr->area();
	ptr->circum();
	ptr->display();
	
	sqre s1;
	s1.area();
	s1.circum();
	s1.display();
	
	ptr = new cir();
	ptr->area();
	ptr->circum();
	ptr->display();
	
	return 0;
}
