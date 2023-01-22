#include<iostream>
using namespace std;
int main(){
    int a;
    int l=1;
    cout<<"enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<l<<" ";
            l+=1;
        }
        
        cout<<endl;
    }
    
    return 0;
}