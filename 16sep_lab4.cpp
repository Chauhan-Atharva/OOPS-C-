#include <iostream>
#include <cmath>
using namespace std; 
class SHAPE{
    public:
    double d1,d2; 
    virtual void getData(){
        cout<<"Enter value 1: "<<endl; 
        cin>>d1; 
        cout<<"Enter value 2: "<<endl; 
        cin>>d2;
    }
    virtual void display(){

    }
};
class RECTANGLE : public SHAPE{
    public: 
    RECTANGLE(){
        cout<<"Enter the length and breadth of the rectangle: "<<endl; 
    }
    void display(){
        cout<<"The area of rectangle is: "<<d1*d2<<endl; 
    }
};
class TRIANGLE : public SHAPE{
    public:
    double d3;
    TRIANGLE(){
        cout<<"Enter the sides of the triangle: "<<endl; 
    }
    void display(){
        cout<<"Enter vlaue 3: "<<endl; 
        cin>>d3; 
        double s = (d1+d2+d3)/2;
        double area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
        cout<<"The area of triangle is: "<<area<<endl; 
    }
};
int main(){
    RECTANGLE r1; 
    r1.getData();
    r1.display();
    TRIANGLE t1; 
    t1.getData();
    t1.display();

}