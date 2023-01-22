//Structure array
#include<stdio.h>
#include<conio.h>
int main(){
  struct record{
    int roll;
    char name[10];
    float marks;
    };
  struct record r1[3];
  int i;
  //clrscr();
  fflush(stdin); //to flush the output buffer

  //taking input of 3 person from user
  for(i=0;i<3;i++){
    printf("Enter details of %d person\n",i+1);
    printf("Roll No:");
    scanf("%d",&r1[i].roll);
    printf("Name:");
    scanf("%s",&r1[i].name);
    printf("Marks:");
    scanf("%f",&r1[i].marks);
    printf("\n");
    }

  //printing the output
  for(i=0;i<3;i++){
    printf("\n");
    printf("%d %s %f",r1[i].roll, r1[i].name, r1[i].marks);
    }

  getch();
  return 0;
  }