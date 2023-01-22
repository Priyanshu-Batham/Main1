#include<stdio.h>
#include<conio.h>
void fibonacci(int x);   //declared a function fibonacci

void main(){
  int num;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  fibonacci(num);   //used the fibonacci function inside main funciton
  getch();
  }

void fibonacci(int x){
  int a=0,b=1,c=0,l1;          //making the fibonacci function
  printf("%d %d ",a,b);
  for(l1=0;l1<x-2;l1++){
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
    }
  }