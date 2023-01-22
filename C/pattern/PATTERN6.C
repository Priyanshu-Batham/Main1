#include<stdio.h>
#include<conio.h>
void main(){
  int num,i,j;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    //printing spaces
    for(j=num-i;j>=0;j--){
      printf("   ");
      }

    //printing stars
    for(j=1;j <= 2*i-1;j++){
      printf(" * ");
      }

    printf("\n");
    }

 /* //loop for inverted triangle
  for(i=num-1;i>0;i--){

    //printing spaces
    for(j=0;j<=num-i;j++){
      printf("   ");
      }

    //printing stars
    for(j=1;j<=2*i-1;j++){
      printf(" * ");
      }
    printf("\n");
    }
  */
  getch();
  }