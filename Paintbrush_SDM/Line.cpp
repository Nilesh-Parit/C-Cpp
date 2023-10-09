#include <iostream>
using namespace std;
#include "Line.h"

Line::Line()
{}
Line::Line(int s,int e)
{
	start = s;
	end =e;
}
 void Line::display(){
cout<<" start and end point are "<<start<<"\t"<<endl;
		cout<<" __________________________ "<<endl;	
}
