#include<stdio.h>
int isPrime(int n){
    int a=1;
    if(n==1){
        return 0;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int num,i,a;
    printf("Enter a number:");
    scanf("%d",&num);
    a=isPrime(num);
    if(a){
        printf("It is a prime");
    }
    else{
        printf("Its not a prime");
    }
    return 0;
}