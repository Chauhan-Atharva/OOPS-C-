#include <iostream>
using namespace std; 
class Polynomial{
    private:
    int n; 
    int coefficient[100] ; 
    int exponent[100]; 
    public:
    void input(){
        cout<<"enter the number of terms: "<<endl;
        cin>>n;
        cout<<"enter each term - first the coefficient and then the exponent"<<endl; 
        for(int i =0; i<n; i++){
            cout<<i<<" term"<<endl;
            cout<<"coefficient: "<<endl; 
            cin>>coefficient[i];
            cout<<"exponent: "<<endl;
            cin>>exponent[i];
        }
    }
    void add(Polynomial p1, Polynomial p2){
        Polynomial p3 = p1+p2;
        cout<<p3.n<<endl; 
        cout<<"inside add"<<endl; 
        for(int i =0; i<p3.n; i++){
            cout<<p3.coefficient[i]<<"x^"<<p3.exponent[i]<<" + ";
        }
        cout<<endl;  
    }
    Polynomial operator +(Polynomial & p){
        Polynomial p3; 
        int j =0; 
        int N;
        int count = 0; 
        if(n < p.n){
            N = n; 
        }
        else{ 
            N = p.n;
        }
    for(int i =0; i<N; i++){
        if(exponent[i] == p.exponent[i]){
            p3.exponent[j] = exponent[i];
            p3.coefficient[j] = coefficient[i] + p.coefficient[i];
            j++;
        }
        else{
            if(exponent[i] > p.exponent[i]){
                p3.coefficient[j] = coefficient[i];
                p3.exponent[j] = exponent[i];
                j++;
                p3.coefficient[j] = p.coefficient[i];
                p3.exponent[j] = p.exponent[i];
                j++;
            }
            else{
                p3.coefficient[j] = coefficient[i];
                p3.exponent[j] = exponent[i];
                j++;
                p3.coefficient[j] = p.coefficient[i];
                p3.exponent[j] = p.exponent[i];
                j++;
            }
        }
    }
    if(n < p.n){
            N = n; 
            for(int k = N; k<p.n; k++){
                p3.coefficient[j] = p.coefficient[k];
                p3.exponent[j] = p.exponent[k];
                j++;
            }
        }
        else{ 
            N = p.n;
            for(int k = N; k<n; k++){
                p3.coefficient[j] = coefficient[k];
                p3.exponent[j] = exponent[k];
                j++;
            }
        }
    p3.n = j;
    return p3;
    }
};
int main(){
    Polynomial p1; 
    p1.input();
    Polynomial p2;
    p2.input();
    Polynomial p3 ;
    p3.add(p1,p2);
}