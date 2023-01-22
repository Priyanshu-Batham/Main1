#include<stdio.h>
#include<conio.h>
void main(){
long sales;
char a;
clrscr();
printf("Enter the sales amount:");
scanf("%ld",&sales);
if(sales<10000){
  printf("Commission=%f",sales*0.05);
  }
else{
  printf("Enter the grade in uppercase:");
  a=getche();
  if(a=='A'){
  printf("\nCommission=%lf",sales*0.1);
  }
  else{
  printf("\nCommission=%lf",sales*0.08);
  }
}
getch();
}