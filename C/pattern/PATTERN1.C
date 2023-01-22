#include<stdio.h>
#include<conio.h>
void main(){
  int num,i,j;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    for(j=1;j<=i;j++){
      printf(" * ");
      }
    printf("\n");
    }
  getch();
  }