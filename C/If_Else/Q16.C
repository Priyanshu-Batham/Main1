#include<stdio.h>
#include<conio.h>
void main(){
  float sal,tax,diff;
  clrscr();
  printf("Enter the salary:");
  scanf("%f",&sal);

  if(sal>150000){
    diff=sal-150000;
    tax=19000+0.3*diff;
    printf("salary:%f\n",sal);
    printf("tax:%f\n",tax);}
  else if(sal>60000){
    diff=sal-60000;
    tax=1000+0.2*diff;
    printf("salary:%f\n",sal);
    printf("tax:%f\n",tax);}
  else if(sal>50000){
    diff=sal-50000;
    tax=0.1*diff;
    printf("Salary:%f\n",sal);
    printf("Tax:%f\n",tax);}
  else{
    printf("salary:%f\n",sal);
    printf("tax: none");}
getch();
}

