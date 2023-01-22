#include<stdio.h>
#include<conio.h>
void main(){
  float charge,days,rate;
  int seas;
  clrscr();
  printf("Enter the no for\ncorresponding seasons\n1: spring\n2: summer\n3: autumn\n4: winter\n:");
  scanf("%d",&seas);
  printf("Enter the no of days");
  scanf("%f",&days);

  if(seas==1){
    rate=4.00;}
  else if(seas==2){
    rate=7.00;}
  else if(seas==3){
  printf("Hello");
    rate=3.00;}
  else if(seas==4){
    rate=2.00;}

  if(days>10){
    charge=(rate*days)-0.3*(rate*days)+100;}
  else{
    charge=rate*days+100;}
  printf("Charge (including 100rs as security deposit):%f",charge);
getch();
}