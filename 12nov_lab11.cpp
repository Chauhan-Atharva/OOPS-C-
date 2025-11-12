#include <iostream>
using namespace std; 
int main(){
    try
    {
        cout<<"Enter number of elements in the array: ";
        int n; cin>>n;
        int arr[n];
        cout<<endl<<"Enter elements in the array"<<endl; 
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        cout<<"Enter the index to view: "; 
        int idx; cin>>idx;
        if(idx<0 || idx>=n){
            throw "The index you entered is not in array size, Enter again";
        }
        cout<<"Value at index "<<idx<<" = "<<arr[idx]<<endl; 
    }
    catch(const char* msg)
    {
        cout<<"Exception caught: "<<msg<<endl; 
    }
    return 0; 
    
}