#include <iostream>
#include <vector>
using namespace std; 
class Student{
    public:
    string name;
    int  roll_no;
    public:
    Student(string n , int rno){
        name = n;
        roll_no = rno; 
    }
    void display(){
        cout<<"Name: "<<name<<" Roll no: "<<roll_no<<endl; 
    }
    ~Student(){
        cout<<name<<" destroyed , freeing memory"<<endl; 
    }
};
class StudentList{
    vector<Student*> s; 
    public:
    StudentList(){
        cout<<"Student list created"<<endl; 
    }
    void addStudent(string name, int rno){
        s.push_back(new Student(name,rno));
        cout<<name<<" added to list"<<endl;
    }
    void displayAllStudents(){
        for(Student *p : s){
            p->display();
        }
    }
    ~StudentList(){
        cout<<"Destroying the Student list"<<endl;
        for(Student *p : s){
            delete p;
        }
        cout<<"All students freed"<<endl; 
    }
};
int main(){
    StudentList S;
    S.addStudent("nick", 1);
    S.addStudent("john", 2);
    S.addStudent("Alexander", 3);
    S.addStudent("Benjamin", 4);
    S.displayAllStudents();
}