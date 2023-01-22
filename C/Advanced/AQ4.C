//Qus: longets pallindrome sub string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int pallindrome(char word[]);

/*-------------splitting string into substrings---------------*/
int main(void){
  // clrscr();
  fflush(stdin);
  int a,len,max=0;
  char str[50],longest[50];
  printf("Enter a string:");
  gets(str);
  char *word=strtok(str," ");
  while(word!=NULL){
    a=pallindrome(word);
    if(a==1){
        len=strlen(word);
        if(max<len){
          max=len;
          strcpy(longest,word);
          printf("length:%d",len);
          /*for(i=0;i!='\0';i++){
            longest=strncat(longest,word,1);
          }*/
          //longest=strcat(longest,word);
        }
    }
    word=strtok(NULL," ");
    }
  printf("Longest pallindromic substring: %s",longest);
  
  getch();
  return 0;
  }



/*-----------function to check if the substrings are pallindrome or not----------*/
int pallindrome(char word[]){
  int i,j=0,ct,result=0;
  //clrscr();

  //counting number of letters in the word
  for(i=0;i<20;i++){

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
    return 1;
    }
  else{
    return 0;
    }
  }


