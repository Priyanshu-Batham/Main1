#include<stdio.h>
#include<conio.h>
int main(){
  int i;
  char str[50],sym;
  clrscr();
  printf("Enter a string:");
  gets(str);
  printf("Enter a symbol:");
  scanf("%c",&sym);
  for(i=0;i<50;i++){
    if(str[i]==' '){
      str[i]=sym;
    }
  }
  puts(str);
  getch();
}