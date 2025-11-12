#include <iostream>
#include <fstream>
#include <limits>
using namespace std;
int main(){
    ofstream outfile("newFile.txt");
    if(!outfile){
        cout<<"Cannot open file: Try again"<<endl; 
        return 0; 
    }
    cout<<"Enter number of lines to enter in the file: ";
    int n ; 
    cin>>n; cout<<endl; 
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    
    for(int i =0; i<n; i++){
        string n;
        cout<<"Enter line: "<<i+1<<" : ";
        getline(cin,n);
        cout<<endl; 
        outfile<<n<<endl; 
    }
    cout<<"All lines inserted into the file"<<endl; 
    outfile.close();
    cout<<"File closed: "<<endl;
    return 0; 
} 
