#include<stdio.h>
#include<conio.h>
#define Auto printf("\nDriver will be insured");
void main(){
int age;
char m,g;
clrscr();
printf("Enter your age::");
scanf("%d",&age);
printf("\nMarried?(Y/N):");
m=getche();
printf("\nGender?(M/F):");
g=getche();
if (m=='Y'){
  Auto}
else if(m=='N' && g=='M'){
  if (age>30){
    Auto}}
else if (m=='N' && g=='F'){
  if (age>25){
    Auto}}
else{
  printf("Driver will not be insured");}
getch();
}