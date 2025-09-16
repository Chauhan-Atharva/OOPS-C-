#include<iostream>
using namespace std; 
class Basic_Info{
    public:
    string name,gender; 
    int roll_no; 
    public:
    void getData(){
        cout<<"Enter name: "<<endl; 
        string n;
        cin>>n; 
        name = n; 
        cout<<"Enter gender: "<<endl; 
        string g;
        cin>>g; 
        gender = g; 
        cout<<"Enter roll no: "<<endl; 
        int r; 
        cin>>r;
        roll_no = r; 
    }
    void display(){
        cout<<"Name: "<<name<<" Roll no: "<<roll_no<<" gender: "<<gender<<endl; 
    }
};
class Physical_Fit: public Basic_Info{
    int height, weight; 
    public:
    void getData(){
        cout<<"Enter name: "<<endl; 
        string n;
        cin>>n; 
        name = n; 
        cout<<"Enter gender: "<<endl; 
        string g;
        cin>>g; 
        gender = g; 
        cout<<"Enter roll no: "<<endl; 
        int r; 
        cin>>r;
        roll_no = r; 
        cout<<"Enter weight in kg: "<<endl;
        int w; 
        cin>>w; 
        weight = w; 
        cout<<"Enter height in cm: "<<endl;
        int cm; 
        cin>>cm; 
        height = cm; 
    }
    void display(){
        cout<<"Name: "<<name<<" Roll no: "<<roll_no<<" gender: "<<gender<<endl; 
        cout<<"Weight in kg: "<<weight<<" Height in cm: "<<height<<endl;
    }
};
int main(){
    Physical_Fit p1; 
    p1.getData();
    p1.display();
}