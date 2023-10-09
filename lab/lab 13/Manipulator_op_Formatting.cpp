#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string.h>
#include<stdlib.h>
#include<iomanip>
 
using namespace std;
 
int main()
{
	char string1[50]="IET CDAC";
	
	cout<<"\t\t\t"<<"Normal output"<<"\t\t\t"<<endl;
	
	cout<<"Enter the Name - ";
	cin>>string1;
	
	cout<<"output : "<<string1;
	fflush(stdin);
	
	cout<<"\n Enter full name : ";
	cin.getline(string1,25);
		
	cout<<"output with white spaces\n";
	puts(string1);
	
	cout<<"__________"<<"Output Formatting "<<"__________";
	cout<<"\n Enter String : ";
	cin>>string1;
	
	cout<<"Formatted output "<<endl;
	cout<<" \t  "<<string1<<endl;
	fflush(stdin);
	
	cout<<"By Setwidth ";
	cin>>string1;
	cout<<setw(100)<<string1<<endl;
	fflush(stdin);
	
	float pi;
	cout<<"By SetPrecision - No =  ";
	cin>>pi;
	cout<<setprecision(4)<<pi<<endl;

	cout<<"By SetFill ";
	cin>>string1;
	cout<<setfill('*')<<setw(10)<<" ";
	cout<<string1<<endl;
	fflush(stdin);
	
	cout<<"Input string with whitespaces : ";
	cin.getline(string1,25);
	fflush(stdin);
	
	istringstream name(string1);
	string newName;
	
	name>>ws>>newName;
	cout<<"Output without whitespace : ";
	cout<<newName;

	return 0;
}
