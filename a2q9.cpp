#include <iostream>
using namespace std; 
class String{
    char * str; 
    int len; 
    public:
    String(int l, string stri){
        len = l;
        str = new char[len+1];
        int i =0;
        for(; i<l; i++){
            str[i] = stri[i];
        }
        str[i] = '\0';
    }
    String(String &obj){
        len = obj.len;
        int i =0; 
        str = new char[len+1];
        for(; i<len; i++){
            str[i] = obj.str[i];
        }
        str[i] = obj.str[i];
    }
    String operator +(String n){
        int length = len + n.len;
        string New = "";
        int i =0;
        for(; i<len; i++){
            New += str[i];
        }
        int j = i; 
        for(; j<length; j++){
            New += n.str[j-i];
        }
        String c(length, New);
        return c; 
    }
    void operator == (String n){
        bool isEqual = true;
        if(len != n.len){
            isEqual = false; 
        }
        else{
            for(int i =0; i< len; i++){
                if(str[i] != n.str[i]){
                    isEqual = false;
                    break; 
                }
            }
        }
        if(isEqual == true){
            cout<<"Both strings are equal"<<endl; 
        }
        else{
            cout<<"Both strings are not equal"<<endl; 
        }
    }
    void display(){
        cout<<"the string is "<<endl; 
        for(int i =0; i<len; i++){
            cout<<str[i];
        }
    }
    ~String(){
        delete[] str;
    }
};
int main(){
    String s1(4,"nick");
    String s2(5, "jonny");
    String s3 = s1+s2; 
    s3.display();cout<<endl; 
    String s4(10,"Alexander");
    s4==s3; 
    return 0;
}