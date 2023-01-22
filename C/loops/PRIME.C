//program prime number
#include<stdio.h>
#include<conio.h>

void main(){
  int num,i,j,k;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  j=0;
  i=2;
  while(i<num){
    if(num%i==0){
      j=1;
      break;}
    i=i+1;}
if(j==0){
  printf("%d is a prime number",num);}
else{
  printf("%d is not a prime number",num);}
getch();
}






