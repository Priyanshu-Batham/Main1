#include<stdio.h>
#include<conio.h>
void main(){
  int per;
  clrscr();
  printf("Enter aggregate percentage:");
  scanf("%d",&per);
  per=per/10;

  switch(per){
  case 6: printf("\nCommerce + Hindi");
  break;
  case 7: printf("\nCommerce + Computer");
  break;
  case 8: printf("\nScience + Hindi");
  break;
  case 10:
  case 9: printf("\nScience + Computer");
  break;
  default: printf("\nThankYou, look for another college :)");}
getch();
}