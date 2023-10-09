#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cin >> argc;
	
	for (int i = 0; i < argc; i++)
		{cin >> argv[i];}
	
	cout << "You have entered " << argc << " arguments:"<< endl;

	return 0;
}

