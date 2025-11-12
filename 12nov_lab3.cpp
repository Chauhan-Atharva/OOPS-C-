#include<iostream>
using namespace std; 
template <typename T>
class Sum{
    T a;  
    T b; 
    public: 
    Sum(T n1, T n2){
        a = n1; 
        b = n2; 
    }
    void add(){
        cout<<"Adding both values: a+b = "<<a+b<<endl;
    }
};
int main(){
    Sum<int> intadd(12,99);
    Sum<double> doubleadd(37.62,99.58);
    intadd.add();
    doubleadd.add();
    return 0; 
}