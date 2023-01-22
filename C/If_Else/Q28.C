#include<stdio.h>
#include<conio.h>
void main(){
float rate,hrs,c,d,e,f,g,h;
clrscr();
printf("Rate per hour:");
scanf("%f",&rate);
printf("Total hours:");
scanf("%f",&hrs);
if (hrs<=35){
  c=rate*hrs;
  printf("Weekly Wage:%f",c);}
else if(hrs>35 && hrs<=55){
  d=hrs-35;
  e=d*2*rate;
  f=35*rate;
  g=f+e;
  printf("Weekly Wage:%f",g);}
else{
  c=rate*35;
  e=2*rate*20;
  f=hrs-55;
  g=f*2.5*rate;
  h=e+c+g;
  printf("Weekly Wage:%f",h);}
getch();
}

