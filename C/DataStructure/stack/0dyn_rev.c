/* dynamic stack rev string*/

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct node
{
    char data;
    struct node *next;
};

struct node *top = NULL;

void display();
void push(char);
void pop();

int main()
{
    int ch;
    char n;
    do
    {
        printf("\n\nStack Menu\n1. Push \n2. Pop\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter character: ");
                n=getch();
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    }while (ch != 0);
}

void push(char item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = top;
    top = nptr;
}

void display()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%c", temp->data);
        temp = temp->next;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("\n\nStack is empty ");
    }
    else
    {
        struct node *temp;
        temp = top;
        top = top->next;
        printf("\n\n%c deleted", temp->data);
        free(temp);
    }
}