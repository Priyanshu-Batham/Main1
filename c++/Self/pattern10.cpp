#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<"  ";
        }
        int z=i;
        for(z;z>=1;z--){
            cout<<z<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }   
    return 0;
}
//watch this vdo first for logic vdo:11, 12:43