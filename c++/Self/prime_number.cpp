#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Please enter a number:";
    cin>>a;
    int counter=2;
    for(counter;counter<=a;counter++){
        if(counter==a){
            cout<<"it is a prime number";
            break;
        }
        if(a%counter==0){
            cout<<"it is not a prime number";
            break;
        }
    }

    return 0;
}