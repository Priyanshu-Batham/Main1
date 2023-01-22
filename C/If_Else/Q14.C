#include<stdio.h>
#include<conio.h>
void main(){
  int marks;
  char name[20];
  clrscr();
  printf("Enter your name:");
  gets(name);
  printf("Enter average marks:");
  scanf("%d",&marks);
  if(marks>=90){
    printf("A+");}
  else if(marks>=80){
    printf("A");}
  else if(marks>=70){
    printf("B+");}
  else if(marks>=60){
    printf("B");}
  else if(marks>=50){
    printf("C");}
  else{
    printf("Fail");}
getch();
}
