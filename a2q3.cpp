#include <iostream>
using namespace std; 
class Library{
    string bookName;
    int pages; 
    public:
    static int count; 
    Library(string n, int pg){
        bookName = n; 
        pages = pg; 
        count++;
    }
    Library(const Library &book){
        bookName = book.bookName;
        pages = book.pages;
        count++;
    }
};
int Library:: count = 0; 
int main(){
    Library b1("Physics" , 240);
    Library b2("Atomic Habits", 260);
    Library b3 = b2; 
    cout<<"Total no of books in the library = "<<Library::count<<endl; 
    return 0;
}