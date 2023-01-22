#include<stdio.h>
#include<conio.h>
void main(){
  int cost,check;
  float net,disc;
  clrscr();
  printf("\nEnter the total cost of items purchased:");
  scanf("%d",&cost);
  check = cost/1000;

  switch(check){
  case 0:
  case 1:
    disc=cost*0.05;
    net=cost-disc;
    printf("\n5 percent discount:%f\nAmount payable:%f",disc,net);
    break;
  case 2:
  case 3:
  case 4:
    disc=cost*0.25;;
    net=cost-disc;
    printf("\n25 percent discount:%f\nAmount payable:%f",disc,net);
  break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    disc=cost*0.35;
    net=cost-disc;
    printf("\n35 percent discount:%f\nAmount payable:%f",disc,net);
    break;
  case 10:
    disc=cost*0.5;
    net=cost-disc;
    printf("\n50 percent discount:%f\nAmount payable:%f",disc,net);
  break;}
getch();
}