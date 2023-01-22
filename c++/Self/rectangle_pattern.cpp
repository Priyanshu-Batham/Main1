#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row:";
    cin>>row;
    cout<<"enter col:";
    cin>>col;
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}   