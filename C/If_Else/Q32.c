#include<stdio.h>
#include<conio.h>
void main(){
  float weight;
  int extra;
  clrscr();
  printf("Enter the weight in kg:");
  scanf("%f",&weight);
  if(weight==1){
    printf("Charge=20rs");}
  else{
    extra=weight-1;
    printf("Charge=%d",25*extra+20);}
getch();
}




