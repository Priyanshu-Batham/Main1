#include<stdio.h>
#include<conio.h>

void sort(char a[4]);  //declaring the sort function
void vow(char a[4]);   //declaring the vowel function

void main(){
  char arr[4];
  int i;
  clrscr();
  printf("Enter the characters in the array:\n");
  for(i=0;i<=4;i++){
    printf("Character %d:",i+1);
    scanf("%s",&arr[i]);
    }
  printf("\n");
  vow(arr);
  printf("\n");
  sort(arr);
  getch();
  }


//defining the reverse sorting function
void sort(char a[4]){
  char revd[4];
  int i,j;
  j=4;
  for(i=0;i<=4;i++){
    revd[j]=a[i];
    j-=1;
    }

  //printing the reversed array
  printf("Reversed array: ");
  for(i=0;i<=4;i++){
    printf("%c ",revd[i]);
    }
  }


//defining the vowel finder function
void vow(char a[4]){
  int i;
  char ch;
  printf("Vowels are: ");
  for(i=0;i<=4;i++){
    ch=a[i];
    //check if ch is vowel or not
    switch(ch){
      case 'a': printf("%c ",ch);
      break;
      case 'e': printf("%c ",ch);
      break;
      case 'i': printf("%c ",ch);
      break;
      case 'o': printf("%c ",ch);
      break;
      case 'u': printf("%c ",ch);
      }
    }
  }
