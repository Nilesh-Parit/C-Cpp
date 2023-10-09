#include<iostream>
using namespace std;
#include<cstring>

class Student{
	
	char name[12];
	int rollNo,sum=0;
	char dob[14];
	int marks[5];
	float avg;
	public:
		Student(char* nm,int rn,char *db){
			strcpy(name,nm);
			rollNo=rn;
			strcpy(dob,db);
	}
		
	void calAvg()
	{
			cout<<"Enter 5 marks of student"<<endl;
			for(int i =0;i<5;i++){
				cin>>marks[i];
				sum = sum+marks[i];
			}
			
			avg =(float)sum/5;
	}
		
		void sort(){ 
		int temp=0;
		for(int j =0;j<5;j++)
			for(int i=j+1;i<5;i++){
	
			 if(marks[j]>marks[i]){
			 	temp = marks[j];
			 	marks[j]=marks[i];
			 	marks[i] = temp;			 	
			 }
			}
			
			for(int i =0;i<5;i++){
				cout<<marks[i]<<endl;
			}
		}
		
	    
		
	
	 void display(){
	 	cout<<name<<"\t"<<rollNo<<"\t"<<dob<<endl;
		 cout<<"Average of student is "<<avg<<endl;
	 }
	
};
int main(){
	Student s("Anshu",3,"19/03/1998");
	s.calAvg();
	
	s.display();
	s.sort();
	
	return 0;
}
