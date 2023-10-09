#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Point
{	int side;
	public:
		Square( int );
		void display();
};

#endif
