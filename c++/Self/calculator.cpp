#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    char c;
    cout<<"enter an operator from +,-,*,/ :";
    cin>>c;

    switch(c){
        case '+':
        cout<<a+b;
        break;

        case('-'):
        cout<<a-b;
        break;

        case('*'):
        cout<<a*b;
        break;

        case('/'):
        cout<<a/b;
        break;
    }
    
    return 0;
}