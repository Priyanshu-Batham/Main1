#include<stdio.h>
#include<conio.h>
#define A printf("Total amount:%f",amt);
void main(){
  int unit;
  float amt;
clrscr();
  printf("Units consumed:");
  scanf("%d", &unit);
  if(unit<=100){
    printf("Total amount: 250");}
  else if(unit<=150 && unit>100){
    amt=250+((unit-100)*0.4);
    A}
  else if(unit<=200 && unit>150){
    amt=270+((unit-150)*0.5);
    A}
  else{
    amt=295+((unit-200)*0.60);
    A}
getch();
}