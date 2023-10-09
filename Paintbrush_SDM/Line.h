#ifndef LINE_H
#define LINE_H

#include "Shape.h"

class Line : public Shape
{	int start,end;
	public:
		Line();
		Line(int ,int );
		void display();
};

#endif
