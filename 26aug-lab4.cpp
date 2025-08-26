#include<iostream>
using namespace std; 
class track{
    public:
    static int number; 
    public:
    track(){
        number ++; 
    } 
    void display(){
        cout<<"the current no of objects = "<<number<<endl; 
    }
    ~track(){
        number --;
    }
};
int track:: number = 0;
int main(){
    // cout<<track::number;
    track t1;
    t1.display();
    track t2;
    t2.display();
    track t3;
    t3.display();
    track t4;
    t4.display();

}