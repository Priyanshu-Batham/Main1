#include<stdio.h>
#include<conio.h>
void main(){
float a,b,c,d,e;
clrscr();
printf("Maximum Marks:100");
printf("Enter marks of subject 1:");
scanf("%f",&a);
printf("\nEnter marks of subject 2:");
scanf("%f",&b);
printf("\n Enter marks of subject 3:\n");
scanf("%f",&c);
d=a+b+c;
e=d/3;
if (e>=90){
printf("A+");}
else if (e>=80 && e<90){
printf("A");}
else if (e<80 && e>=70){
printf("B+");}
else if (e<70 && e>=60){
printf("B");}
else if (e>=50 && e<60){
printf("C+");}
else {
printf("Fail");}
getch();
}