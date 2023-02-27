#include<iostream>
#include<stdio.h>
using namespace std;

int strToNum(char num[]);

int main(){
    int i,NUM1,NUM2;
    int ctr=0;
    char exp[10],num1[5],num2[5],opr;

    cout<<"Enter an Expression:";
    gets(exp);

    for(i=0; exp[i] != '\0'; i++){

        if(exp[i] > 47 && exp[i] < 58){
            num1[ctr] = exp[i];
            ctr++;
            num1[ctr] = '\0';
        }

        else if(exp[i] > 41 && exp[i] < 48){
            opr = exp[i];
            for(i=0; num1[i] != '\0'; i++){
                num2[i] = num1[i];
            }
            num2[ctr] = '\0';
            num1[ctr] = ' ';
            ctr = 0;
        }
    }

    NUM1 = strToNum(num1);
    NUM2 = strToNum(num2);

    switch(opr){

    case '+':
        cout<<NUM2 + NUM1;
        break;
    
    case '-':
        cout<<NUM2 - NUM1;
        break;
    
    case '*':
        cout<<NUM2 * NUM1;
        break;
    
    case '/':
        cout<<NUM2 / NUM1;
        break;
    }

    return 0;
}


int strToNum(char num[]){
    int i,NUM=0;

    for(i=0; num[i] != '\0'; i++){ 
        NUM = NUM * 10;
        NUM = NUM + (num[i]-'0');
    }
    return NUM;
}

