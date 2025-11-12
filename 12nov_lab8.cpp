#include <iostream>
using namespace std; 
class Student{
    public: 
    string name;
    string branch; 
    int roll_no;
    char sex; 
    int marks[5];
    public: 
    // Student(string n, string b, int rno, char s, int arr[]){
    //     name = n; 
    //     branch = b; 
    //     roll_no = rno; 
    //     sex = s;
    //     for(int i =0; i<5; i++){
    //         marks[i] = arr[i];
    //     }
    // }
};
int main(){
    cout<<"Enter the number of students: "; 
    int n; cin>>n; cout<<endl; 
    string nam; string b; 
    int rno, arr[5]; 
    char s; 
    Student st[n];
    for(int i =0; i<n; i++){
        cout<<"Enter name: "; cin>>nam; 
        st[i].name = nam; 
        cout<<endl<<"Enter branch: "; cin>>b; 
        st[i].branch = b; 
        cout<<endl<<"Enter roll No: "; cin>>rno; 
        st[i].roll_no = rno; 
        cout<<endl<<"Enter sex: "; cin>>s; 
        st[i].sex = s; 
        cout<<endl<<"Enter marks in 5 subjects: "<<endl; 
        for(int j = 0; j<5; j++){
            cin>>arr[j];
            st[i].marks[j] = arr[j]; 
        }
    }
    cout<<"Students with percentage > 70%: "<<endl;
    
    for(int i =0; i<n; i++){
        float sum = 0; float per;
        for(int j =0; j<5; j++){
            sum+= st[i].marks[j];
        }
        per = sum/500 * 100;
        if(per > 70){
            cout<<"Name: "<<st[i].name<<" Percentage: "<<per<<endl; 
        }
    }
    return 0; 
}