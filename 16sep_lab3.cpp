#include<iostream>
using namespace std; 
class STUDENT{
    public:
    int roll_no;
    string name; 
};
class EXAM: public STUDENT{
    public:
    float m1, m2,m3,m4,m5,m6;
};
class RESULT: public EXAM{
    public:
    void display(){
        cout<<"Entered in display"<<endl; 
    float total_marks ;
    cout<<"Enter the student name: "<<endl; 
    string s; 
    getline(cin,s);
    name = s; 
    cout<<"Enter the roll number: "<<endl; 
    int r; cin>>r;
    roll_no  = r; 
    cout<<"Enter marks in 6 subjects: "<<endl; 
    cin>>m1;
    cin>>m2;
    cin>>m3;
    cin>>m4;
    cin>>m5;
    cin>>m6;
    total_marks =  m1+m2+m3+m4+m5+m6;
    cout<<"Name: "<<name<<" Roll number: "<<roll_no<<" Total marks: "<<total_marks<<endl; 
    }
};
int main(){
    RESULT r1; 
    r1.display();
}