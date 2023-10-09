#include<iostream>
using namespace std;

class Student{
	int rollNo=21;
	int m1,m2;
	public :
	Student( int m1,int m2){
		this->m1 = m1;
		this->m2 = m2;
	}
	 static int get1(){ 
	 
	 	return (m1+m2);
	 }
	
};

class Sports{
	int m3;
		public :

	Sports(int m3)
	{
	this->m3 = m3;
	}
	
	static int get2(){
		return m3;
	}
};

class Result : public Student,public Sports
{
	float avg;
	int sum=0;
		public :
			void rst()
			{
				sum = (Student::get1())+(Sports::get2());
				avg  = (float)sum/5;
				cout<<avg;
			}


};

int main(){
	Student s(50,70);
	Sports sp(87);
	 
	Result r;
	r.rst();
	 return 0;
	
}
