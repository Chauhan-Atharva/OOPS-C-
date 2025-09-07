#include <iostream>
using namespace std; 
class Employee{
    public:
    char* name;
    int salary; 
    int id; 
    public:
    Employee(string Name, int sal, int i){
        int length = Name.length();
        name = new char[length];
        salary = sal; 
        id = i; 
        for(int i =0; i<length; i++){
            name[i] = Name[i]; 
        }
    }
    void getInfo(){
        cout<<name<<" "<<salary<<" "<<id<<endl; 
    }
    Employee(Employee & emp){
        id = emp.id;
        salary = emp.salary;
        name = new char[1000];
        *name = *emp.name;
    }
    ~Employee(){
        delete name; 
    }
};
int main(){
    Employee e1("John", 12000, 123);
    e1.getInfo();
    Employee e2("Nick", 14000, 234);
    (e2.name[0]) = 'T';
    e2.name[1] = 'O';
    e2.name[2] = 'M';
    e2.getInfo();
    e1.getInfo();
}