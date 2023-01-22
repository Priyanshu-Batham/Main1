#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    int z=a;
    for(a;a>=1;a--){
        for(int j=1;j<=a;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}