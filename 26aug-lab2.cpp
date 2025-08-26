#include <iostream>
using namespace std; 
class factorial{
    int fact; 
    int n;
    public:
     factorial(int a){
        n = a;
        fact = 1;
        for(int i = 1; i<=a; i++){
            fact *= i; 
        }
     }
     void display(){
        cout<<"factorial of "<<n<<" is = "<<fact<<endl ;
     }
};
int main(){
    factorial f1(5);
    f1.display();
    
}