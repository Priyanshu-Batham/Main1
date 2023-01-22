#include<stdio.h>
#include<conio.h>
void main()
{
int num,ct,a,b_0=0,b_1=0,b_2=0,b_3=0,b_4=0,b_5=0,b_6=0,b_7=0,b_8=0,b_9=0,b_10=0;
clrscr();
ct=1;
printf("Enter 50 number\n");
while(ct<=50){
  printf("Num %d:",ct);
  scanf("%d",&num);
  a=num/10;
  switch(a){
  case 0: b_0=b_0+1;
  break;
  case 1: b_1=b_1+1;
  break;
  case 2: b_2=b_2+1;
  break;
  case 3: b_3=b_3+1;
  break;
  case 4: b_4=b_4+1;
  break;
  case 5: b_5=b_5+1;
  break;
  case 6: b_6=b_6+1;
  break;
  case 7: b_7=b_7+1;
  break;
  case 8: b_8=b_8+1;
  break;
  case 9: b_9=b_9+1;
  break;
  default: b_10=b_10+1;
  }
  ct++;
  }
printf("\n");
printf("Group 0-10:%d\n",b_0);
printf("Group 10-20:%d\n",b_1);
printf("Group 20-30:%d\n",b_2);
printf("Group 30-40:%d\n",b_3);
printf("Group 40-50:%d\n",b_4);
printf("Group 50-60:%d\n",b_5);
printf("Group 60-70:%d\n",b_6);
printf("Group 70-80:%d\n",b_7);
printf("Group 80-90:%d\n",b_8);
printf("Group 90-100:%d\n",b_9);
printf("Group above 100:%d\n",b_10);
getch();
}

