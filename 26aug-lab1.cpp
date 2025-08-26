//greatest of 2 nos 
#include <iostream>
using namespace std; 
class A; 
class B{
    int value; 
    public:
    B(int b){
        value = b; 
    }
    friend void maximum(A,B);
};
class A{
    int value; 
    public:
    A(int a){
        value = a; 
    }
    friend void maximum(A,B);
};
void maximum(A a, B b){
    cout<<"Bigger value is "<< (a.value > b.value ? a.value: b.value)<<endl;
}
int main(){
    A a(10);
    B b(20);
    maximum(a,b);
}