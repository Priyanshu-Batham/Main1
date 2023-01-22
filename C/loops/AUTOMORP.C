#include<stdio.h>
#include<conio.h>
void main(){
  int num,a,sq,num_ls,sq_ls,alert;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  a=num;
  sq=a*a;
  alert=0;
  printf("Square:%d\n",sq);
  while(a>0){
    num_ls=a%10;
    sq_ls=sq%10;
    if(num_ls!=sq_ls){
      alert=1;
      break;
      }
    a=a/10;
    sq=sq/10;
    }
if(alert==0){
  printf("%d is an Automorphic number",num);}
else{
  printf("%d is Not an Automorphic number",num);}
getch();
}