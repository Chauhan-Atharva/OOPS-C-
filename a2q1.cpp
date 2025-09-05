#include <iostream>
using namespace std; 
class Inventory{
    int prdId, quantity ;
    string name;  
    public:
    static int count ;
    Inventory(int prdid, string Name, int Quantity){
        prdId = prdid; 
        name = Name; 
        quantity = Quantity;
        count ++;
    }
    static void total(){
        cout<<"the total number of products = "<<count<<endl ;
    }
};
int Inventory :: count = 0; 
int main(){
    Inventory a(123,"pencil", 12);
    Inventory b(124, "eraser", 10);
    Inventory c(125, "sharpner", 23);
    Inventory d(126, "mechanical pencil", 44);
    Inventory::total();
    return 0;
}