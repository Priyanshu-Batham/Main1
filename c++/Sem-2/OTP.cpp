#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main(){
    int otp[5],num,flag=0;
    cout<<"Generating OTP..."<<endl;
    for(int i=0;i<5;i++){
        otp[i]=rand()%1000;
        cout<<otp[i]<<endl;
    }
    sleep(3);
    system("cls");
    
    cout<<"Enter the otp (within 3 second):";
    cin>>num;
    
    for(int i=0;i<5;i++){
        if(otp[i]==num){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Valid OTP";
    }
    else{
        cout<<"Invalid OTP";
    }
    getch();       
    return 0;
}