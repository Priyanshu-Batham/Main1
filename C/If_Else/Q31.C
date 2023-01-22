#include<stdio.h>
#include<conio.h>
#define A a*q
#define B p*b
void main(){
float a,b,c,p,q,r,eq1,eq2,x,y,d;
clrscr();
printf("Enter value of a,b,c for ax+by=c:");
scanf("%f%f%f",&a,&b,&c);

printf("Enter value of p,q,r for px+qy=r:");
scanf("%f%f%f",&p,&q,&r);
d=A-B;
if (d!=0){
eq1=(b*r)-(c*q);
eq2=(c*p)-(a*r);
x=eq1/d;
y=eq2/d;
printf("Solutions are:%f,%f",x,y);
}
else if (d==0 && (b*r)==(c*q)){
printf("No Finite solution");
}
else {
printf("No solutions");
}
getch();
}