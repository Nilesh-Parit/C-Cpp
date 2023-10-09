#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape : public Point
{   int thickness;
	public:
		Shape();
		Shape(int);
		void display();
	
};

#endif
