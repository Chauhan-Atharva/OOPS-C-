//assignment 1 ques 6
#include <iostream>
using namespace std; 
class A;
class B{
    int numB;
    public:
      B(int b){
        numB = b;
      }
      friend void display(A,B);
};
class A{
    int numA;
    public:
      A(int a){
        numA = a;
      }
      friend void display(A,B);
};
void display(A a, B b){
    cout<<"Value from A = "<<a.numA<<endl;
    cout<<"Value from B = "<<b.numB<<endl; 
}
int main(){
    A a(10);
    B b(20);
    display(a,b); 
    return 0; 
}
