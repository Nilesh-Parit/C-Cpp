#include <iostream>
using namespace std;
#include "Circle.h"

Circle::Circle(int r)
{
	 radius = r;
}
 void Circle::display()
	{
		cout<<"the radius of circle is (in cm)"<<radius<<endl;
	}
