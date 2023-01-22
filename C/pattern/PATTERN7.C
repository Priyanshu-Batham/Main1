// pattern 7
#include<stdio.h>
#include<conio.h>
void main(){
  int num,row,spc,l1,l2,l3,l4,l5,l6,l7,l8;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  row=0;
  for(row=0;row<num;row++){ // <<--- This is outer loop for rows

    //printing stars
    for(l1=0;l1<num-row;l1++){
      printf(" * ");
      }

    //printing spaces
    for(spc=0;spc<row*2-1;spc++){
      printf("   ");
      }

    //printing stars again
    if(row==0){
      for(l2=1;l2<=num-1;l2++){
	printf(" * ");
	}
      }
    else{
      for(l3=1;l3<=num-row;l3++){
	printf(" * ");
	}
      }
    printf("\n");
    }

  //printing the second half of the pattern
  //printf("%d",row);
  row=row-2;
  //printf("%d",row);
  for(l4=row;l4>0;l4--){ //  <<--- outer loop for rows
    //printing stars
    for(l5=1;l5<=num-l4;l5++){
      printf(" * ");
      }

    //printing spaces
    for(l6=1;l6<=l4*2-1;l6++){
      printf("   ");
      }

    //printing remaining stars
    for(l7=1;l7<=num-l4;l7++){
      printf(" * ");
      }

    printf("\n");
    }

  //printing the last line of stars
  for(l8=0;l8<num*2-1;l8++){
    printf(" * ");
    }
getch();
}