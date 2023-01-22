//area of circle
//perimeter of circle
//area of semi circle
//perimeter of semi circle
//exit
#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
  float r,area,circum,s_area,s_circum;
  int a;

  clrscr();
  printf("Enter the radius of circle:");
  scanf("%f",&r);
  printf("\nEnter choice 1,2,3,4,5 for\n1:Area of circle\n2:Circumference of circle\n3:Area of semi circle\n4:Circumference of semi circle\n5:Exit\n\n:");
  scanf("%d",&a);

  area=pi*r*r;
  circum=2*pi*r;
  s_area=area/2;
  s_circum=pi*r;


  switch(a){
  case 1:printf("Area of circle:%f",area);
  getch();
  break;
  case 2:printf("Circumference of circle:%f",circum);
  getch();
  break;
  case 3:printf("Area of semicircle:%f",s_area);
  getch();
  break;
  case 4:printf("Circumference of semicircle:%f",s_circum);
  getch();
  break;
  default:break;}
}