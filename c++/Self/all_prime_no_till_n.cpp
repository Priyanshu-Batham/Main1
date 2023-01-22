#include<iostream>
using namespace std;
int main(){
    int str;
    int end;
    cout<<"enter the starting number:";
    cin>>str;
    cout<<"enter the ending number:";
    cin>>end;
    for(str;str<end;str++){
        for(int div=2;div<=str;div++){
            if(div==str){
                cout<<str<<endl;
            }
            if(str%div==0){
                break;
            }
        }
    }    
    return 0;
}