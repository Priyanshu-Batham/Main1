//employee details
#include<stdio.h>
#include<conio.h>
int main(){
  struct record{
    int id;
    char name[10];
    float salary;
    };
  struct record r1[20];
  int i,num;
  clrscr();
  fflush(stdin); //to flush the output buffer
  printf("Enter the no records to be inserted(upto 20):");
  scanf("%d",&num);

  //taking input of num persons from user
  for(i=0;i<num;i++){
    printf("Enter details of %d employee\n",i+1);
    printf("Employee Id:");
    scanf("%d",&r1[i].id);
    printf("Name:");
    scanf("%s",&r1[i].name);
    printf("Salary:");
    scanf("%f",&r1[i].salary);
    printf("\n");
    }

  //printing the output
  for(i=0;i<num;i++){
    printf("\n");
    printf("\n");
    printf("Employee Id:%d\nName:%s\nSalary:%f",r1[i].id, r1[i].name, r1[i].salary);
    }

  getch();
  return 0;
  }