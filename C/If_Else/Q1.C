#include<stdio.h>
#include<conio.h>
void main(){
int age;
clrscr();
printf("Enter your age:");
scanf("%d",&age);
if(age>=18){
printf("Your age:%d\nYou are an adult",age);
}
else{
printf("Your age:%d\nYou are a minor",age);
}
getch();
}