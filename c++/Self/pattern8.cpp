#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++){
        int z=a-i;
        for(int j=1;j<=z;j++){
            cout<<"  ";
        }
        for(int j=1;j<=a;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}