#include <iostream>
using namespace std;
template <typename T>
void Swap(T &num1, T &num2){
    T temp = num1; 
    num1 = num2; 
    num2 = temp; 
}
int main(){
    cout<<"Enter first value a = "<<endl; 
    int a,b; 
    cin>>a;
    cout<<"Enter second value b = "<<endl; 
    cin>>b; 
    Swap<int>(a,b);
    cout<<"After swapping: "<<endl; 
    cout<<"a = "<<a<<" b = "<<b<<endl; 
}