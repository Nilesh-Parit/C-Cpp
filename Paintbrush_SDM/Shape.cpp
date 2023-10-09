#include <iostream>
using namespace std;
#include "Shape.h"

Shape::Shape()
{
	this->thickness=0;
}
Shape::Shape(int t)
{
	thickness = t;
}

void  Shape::display(){
	cout<<"the thickness is "<<thickness<<endl;
		
}
