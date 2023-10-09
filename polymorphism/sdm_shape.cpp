#include<iostream>
#include<cstring>
using namespace std;

class Point
{	int x,y;
	public:
	virtual void setvalue()
	{
		cout<<"Enter the x co-ordinate "<<endl;
		cin>>x;
		cout<<"Enter the y co-ordinate "<<endl;
		cin>>y;
	}

	virtual void display()
	{
		cout<<"the x co-ordinate is "<<x<<endl;
		cout<<"the y co-ordinate is "<<y<<endl;
	}
 };
class Shape:public Point
{
	int thickness;
	public:
	void setvalue()
	{
		cout<<"Enter the thickness "<<endl;
		cin>>thickness;		
	}
	void display()
	{
		cout<<"the thickness is "<<thickness<<endl;
	}	

};
class Line:public Shape
{
	int start,end;
	public:
	void setvalue()
	{
		cout<<"Enter the start and end point "<<endl;
		cin>>start;
		cin>>end;		
	}

	void display()
	{
		cout<<" start and end point are "<<start<<"\t"<<endl;
		cout<<" __________________________ "<<endl;
	}
};
class Square:public Shape
{
	int side;
	public:
	void setvalue()
	{
		cout<<"Enter the side of square in cm "<<endl;
		cin>>side;		
	}

	void display()
	{
	 cout<<" the side of square is "<<side<<" cm"<<endl;
	} 
};
class Rectangle:public Shape
{
	int length, breadth;
	public:
	void setvalue()
	{
		cout<<"Enter the length of rectangle in cm "<<endl;
		cin>>length;
		cout<<"Enter the breadth of rectangle in cm "<<endl;
		cin>>breadth;		
	}

	void display()
	{
	 cout<<"the length of rectangle in cm "<<length<<endl;
	 cout<<"the breadth of rectangle in cm "<<breadth<<endl;	
	}
};
class Circle:public Shape
{
	int radius;
	public:
	void setvalue()
	{
		cout<<"Enter the radius in cm "<<endl;
		cin>>radius;
    }

	void display()
	{
		cout<<"the radius of circle is (in cm)"<<radius<<endl;
	}
};
class Ellipse:public Shape
{
	int length,height;
	public:
	void setvalue()
	{
		cout<<"for start point"<<endl;
		Point::setvalue();
		cout<<"Enter the length of ellipse in cm "<<endl;
		cin>>length;
		cout<<"Enter the height of ellipse in cm "<<endl;
		cin>>height;
		
    }

	void display()
	{
		cout<<"for start point"<<endl;
		Point::getvalue();
		cout<<"the length of ellipse in cm "<<length<<endl;
		cout<<"the breadth of ellipse in cm "<<height<<endl;
	}	
};

int main()
{
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
		 Point *ptr = new Point();
    	 ptr->setvalue();}
    break;
  case 2:
    	 {
		 Point *ptr1 = new Line();
    	 ptr1->setvalue();}
    break;
  case 3:
    	{
		Point *ptr2 = new Square();
    	 ptr2->setvalue();}
    break;
  case 4:
    	 {
		 Point *ptr3 = new Rectangle();
    	 ptr3->setvalue();}
    break;
   case 5:
    	 {
		 Point *ptr4 = new Circle();
    	 ptr4->setvalue();}
    break;
    case 6:
    	 {
		 Point *ptr5 = new Ellipse();
    	 ptr5->setvalue();}
    break;
    case 7:
    	{ choice =0; }
    default:
    	cout<<"Wrong choice entered "<<endl;	
	}
	}
	return 0;

}


