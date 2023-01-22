#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    int ascii;
    clrscr();
    printf("Enter a character: ");
    scanf("%c", &ch);
    ascii = ch;

    printf("ASCII value of %c is: %d\n",ch,ascii);

    if (ascii >= 65 && ascii <= 90)
	printf("%c is a capital letter",ch);
    else if (ascii >= 97 && ascii <=122)
	printf("%c is a small letter",ch);

    else if (ascii >=48 && ascii <= 57)
	printf("%c is a digit",ch);

    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127)
	printf("%c is a special symbols",ch);
getch();
}