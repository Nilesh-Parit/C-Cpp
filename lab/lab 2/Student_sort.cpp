#include <iostream>     
using  namespace std;  
#include<string.h>

class Date
{
	int dd,mm,yy;
	public:
		void getDate()
		{
			cout<<"enter date\n";
			cin>>dd>>mm>>yy;
		}
		void showDate()
		{
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class Student
{
	int rollno;
	char name[10];
	Date d;
	
	public:
		void getData()
		{
			cout<<"enter rollno\n";
			cin>>rollno;
			cout<<"enter student name\n";
			cin>>name;
			d.getDate();
		}
		void showData()
		{
			cout<<rollno<<"\t\t"<<name<<"\t\t";
			d.showDate();
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setname(char* n)
		{
			strcpy(name,n);
		}
		
		
};
int main()
{
	
	int i,n,j;
	cout<<"enter  no of student \n";
	cin>>n;
	Student s[n],temp;
	for(i=0;i<n;i++)
	{
		s[i].getData();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].showData();
		
	}
	cout<<endl<<"Sorted Data"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].showData();
}
