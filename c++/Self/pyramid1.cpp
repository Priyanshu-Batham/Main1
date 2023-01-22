#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number of rows:";
    cin>>a;
    for(int i=a;i>=1;i--){
        for(int b=1;b<=i;b++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}