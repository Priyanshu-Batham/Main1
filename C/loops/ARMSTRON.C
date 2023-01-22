//program to armstrong number
#include<stdio.h>
#include<conio.h>

void main(){
  int num,i,j,k;
  clrscr();

  k=0;
  printf("Enter a number:");
  scanf("%d",&num);
  i=num;
  while(i>0){
    j=i%10;
    k=k+j*j*j;
    i=i/10;
    }
  if(k==num){
    printf("%d is an armstrong number",num);}
  else{
    printf("%d is not an armstrong number",num);}
getch();
}

