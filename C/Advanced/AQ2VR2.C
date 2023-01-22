//replacing spaces with special character
#include<stdio.h>
#include<conio.h>
int main(){
  char str[50],newstr[70];
  char spc;
  int i,j,ctr=0;
  //clrscr();
  fflush(stdin);
  printf("Enter a sentence(upto 50 chars):\n");
  scanf(" %[^\n]",&str);
  printf("\nEnter the special symbol:");
  scanf(" %c",&spc);
  for(j=0;j<50;j++){
    if(str[j]=='\0'){
      break;
    }
    ctr++;
  }
  for(i=0;i<ctr;i++){

    //replacing spaces
    if(str[i]==' '){
      newstr[i]=spc;
    }

    else{
      newstr[i]=str[i];
    }
  }
  newstr[ctr]='\0'; //putting the finisher at the end of newstring
  printf("New string:\n");
  printf("%s",newstr);

  getch();
  return 0;
}