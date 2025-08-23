//assignment 1 q1
#include <iostream>
using namespace std;
void printMessage(string name = "Nobody", int age = 22){
    cout<<"Name: "<<name<<" Age: "<<age<<endl; 
}
int main(){
    cout<<"Case 1: "<<endl; 
    printMessage();
    cout<<"Case 2: "<<endl; 
    printMessage("ATHARVA");
    cout<<"Case 3: "<<endl; 
    printMessage("ATHARVA",19);
}