#include<stdio.h>
#include<conio.h>
void main(){
  int arr1[2][3],arr2[2][3],arr3[2][3],l1,l2;
  clrscr();
  printf("Enter the elements of first array:\n");
  for(l1=0;l1<2;l1++){
    for(l2=0;l2<3;l2++){
      printf("Row %d Element %d:",l1+1,l2+1);
      scanf("%d",&arr1[l1][l2]);
      }
    }

  printf("\nEnter the elements of second array:\n");
  for(l1=0;l1<2;l1++){
    for(l2=0;l2<3;l2++){
      printf("Row %d Element %d:",l1+1,l2+1);
      scanf("%d",&arr2[l1][l2]);
      }
    }
  for(l1=0;l1<2;l1++){
    for(l2=0;l2<3;l2++){
      arr3[l1][l2] = arr1[l1][l2] + arr2[l1][l2];
      }
    }

  printf("\nOutput matrix of addition:\n");
  for(l1=0;l1<2;l1++){
    for(l2=0;l2<3;l2++){
      printf("%d ",arr3[l1][l2]);
      }
    printf("\n");
    }
  getch();
}



