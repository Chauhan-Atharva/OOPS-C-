#include <iostream>
using namespace std; 
template <typename T>
T square(T n){
    return n*n; 
}
int main(){
    cout<<"Square of 17 = "<<square<int>(17)<<endl; 
    cout<<"Square of 37.9 = "<<square<double>(37.9)<<endl; 
    return 0; 
}