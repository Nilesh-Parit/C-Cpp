#include<iostream>
using namespace std;
#include<string.h>

 class student{
 	
 	int rlln;
 	char name[50];
 	double fee;
 	
 	public:
 	
 	student(int , char[], double);
 	student(student &t){
 		rlln=t.rlln;
 		strcpy(name,t.name);
 		fee = t.fee;
	 }
	 void display();
 };
 
 student :: student(int r,char n[] ,double f){
 	  	cout<<"Copy constructor is called"<<endl;
 	rlln =r;
 	strcpy(name,n);
 	fee=f;
 	
 }
 void student::display(){
 	cout<<"Student name is "<<name<<endl;
 	cout<<"Student rollNo is "<<rlln<<endl;
 	cout<<"Student fee is "<<fee<<endl;
 }
  int main(){
  	student s( 3,"anshu",100000);
  	
  	student s1(s);

  	s.display();
  	s1.display();
  }
