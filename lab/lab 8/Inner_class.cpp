#include<iostream>
using namespace std;
class A {
   public:
   class B {
      int num;
      public:
      void get(int n) {
         num = n;
      }
      void display() {
         cout<<"The number is "<<num;
      }
   };
};
int main() {
   cout<<"Inner Classes"<< endl;
   A :: B obj;
   obj.get(67);
   obj.display();
   return 0;
}
