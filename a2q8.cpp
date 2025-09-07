#include <iostream>
using namespace std; 
class Distance{
    int km , m; 
    public: 
    Distance(int v1, int v2){
        km = v1; 
        m = v2; 

    }
    float operator +(){
        return (float)(km) + (float)(m)/1000;
    }
    void display(){
        cout<<"Distance = "<<km<<" km "<<m<<" m."<<endl;
    }
};
int main(){
    Distance d1(2.5,3.5);
    d1.display();
    float total = +d1; 
    cout<<"Distance = "<<total<<" km."<<endl; 
    return 0;
}