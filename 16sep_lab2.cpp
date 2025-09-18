#include<iostream>
using namespace std; 
class First{
    public:
    string bookName; 
    int bookNo;
    public:
    void getData(){
        cin.ignore();
        cout<<"Enter name of book: "<<endl; 
        string n;
        getline(cin,n);
        bookName = n; 
        cout<<"Enter book no: "<<endl; 
        int r; 
        cin>>r;
        bookNo = r; 
    }
    void putData(){
        cout<<"Book name: "<<bookName<<" book number: "<<bookNo<<endl; 
    }
};
class Second{
    public: 
    string authorName, publisher; 
    public:
    void getData(){
        cin.ignore();
        cout<<"Enter name of author: "<<endl; 
        string n;
        getline(cin,n); 
        authorName = n; 
        cin.ignore();
        cout<<"Enter publisher: "<<endl; 
        string r; 
        getline(cin,r);
        publisher = r; 
    }
    void showData(){
         cout<<"Author name: "<<authorName<<" Publisher: "<<publisher<<endl; 
    }
};
class third : public First, public Second{
    int pages, yop; 
    public:
    void getData(){
        First::getData();
        Second::getData();
        cout<<"Enter no of pages: "<<endl; 
        int n;
        cin>>n; 
        
        pages = n; 
        cout<<"Enter year of publication: "<<endl; 
        int g;
        cin>>g; 
        yop = g; 
    }
    void display(){
        First::putData();
        Second::showData();
        cout<<"No of pages:  "<<pages<<" Year of Publication:  "<<yop<<endl; 
    }
};
int main(){
    third books[100]; 
    cout<<"enter no of books"<<endl; 
    int n; cin>>n;
    for(int i =0; i<n; i++){
        cout<<i+1<<" th book "<<endl; 
        books[i].getData();
    }
    cout<<"Library Information "<<endl; 
    for(int i =0; i<n; i++){
        books[i].display();
    }
    return 0;
}