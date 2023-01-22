#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    for(int i=1;i<=3;i++){
        if(i==1){
            int m=3;
            for(int j=1;j<=a;j++){
                if(j==m){
                    cout<<"* ";
                    m+=4;
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }

        else if(i==2){
            for(int j=1;j<=a;j++){
                if(j%2==0){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
            }
        else{
            int m=1;
            for(int j=1;j<=a;j++){
                if(j==m){
                    cout<<"* ";
                    m+=4;
                }
                else{
                    cout<<"  ";
                }
            }
        }
    }
    
    return 0;
}