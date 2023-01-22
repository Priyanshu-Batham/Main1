#include<stdio.h>
#include<conio.h>
void main(){
  int w;
  clrscr();
  printf("Enter the amount of water consumed in gallons:");
  scanf("%d",&w);
  if(w>300){
    printf("Tax=1700");}
  else if(w>200){
    printf("Tax=1100");}
  else if(w>100){
    printf("Tax=800");}
  else if(w>50){
    printf("Tax=500");}
  else{
    printf("Tax=NIL");}
getch();
}
