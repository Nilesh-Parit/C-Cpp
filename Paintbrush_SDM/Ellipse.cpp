#include <iostream>
using namespace std;
#include "Ellipse.h"

Ellipse::Ellipse(int len,int ht)
{
length = len;
height=ht;	
}
void Ellipse::display()
	{
		cout<<"the length of ellipse in cm "<<length<<endl;
		cout<<"the breadth of ellipse in cm "<<height<<endl;
	}	
