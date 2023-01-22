//allowance calculator according to grades
#include<stdio.h>
#include<conio.h>
void main(){
  long sal;
  char a;
  clrscr();
  printf("Enter the Basic salary:");
  scanf("%ld",&sal);
  printf("Enter the Grade in uppercase:");
  a=getch();
  if(a=='A'){
  printf("Allowance=350\nNet salary=%ld",sal+350);
  }
  else if(a=='B'){
  printf("Allowance=250\nNet salary=%ld",sal+250);
  }
  else{
  printf("Allowance=100\nNet salary=%ld",sal+100);
  }
getch();
}


