//commission calculator
#include<stdio.h>
#include<conio.h>
void main(){
long int sales,comms;
clrscr();
printf("Enter the monthly sales of the company:");
scanf("%ld",&sales);
if(sales>=10000){
comms=sales*0.1;
}
else{
comms=0;
}
printf("Commission:%ld",comms);
getch();
}
