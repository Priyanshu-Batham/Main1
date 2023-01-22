#include<stdio.h>
#include<conio.h>
void main()
{
  int num,a,b;
  clrscr();
  printf("Enter a positive  number:");
  scanf("%d",&num);
  a=1;
  b=0;
  while(a<num){
    if(num%a==0){
      b=b+a;}
    a++;
  }
  if(b==num){
    printf("%d is Perfect number",num);}
  else{
    printf("%d is not a perfect number",num);}
  getch();
}