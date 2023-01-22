//commission calculator v.2
#include<stdio.h>
#include<conio.h>
void main(){
long int sales,comms;
clrscr();
printf("Enter the monthly sales of the company:");
scanf("%ld",&sales);
if(sales<10000){
comms=sales*0.05;
}
else{
comms=sales*0.1;
}
printf("Commission:%ld",comms);
getch();
}
