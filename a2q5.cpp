#include <iostream>
using namespace std;
class Complex{
    float img; 
    float real;
    public:
    Complex(float r, float i){
        img = i; 
        real = r; 
    }
    void operator *(Complex & c){
        cout<<(real * c.real) - (img * c.img)<< " + i"<<(real*c.img) + (img*c.real)<<endl;
    }
};
int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    c1*c2;
    return 0;
}