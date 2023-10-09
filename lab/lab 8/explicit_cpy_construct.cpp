#include<iostream>
using namespace std;

class date{
	
	int dd,mm,yy;
	
	public :
		void show();
		date(int ,int,int);
		date(date &);
};
date::date(int d,int m,int y){
	dd=d;
	mm=m;
	yy=y;
}
 void date::show(){
 	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
 }
 date::date(date& new_d)
 {
 	dd=new_d.dd;
 	mm=new_d.mm;
 	yy=new_d.yy;
  } 
 int main(){
 	date d(4,8,2000);
 	date d1(d);
 	d.show();
 	d1.show();
 	return 0;
 }
