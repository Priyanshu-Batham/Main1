#include<stdio.h>
#include<conio.h>
void main(){
  char a;
  clrscr();
  printf("Enter a character:");
  scanf("%s",&a);

  switch(a){
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U': printf("It is a vowel");
  break;

  default: printf("It is not a vowel");}
getch();}