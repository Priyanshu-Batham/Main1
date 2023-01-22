//program to print all armstrong number from 1-1000
#include<stdio.h>
#include<conio.h>

void main(){
  int ct,i,j,k;
  clrscr();
  for(ct=1;ct<=1000;ct++){
    k=0;
    i=ct;
    while(i>0){
      j=i%10;
      k=k+j*j*j;
      i=i/10;
      }
    if(k==ct){
      printf("%d\n",ct);}
    }
getch();
}

