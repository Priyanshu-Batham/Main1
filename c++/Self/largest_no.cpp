#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"enter the last and final number:";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"the largest number="<<a;
        }
        else{
            cout<<"the largest number="<<c;
        }
    }
    else{
        if(b>c){
            cout<<"the largest number="<<b;
        }
        else{
            cout<<"the largest number="<<c;
        }
    }
    
    return 0;
}