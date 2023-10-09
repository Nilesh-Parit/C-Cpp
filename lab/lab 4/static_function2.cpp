#include<iostream>
using namespace std;
 
 class Number
 {
 	public:
 		static int real ,img;
 		
		 Number()
 		{
 			cout << "Default constructor is called";
		}
		
		static void setnum(int r,int i)
		{
			real=r;
			img=i;
		}
		
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
 };
 
		int Number::real = 11;
		int Number::img = 12;
 
 int main()
 {
 		
	Number n1;
 	n1.setnum(5,7);
 	n1.display();
 	
 	Number n2;
 	n2.setnum(2,3);
 	n2.display();
 	
 	return 0;
 }
