#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int sp=2*a - 2*i;
        for(int j=1;j<=sp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
    int z=a;
    for(z;z>=1;z--){
        for(int j=1;j<=z;j++){
            cout<<"* ";
        }
        int sp=2*a - 2*z;
        for(int j=1;j<=sp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=z;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}