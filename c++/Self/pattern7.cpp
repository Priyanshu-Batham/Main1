#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            int z=i+j;
            if(z%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}