//prime pallindrome between 1-500
#include<stdio.h>
#include<conio.h>
void main(){
  int a,opr,rem,rev,pall,alert,i;
  clrscr();
  for(a=1;a<=500;a++){
    //reverse the number
    opr=a;
    rev=0;
    while(opr>0){
      rem=opr%10;
      rev=rev*10+rem;
      opr=opr/10;
      }
    //check if pallindrome
    if(rev==a){
      pall=a;
      //check if pall is prime or not
      alert=0;
      i=2;
      while(i<pall){
	if(pall%i==0){
	alert=1;
	break;}
      i=i+1;}
    //if every condition satisfies...print it
    if(alert==0){
      printf("%d\n",pall);}
      }
    }
getch();
}




