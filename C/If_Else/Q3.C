#include<stdio.h>
#include<conio.h>
void main(){
long int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
if(n%8==0){
printf("It is divisible by 8");
}
else{
printf("It is not divisible ");
}
getch();
}