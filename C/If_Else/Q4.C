#include<stdio.h>
#include<conio.h>
void main(){
int num, dem;
clrscr();
printf("Enter the Numerator:");
scanf("%d",&num);
printf("Enter the Denominator:");
scanf("%d",&dem);
if(num%dem==0){
printf("It is divisible");
}
else{
printf("It is not divisible");
}
getch();
}