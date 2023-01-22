#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the number of rows:";
    cin>>row;
    cout<<"enter the number of columns";
    cin>>col;
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
            if(a==1 || a==row){
                cout<<"*";
            }
            else if(b==1 || b==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}