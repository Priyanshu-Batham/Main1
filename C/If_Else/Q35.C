#include<stdio.h>
#include<conio.h>
void main(){
float a1,a2,d;
float b1,b2,t;
clrscr();
printf("Enter amount of Mill cloth:");
scanf("%f",&a1);
printf("\nEnter amount of Handloom items:");
scanf("%f",&a2);

if (a1<=1000)
{d=0.02*a1;
b1=a1-d;
}
else if (a1>1000 && a1<=5000){
d=0.2*a1;
b1=a1-d;}
else if (a1>5000 && a1<=10000){
d=0.4*a1;
b1=a1-d;}
else {
d=0.5*a1;
b1=a1-d;}

//For calculating Handloom discount
if (a2<=1000)
{d=0.05*a2;
b2=a2-d;
}
else if (a2>1000 && a2<=5000){
d=0.25*a2;
b2=a2-d;}
else if (a2>5000 && a2<=10000){
d=0.5*a2;
b2=a2-d;}
else {
d=0.6*a2;
b2=a2-d;
}
t=b1+b2;
printf("Total amount is:%f",t);
getch();
}
