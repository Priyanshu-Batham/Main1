#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
if(a>b){
  printf("%d is greater than %d",a,b);}
else{
  printf("%d is greater than %d",b,a);}
getch();}