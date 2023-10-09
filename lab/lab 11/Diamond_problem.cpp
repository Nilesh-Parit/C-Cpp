#include<iostream>
using namespace std;

class Animal
{
	public:
	void sound()
	{
		cout<<"Animal Sound"<<endl;
	}
};
class Dog:virtual public Animal 
{
};
class Cat:virtual public Animal
{
};
class Pet:public Dog,public Cat 
{
};

int main()
{
	Pet P1;
	P1.sound();
	return 0;
}
