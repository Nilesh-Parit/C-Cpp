#include <iostream>
using namespace std;
int main(int num, char* argv[]) {
    cout<<"enter a number"<<endl;
    cin>>num;
    cout << "Total number of command-line arguments: " << num << endl;


    for (int i = 1; i < num; i++) {
        cout << "Argument " << num << ": " << argv[i] <<endl;
    }

    return 0;
}

