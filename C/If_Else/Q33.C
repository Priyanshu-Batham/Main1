#include<stdio.h>
#include<conio.h>
void main(){
  float comm;
  long sales;
  clrscr();
  printf("Enter the sales amount");
  scanf("%ld",&sales);
  if(sales>70000){
    comm=sales*0.1;
    printf("Commission Rate=10 percent\nCommission=%f",comm);}
  else if(sales>50000){
    comm=sales*0.08;
    printf("Commission Rate=8 percent\nCommission=%f",comm);}
  else if(sales>20000){
    comm=sales*0.05;
    printf("Commission Rate=5 percent\nCommission=%f",comm);}
  else if(sales>10000){
    comm=sales*0.03;
    printf("Commission Rate=3 percent\nCommission=%f",comm);}
  else{
    comm=sales*0.02;
    printf("Commission Rate=2 percent\nCommission=%f",comm);}
getch();
}


