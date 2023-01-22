#include <stdio.h>
#include <conio.h>
#define M 5
void pop();
void push();
void display();
int i, a[M];
int b, top;
int main()
{

  top = -1;
  clrscr();
  do
  {
    printf("Enter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for display\n");
    printf("Enter 4 for exit=");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("Invalid choice");
    }

  } while (i != 4);
  getch();
  return 0;
}

void push()
{

  if (top == M - 1)
    printf("Stack Overflow");
  else
  {
    printf("Enter value to be pushed=");
    scanf("%d", &b);
    top = top + 1;
    a[top] = b;
  }
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
      printf("%d\n", a[i]);
    }
  }
}
