#include<iostream>
using namespace std;
int main(){
    int a;
    int b=0;

    while(b==0){
        cout<<"enter a value";
        cin>>a;
        
        if(a<0){
            cout<<"please enter a positive number"<<endl;
        }
        else if(a>10){
            cout<<"please enter a number less than 10"<<endl;
        }
        else{
            while(a<=10){
                cout<<a<<endl;
                a+=1;
                }
        
        }
    
    }

    return 0;
}