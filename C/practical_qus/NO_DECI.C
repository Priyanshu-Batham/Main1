#include<stdio.h>
#include<conio.h>
void main(){
  float num[5];
  int sort[5],i,j;
  clrscr();

  //entering 5 decimal numbers from user
  printf("Enter 5 decimal numbers:\n");
  for(i=0;i<=4;i++){
    printf("%d number:",i+1);
    scanf("%f",&num[i]);
    }

  //converting datatype explicitly from float to int
  for(i=0;i<=4;i++){
    sort[i]=num[i];
    }

  //printing the sorted array
  printf("\n");
  printf("Sorted list (without decimals):");
  for(i=0;i<=4;i++){
    printf("%d ",sort[i]);
    }
  getch();
  }