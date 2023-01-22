#include<stdio.h>
#include<conio.h>
#include<math.h>
#define A pow((1+r/100),n)
#define pr printf("Total Amount:%f",a)
void main(){
float a,P,r,n;
clrscr();
printf("Enter Principal=");
scanf("%f",&P);
printf("Enter time in years=");
scanf("%f",&n);
if(n<=0.5){
  r=9;
  a=P*A;
  pr;
}
else if(n>0.5 && n<=1){
  r=10;
  a=P*A;
  pr;}
else if (n>1 && n<=3){
  r=11;
  a=P*A;
  pr;}
else {
  r=12;
 a=P*A;
  pr;}
getch();
}