#include<stdio.h>
#include<conio.h>
#define A printf("\nTotal charge: %d paise",g);
void main(){
int d,g;
clrscr();
printf("How many days later the\nbook is returned?:");
scanf("%d",&d);
if (d<=5){
  g=40*d;
  A}
else if (d>5 && d<=10){
  g=65*d;
  A}
else{
  g=80*d;
  A}
getch();
}