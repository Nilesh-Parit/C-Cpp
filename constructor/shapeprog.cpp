#include<iostream>
using namespace std;
class shape{
	
	
	public:
	virtual void input(){
		cout<<"shape::input"<<endl;
	}
	
	virtual void calarea()
{
	cout<<"shape::calarea"<<endl;
	}	
	
};
class square:public shape{
	
	int side;
      void input(){
		cout<<"enter side of square"<<endl;
		cin>>side;
		
	}
	void calarea()
{
	int area;
	area=side*side;
	cout<<"area of square"<<area<<endl;
	
	}	
	
	
};
class rect:public shape{
		int l,b;
      void input(){
		cout<<"enter side of l and b"<<endl;
		cin>>l>>b;
		}
	
	void calarea()
{
	int area;
	area=l*b;;
	cout<<"area of rect"<<area<<endl;
	
	}	};
	
	

int main () {
	
	//menu driven code
	
	int ch;
	shape* sptr=NULL;
	rect r1;
	square s1;
//	sptr=&r1;
//	sptr->input();
//	sptr->calarea();

	do{
		cout<<"1:square 2:rect 0:exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1://square
			sptr=&s1;
			
			break;
			case 2://rectanle
			sptr=&r1;}
			if(sptr!=NULL){
				sptr->input();
				sptr->calarea();
			}
			
		
		sptr=NULL;
	}while(ch!=0);
	
	
}
