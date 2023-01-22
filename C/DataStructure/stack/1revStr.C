#include <stdio.h>
#include <conio.h>
#define M 20
void pop();
void push(char c);
void display();
int i;
char a[20];
int b, top;
int main()
{
    char c[20];
    top = -1;
    clrscr();
    printf("Enter a string=");
    gets(c);
    for (i = 0; i <= strlen(c); i++)
    {
        push(c[i]);
    }
    printf("The reverse of string is=");
    display();

    getch();
    return 0;
}

void push(char c)
{

    top = top + 1;
    a[top] = c;
}
void pop()
{
    if (top == -1)
        printf("Stack Underflow");
    else
    {
        printf("\nThe popped element is %d=", a[top]);
        top = top - 1;
    }
}
void display()
{

    if (top == -1)
        printf("stack is empty");
    else
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            printf("%c", a[i]);
        }
    }
}