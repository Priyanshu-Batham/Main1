#include<stdio.h>
#include<conio.h>

//declaring functions
void sum(int x[5]);
void alternate(int x[5]);
void diff(int x[5]);
void pall(int x[5]);

void main(){
  int i,num[5],pick;
  clrscr();
  printf("Enter 6 numbers:\n");
  for(i=0;i<=5;i++){
    scanf("%d",&num[i]);
    }
  printf("\n");
  printf("Enter 1 to print sum of numbers\n");
  printf("Enter 2 to print alternate elements\n");
  printf("Enter 3 to print difference between 1st and last elemnt\n");
  printf("Enter 4 to print the pallindrome numbers if found any\n");
  printf("Choice:");
  scanf("%d",&pick);
  printf("\n");

  switch(pick){
    case 1:sum(num);
    break;
    case 2:alternate(num);
    break;
    case 3:diff(num);
    break;
    case 4:pall(num);
    break;
    default:printf("Invalid Input");
    }
  getch();
  }


//defining the sum function
void sum(int x[5]){
  int i,sum=0;
  for(i=0;i<=5;i++){
    sum=sum + x[i];
    }
  printf("Sum of all no: %d",sum);
  getch();
  }

//defining the alternate function
void alternate(int x[5]){
  int i;
  printf("Alternate numbers:");
  for(i=0;i<=5;i++){
    if(i%2==0){
      printf("%d ",x[i]);
      }
    }
  }

//defining the diff function
void diff(int x[5]){
  printf("Difference of first and last element: %d",x[5]-x[0]);
  }

//defining the pallindrome function
void pall(int x[5]){
  int i,rem,rev,a;
  for(i=0;i<=5;i++){
    a=x[i];
    rev=0;
    while(a>0){
      rem=a%10;
      rev=rev*10+rem;
      a=a/10;
      }
    //check if pallindrome
    if(rev==x[i]){
      printf("%d is pallindrome\n",x[i]);
      }
    }
  }