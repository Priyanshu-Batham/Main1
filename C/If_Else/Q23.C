#include<stdio.h>
#include<conio.h>
void main()
{
char h,l,g;
int a;
clrscr();
printf("Enter Health\ne:Excellent\np:Poor\n");
scanf("%c",&h);
printf("Enter Location:\nc:City\nv:Village\n");
scanf("\n%c",&l);
printf("Enter Gender\nm:Male\nf:Female\n");
scanf("\n%c",&g);
printf("Enter Age ");
scanf("\n%d",&a);
if((h=='e')&&(l=='c')&&(g=='m')&&(a>=25&&a<=35))
printf("\nThe Premium Is Rs.4 Per Thousand.\nYour Policy Cannot Exceed Rs.2 Lakhs");
else if((h=='e')&&(l=='c')&&(g=='f')&&(a>=25&&a<=35))
printf("\nThe Premium Is Rs.3 Per Thousand.Your Policy Cannot Exceed Rs.1 Lakhs");
else if((h=='p')&&(l=='v')&&(g=='m')&&(a>=25&&a<=35))
printf("\nThe Premium Is Rs.6 Per Thousand And Cannot Exceed Rs. 10,000");
else
printf("\nNot Insured");
getch();
}