#include<stdio.h>
#include<conio.h>
void main(){
long int a;
clrscr();
printf("Enter any number:");
scanf("%ld",&a);
if(a>0){
printf("%d is positive number",a);
}
else if(a==0){
printf("%d is zero",a);
}
else{
printf("%d is a negative number",a);
}
getch();
}