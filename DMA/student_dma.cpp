#include<iostream>
using namespace std;
#include<stdlib.h>
 int main(){
 int n,m,i,sum=0;
 float avg;
  cout<<"Enter no of subject"<<endl;
  cin>>m;
  cout<<"Enter no of characters"<<endl;
  cin>>n;
  int *marks = new int[m];
  char* name = new char[n+1];
  cout<<"enter marks "<<endl;
  
  for( i = 0;i<m;i++){
  	cin>>marks[i];
  	sum = sum+marks[i];
  	
  }
  avg = (float) sum/m;
  cout<<"Enter name of student"<<endl;
  cin>>name;
  
  cout<<"name is "<<name<<endl;
  cout<<"Average is "<<avg;
  delete[] marks;
  delete[] name;
  
 }
