 #include <iostream>
using namespace std;

class LaserPrinter
{
public:
    void print() 
	{
        cout<< "Printing with laser technology..." <<endl;
    }
    void scan()
	{
        cout<< "Scanning with laser technology..." <<endl;
    }
};

class InkjetPrinter
{
public:
    void print()
	{
    	cout<< "Printing with inkjet technology..." <<endl;
    }
    void copying()
	{
    	cout<< "Copying with inkjet technology..." <<endl;
    }
};
class MultifunctionPrinter
{
public:
    void print() 
	{
        cout << "Printing with Multifunction Printer" <<endl;
    }
    
    friend void maintenance();
};

void maintenance()
{
	cout<<"Doing Maintenance..."<<endl;
}

int main()
{
    LaserPrinter lp1;
    InkjetPrinter ip1;
    MultifunctionPrinter mp1;
       
	lp1.print(); 
	ip1.print();
	mp1.print();

    maintenance();

    return 0;
}
