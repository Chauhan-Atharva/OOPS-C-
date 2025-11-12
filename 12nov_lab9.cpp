#include <iostream>
using namespace std; 
class Base{
    int a, b;
    public:
    Base(int n1, int n2){
        a = n1; 
        b = n2;
    } 
    friend class Child;
};
class Child{
    public:
    void display(Base & b){
        cout<<"a = "<<b.a<<endl; 
        cout<<"b = "<<b.b<<endl; 
    }
    void sum(Base & b){
        cout<<"a+b  = "<<b.a + b.b<<endl; 
    }
};
int main(){
    Base B(10,20);
    Child C; 
    C.display(B);
    C.sum(B);
    return 0; 
}