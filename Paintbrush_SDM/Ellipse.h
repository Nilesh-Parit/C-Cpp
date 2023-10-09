#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

class Ellipse : public Shape
{	int length,height;
	public:
		Ellipse(int ,int);
		void display();
};

#endif
