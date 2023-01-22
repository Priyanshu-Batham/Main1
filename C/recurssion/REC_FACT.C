//Factorial of a number using recurssion
#include<stdio.h>
#include<conio.h>
int rec(int a);
void main(){
  int num,fact;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&num);
  fact=rec(num);
  printf("Factorial of %d: %d",num,fact);
  getch();
  }

int rec(int a){
  if(a==0){
    return 1;
    }
  else{
    return a * rec(a-1);
    }
  }