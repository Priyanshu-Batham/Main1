#include<stdio.h>
#include<conio.h>
void main(){
  long sal;
  int years;
  clrscr();
  printf("Enter the employee's salary:");
  scanf("%ld",&sal);
  printf("No.of years since employee has\nbeen working:");
  scanf("%d",&years);
  if(years<10){
  printf("Bonus=%f",sal * 0.05);
  }
  else{
  printf("Bonus=%f",sal * 0.05 + 500);
  }
getch();
}