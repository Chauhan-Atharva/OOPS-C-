//greatest of 2 nos 
#include <iostream>
using namespace std; 
class A; 
class C;
class B{
    int value; 
    public:
    B(int b){
        value = b; 
    }
    friend void maximum(A,B,C);
};
class A{
    int value; 
    public:
    A(int a){
        value = a; 
    }
    friend void maximum(A,B,C);
};
class C{
    int value; 
    public:
    C(int c){
        value = c; 
    }
    friend void maximum(A,B,C);
};
void maximum(A a, B b, C c ){
    int h = a.value > b.value ? a.value: b.value;
    cout<<"Biggest value is "<< (h > c.value ? h: c.value)<<endl;
}
int main(){
    A a(10);
    B b(20);
    C c(30);
    maximum(a,b,c);
}