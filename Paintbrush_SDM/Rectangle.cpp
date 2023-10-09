#include <iostream>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle(int len,int bth )
{
	length = len;
	breadth = bth;
	
}
void Rectangle::display(){
	cout<<"the length of rectangle in cm "<<length<<endl;
	 cout<<"the breadth of rectangle in cm "<<breadth<<endl;
}
