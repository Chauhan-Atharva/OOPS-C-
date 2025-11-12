#include <iostream>
using namespace std; 
int main(){
    try
    {
        int a,b; 
        cout<<"Enter dividend: ";
        cin>>a;cout<<endl;
        cout<<"Enter divisor: ";
        cin>>b;cout<<endl; 
        if(b ==0 ){
            throw "Division by 0 error: the divisor can't be 0, Enter again"; 
        }
        cout<<"quotient = "<<a/b<<endl; 
    }
    catch(const char*msg)
    {
        cout<<"Exception caught: "<<msg<<endl; 
    }
    return 0; 
    
}