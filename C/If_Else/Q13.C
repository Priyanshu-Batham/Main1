#include<stdio.h>
#include<conio.h>
void main(){
  int age,dist;
  clrscr();
  printf("Enter your age:");
  scanf("%d",&age);
  printf("Enter distance to travel:");
  scanf("%d",&dist);
  if(age<10){
    if(dist<50){
      printf("Fare=5");
      }
    else if(dist>50 && dist<=100){
      printf("Fare=10");
      }
    else{
      printf("Fare=15");
      }
  }
  else if(age>10 && age<=50){
    if(dist<50){
      printf("Fare=10");
      }
    else if(dist>50 && dist<=100){
      printf("Fare=15");
      }
    else{
      printf("Fare=20");
      }
  }
  else{
    if(dist<50){
      printf("Fare=15");
      }
    else if(dist>50 && dist<=100){
      printf("Fare=20");
      }
    else{
      printf("Fare=25");
      }
  }
getch();
}