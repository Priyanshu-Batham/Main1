//pallindrome string
#include<stdio.h>
#include<conio.h>
int main(){
  int i,j=0,ct,result=0;
  char word[10];
  //clrscr();

  //taking input from user
  printf("Enter a word/string:");
  scanf("%s",&word);

  //counting number of letters in the word
  for(i=0;i<10;i++){

    if(word[i]=='\0'){
      break;
      }
    else{
      j++;
      }
    }

  //checking pallindrome condition
  j-=1;   //index of last letter
  i=0;
  while(i!=j){
    if(word[i]!=word[j]){
      result=1;
      break;
      }
    i++;
    j--;
    }

  if(result==0){
    printf("%s is pallindrome",word);
    }
  else{
    printf("%s is not pallindrome",word);
    }
  return 0;
  getch();

  }
