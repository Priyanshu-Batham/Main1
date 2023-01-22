#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int s;
        for(s=1;s<=n-i;s++){
            cout<<"  ";
        }
        for(;s<=n+i-1;s++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    /*
    for(int i=1;i<=n;i++){
        int s;
        for(s=1;s<i;s++){
            cout<<"  ";
        }
        for(;s<=2*n-i;s++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }  */
    return 0;
}