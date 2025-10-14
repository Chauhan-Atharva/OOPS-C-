#include <iostream>
using namespace std; 
template <typename myData> void Swap(myData a, myData b){
    myData c = a; 
    a = b; 
    b = c; 
    cout<<"first value = "<<a<<endl; 
    cout<<"second value = "<<b<<endl; 
}
int main(){
    int a = 10; 
    int b = 20; 
    cout<<"after swapping: "<<endl; 
    Swap<int>(a,b);
    Swap<double>(12.5,33.5);
    Swap<char>('a', 'e');
    return 0;
}