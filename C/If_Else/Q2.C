#include<stdio.h>
#include<conio.h>
void main(){
long int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
if(n%2==0){
printf("It is an even number");
}
else{
printf("It is an odd number");
}
getch();
}