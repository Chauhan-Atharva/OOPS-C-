#include <iostream>
using namespace std; 
template <typename T>
void add(T a, T b){
    cout<<"a+b = " <<a+b<<" Generic function template called"<<endl; 
}
void add(int a, int b){
    cout<<"a+b = "<< a+b<<" Overloaded function called"<<endl; 
}
int main(){
    add(2,5);//here the overloaded func will be called
    add(2.66,5.89);//here the generic function will be called
    return 0; 
}