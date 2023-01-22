//character is vowel or not
#include<stdio.h>
#include<conio.h>
void main(){
char a;
clrscr();
printf("Enter a character in lowercase:");
scanf("%c",&a);
if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
printf("%c is a vowel",a);
}
else{
printf("%c is not a vowel",a);
}
getch();
}