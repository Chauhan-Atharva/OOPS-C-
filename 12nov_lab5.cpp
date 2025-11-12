#include <iostream>
#include<fstream>
using namespace std; 
int main(){
    ifstream infile("newFile.txt");
    if(!infile){
        cout<<"Error while opening the file: Try again"<<endl; 
    }
    cout<<"Data of file: "<<endl; 
    cout<<endl; 
    string line; 
    while(getline(infile,line)){
        cout<<line<<endl; 
    }
    cout<<endl; 
    cout<<"Complete file displayed"<<endl;
    infile.close();
    cout<<"File closed"<<endl; 


}