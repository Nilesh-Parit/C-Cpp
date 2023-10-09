#include <iostream>
#include<cstring>
#include "Point.cpp"
#include "Shape.cpp"
#include "Line.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"
#include "Ellipse.cpp"

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int choice;
	
	while(1)
	{
		cout<< "for point press 1" <<endl;
	cout<< "for line press 2" <<endl;
	cout<< "for square press 3" <<endl;
	cout<< "for rectangle press 4" <<endl;
	cout<< "for circle press 5" <<endl;
	cout<< "for ellipse press 6" <<endl;
	cout<<endl<< "Enter your choice below"<<endl;
	
	cin>>choice;
	
	switch(choice)
	{
  case 1:
    	 {
		 Point *ptr = new Point(0,0);
    	 ptr->display();}
    break;
  case 2:
    	 {
		 Point *ptr1 = new Line(0,0);
    	 ptr1->display();}
    break;
  case 3:
    	{
		Point *ptr2 = new Square(10);
    	 ptr2->display();}
    break;
  case 4:
    	 {
		 Point *ptr3 = new Rectangle(10,20);
    	 ptr3->display();}
    break;
   case 5:
    	 {
		 Point *ptr4 = new Circle(10);
    	 ptr4->display();}
    break;
    case 6:
    	 {
		 Point *ptr5 = new Ellipse(50,10);
    	 ptr5->display();}
    break;
    case 7:
    	{ choice =0; }
    default:
    	cout<<"Wrong choice entered "<<endl;	
	}
	}

	
	
	return 0;
}
