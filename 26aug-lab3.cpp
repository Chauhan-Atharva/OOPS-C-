#include<iostream>
using namespace std; 
class Fibo{
    int f ; 
    int s; 
    public: 
    Fibo(){
        f = 0; 
        s = 1; 
    }
    Fibo(Fibo & F){
        f = F.s;
        s = F.f + F.s;
    }
    void display(){
        cout<<f<<" "<<endl;
    }
};
int main(){
    Fibo f1; 
    cout<<"Enter the number of terms in the fibonacci series: "<<endl;
    int n; cin>>n; 
    cout<<"the fibonacci series is : "<<endl; 
    f1.display();
    for(int i =0; i<n-1; i++){
        
        Fibo temp = f1; 
        f1 = temp ; 
        temp.display();
    }
    return 0; 
}