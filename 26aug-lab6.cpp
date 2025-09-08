#include<iostream>
using namespace std ; 
class Value{
    int value ;
    public:
    Value(int val){
        value = val; 
    }
    friend void display(Value & v);
};
inline void display(Value & v){
    cout<<"The value of object using friend function declared inline = "<<v.value<<endl; 
}
int main(){
    Value v(100);
    display(v);
    return 0; 
}