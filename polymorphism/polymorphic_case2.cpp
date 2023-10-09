#include<iostream>
using namespace std;

class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		void show(){
			cout<<"Show function of emp class"<<endl;
		}
		
	virtual	int findsalary()=0;
};
employee::employee()
{
	cout<<"in default of employee "<< endl;
	id=0;
}
employee::employee(int i)
{
	cout<<"in para of employee "<< endl;
	id=i;
}
void employee :: display()
{
	cout<< " id of an employee is "<<id<<endl;
}
class wageemployee:public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
		void show(){
			cout<<"Show function of wageclass"<<endl;
		}
};
wageemployee::wageemployee()
{
	cout<<"in default of wageemployee "<< endl;
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(i)
{
	cout<<"in para of wageemployee "<< endl;
	hrs=h;
	rate=r;
}
int wageemployee::findsalary()
{
	return hrs * rate;
}
void wageemployee :: display()
{
	employee :: display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
class salesmanager:public wageemployee
{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();
};
salesmanager::salesmanager()
{
	cout<<"in default of sales "<< endl;
	sales=comm=0;
}
salesmanager::salesmanager(int i,int h,int r,int s,int c):wageemployee(i,h,r)
{
	cout<<"in para of salesmanager "<< endl;
	sales=s;
	comm=c;
	
}
int salesmanager::findsalary()
{
	return (wageemployee::findsalary()+sales*comm);
}
void salesmanager :: display()
{
	wageemployee :: display();
	cout<<"sales of an employee "<<sales<<endl;
	cout<<"commision of an employee "<<comm<<endl;
}

int main()
{
	employee *ptr = new salesmanager()  ;
	cout<<ptr->findsalary()<<endl;
	ptr->show();
	wageemployee w(50000,8,2000);
	ptr = &w;
	salesmanager s;
	s.show();
	

	cout<<ptr->findsalary()<<endl;
  
	cout<<ptr->findsalary()<<endl;
	}
