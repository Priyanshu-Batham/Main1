#include<stdio.h>
#include<conio.h>
void main()
{
  int num,a,b,c;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  a=num;
  b=0;
  c=num;
  while(a>0){
    b=a%10;
    if(c>b){
      c=b;
      }
    a=a/10;
    }
printf("Smallest digit is %d",c);
getch();
}









