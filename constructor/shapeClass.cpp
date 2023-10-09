#include<iostream>
using namespace std;
class Shape{//shape
	
	public:
	virtual void input(){
		cout<<"shape::input"<<endl;
	}
	
	virtual void calcArea()
{
	cout<<"shape::calarea"<<endl;
	}	
	
};
class Square:public Shape{//square
	
	int side;
	public:
      void input(){
		cout<<"enter side of square"<<endl;
		cin>>side;
		
	}
	void calcArea()
{
	int area;
	area=side*side;
	cout<<"area of square"<<area<<endl;
	
	}	
	
	
};
class Rect:public Shape{
		int l,b;
		public:
      void input(){
		cout<<"enter side of l and b"<<endl;
		cin>>l>>b;
		}
	
	void calcArea()
{
	int area;
	area=l*b;;
	cout<<"area of rect"<<area<<endl;
	
	}	};
	class Circle:public Shape{
		int radius;
		public:
      void input(){
		cout<<"enter radius"<<endl;
		cin>>radius;
		}
	
	void calcArea()
{
	double area;
	area=3.14*radius*radius;
	cout<<"area of rect"<<area<<endl;
	
	}	};
	class Elipse:public Shape{//elipse
		int a,b;
		public:
      void input(){
		cout<<"enter side a and b"<<endl;
		cin>>a>>b;
		}
	
	void calcArea()
{
	double area;
	area=a*b*3.14;
	cout<<"area of elipse"<<area<<endl;
	
	}	};
	
	class Point{
		int x, y;
		public:
			Point(int f,int j){
			x=f;
			y=j;
			}
		
		
	};
	class Line{
		int start,end;
		public:
			Line(int g,int h){
				start=g;
				end=h;
				
			}
		
		
	};
	

int main () {
	
	//menu driven code
	
	int ch;
	Shape* sptr=NULL;
	Rect r1;
	Square s1;
	Circle c1;
	Elipse e1;
	
//	sptr=&r1;
//	sptr->input();
//	sptr->calarea();

	do{
		cout<<"enter the shape for which you want to find the area"<<endl;
		cout<<"1:square \n2:rect \n3:circle \n4:elipse \n0:exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1://square
			sptr=&s1;
			
			break;
			case 2://rectanle
			sptr=&r1;
			break;
			case 3://circle
				sptr=&c1;
				break;
				case 4://elipse
				sptr=&e1;
					}
			
			if(sptr!=NULL){
				sptr->input();
				sptr->calcArea();
			}
			
		
		sptr=NULL;
	}while(ch!=0);
	
	
}

