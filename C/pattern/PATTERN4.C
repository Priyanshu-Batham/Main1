#include<stdio.h>
#include<conio.h>
void main(){
  int num,i,j;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&num);

  for(i=1;i<=num;i++){

    //printing spaces
    for(j=1;j<=num-i;j++){
      printf("   ");
      }

    //printing numbers
    for(j=1;j<=i;j++){
      printf(" %d ",j);
      }

    //printing numbers again (inversed)
    if(i>=2){
      for(j=1;j<i;j++){
	printf(" %d ",j);
	}
      }
    printf("\n");
    }
  getch();
  }