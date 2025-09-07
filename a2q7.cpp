#include <iostream>
#include <cmath>
using namespace std; 
class Shape{//this class becomes an abstract class as it has pure virtual func
    //you can't create objects of this class
    public:
    virtual void area() =0;//pure virtual func 
};
class Circle : public Shape{
    double r; 
    public:
    Circle(double val){
        r = val; 
    }
    void area(){
        cout<<"the area of the circle is = "<<3.14*r*r<<endl; 
        }
};
class Rectangle : public Shape{
    double l , b; 
    public:
    Rectangle(double v1, double v2){
        l = v1; 
        b = v2;
    }
    void area(){
        cout<<"the area of the rectangle is = "<<l*b<<endl; 

    }
};
int main(){
    Shape * sh[2];
    cout<<"Enter the radius of circle: "<<endl; 
    double r; cin>>r;
    cout<<"Enter the length of rectangle: "<<endl; 
    double l; cin>>l;
    cout<<"Enter the breadth of rectangle: "<<endl; 
    double b; cin>>b; 
    sh[0] = new Circle(r);
    sh[1] = new Rectangle(l,b);
    for(int i =0; i<2; i++){
        sh[i]->area();//runtime polymorphism 
    }
}