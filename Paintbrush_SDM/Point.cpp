#include <iostream>
using namespace std;
#include "Point.h"

Point::Point()
{
	this->x=this->y=0;
}
Point::Point(int a, int b)
{
	x=a;
	y=b;
	
}
 void Point::display(){
	cout<<"the x co-ordinate is "<<x<<endl;
	cout<<"the y co-ordinate is "<<y<<endl;
	
}
