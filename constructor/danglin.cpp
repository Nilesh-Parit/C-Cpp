#include<iostream>
using namespace std;
#include<string.h>
class string1{
	
	int len;
	char *ptr;
	public :
		string1(char *);
		void stringdisplay();
		~string1();
};

string1::string1(char * sptr){
	len = strlen(sptr);
	ptr= new char[len+1];
	strcpy(ptr,sptr);
}
 void string1 :: stringdisplay(){
 	cout<<"length is "<<len<<endl;
 	cout<<"string is "<<ptr<<endl;
 }
string1 :: ~string1(){
	cout<<"Destructor is called"<<endl;
	if(ptr)
	delete[] ptr;
	ptr = NULL;
	}
	
	int main(){
		
		string1 c1("shahr");
		c1.stringdisplay();
		
		{
			string1 c2(c1);
			c2.stringdisplay();
			//c2.~string1();
			
		}
		c1.stringdisplay();
		
	}

