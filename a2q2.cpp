#include <iostream>
using namespace std ;
class BankAccount{
    int accountNumber, balance; 
    string accountHolder; 
    public:
    BankAccount(int ano, int bl , string ahol){
        accountHolder = ahol; 
        balance = bl; 
        accountNumber = ano; 
    }
    void deposit(int value){
        balance += value; 
        cout<<"amount deposited"<<endl;
    }
    void withdraw(int value){
        balance -= value;
        cout<<"amount withdrawn"<<endl; 
    }
    void checkBalance(){
        cout<<"Account Balance = "<<balance<<endl; 
    }
    void operator >(BankAccount v){
        if(balance > v.balance){
            cout<<balance<<" is more "<<endl; 
        }
        else{
            cout<<v.balance<<" is more"<<endl; 
        }
    }
};
int main(){
    BankAccount b1(121, 12000, "John");
    b1.deposit(2000);
    b1.checkBalance();
    b1.withdraw(1000);
    b1.checkBalance();
    BankAccount b2(122, 15000, "Arun");
    b1>b2;
}