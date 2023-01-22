#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  int a,b,c,d;
  float e,f;
  clrscr();
  printf("Enter the values of a,b and c");
  scanf("%d %d%d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>0){
    e=(-b+sqrt(d))/2*a;
    f=(-b-sqrt(d))/2*a;
    printf("Real and unequal roots\n");
    printf("Roots:%f,%f",e,f);}
  else if(d<0){
    printf("Roots are complex and imaginary\n");}
  else{
    e=(-b+sqrt(d))/2*a;
    f=(-b-sqrt(d))/2*a;
    printf("Roots are real and equal\n");
    printf("Roots:%f,%f",e,f);}
getch();
}


