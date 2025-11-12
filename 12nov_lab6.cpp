#include <iostream>
#include<fstream>
using namespace std; 
int main(){
    ofstream outfile("CopyFile.txt");
    ifstream infile("newFile.txt");
    if(!outfile || !infile){
        cout<<"File can't be opened: Try again"<<endl;
        return 0; 
    }
    string line; 
    while(getline(infile, line)){
        outfile<<line<<endl; 
    }
    cout<<"File copied "<<endl; 
    cout<<"Output in copied file: "<<endl<<endl; 
    infile.close();
    outfile.close();
    ifstream infile1("CopyFile.txt");
    string line1; 
    while(getline(infile1,line1)){
        cout<<line1<<endl; 
    }
    infile1.close();
    cout<<endl<<"File closed "<<endl; 
    return 0; 

}