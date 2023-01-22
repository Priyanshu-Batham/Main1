//rucursive fibonnaci series
#include<stdio.h>
#include<conio.h>
int fibbonacci(int num);
int main(){
  int num,i;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  for(i=0;i<num;i++){
    printf("%d ",fibbonacci(i));
    }
  getch();
  }

//fibbonacci function
int fibbonacci(int num){
  if(num==0){
    return 0;
  }
  else if(num==1){
    return 1;
  }
  else{
    return fibbonacci(num-1) + fibbonacci(num-2);
  }
}