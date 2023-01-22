#include<stdio.h>
#include<conio.h>
#define A printf("Output:%d",z);
void main(){
int x,y,z;
clrscr();
printf("Enter values of x and y:");
scanf("%d%d",&x,&y);
if(x>=0){
  z=(4*x)+y;
  A}
else{
  z=(4*x)-y;
  A}
getch();
}
