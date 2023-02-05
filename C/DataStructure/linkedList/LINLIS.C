#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
  int slldata;
  struct node *sllnext;
};
struct node *sllfront = NULL;
struct node *sllrear = NULL;
struct node *slltemp = NULL;
struct node *slldestruct = NULL;
struct node *sllnewnode;
void sllins();
void slldel();
void slldisplay();

// ------------------------------------------------------------------------>>>>>>>>>>>>>
int main()
{
  clrscr();
  sllins();
  sllins();
  slldisplay();
  slldel();
  slldel();
  getch();
  return 0;
}
// ------------------------------------------------------------------------>>>>>>>>>>>>>

void sllins()
{
  int choice, pos, i;
  sllnewnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the value:");
  scanf("%d", &sllnewnode->slldata);
  sllnewnode->sllnext = NULL;

  if (sllfront == NULL)
  {
    sllfront = sllnewnode;
    sllrear = sllnewnode;
  }
  else
  {
    printf("Where to Insert?\n");
    printf("1 Front\n");
    printf("2 Rear\n");
    printf("3 Between\n");
    printf("4 Exit\n");
    printf("Choice:");
    scanf("%d", &choice);
    if (choice == 1)
    {
      sllnewnode->sllnext = sllfront;
      sllfront = sllnewnode;
    }
    else if (choice == 2)
    {
      sllrear->sllnext = sllnewnode;
      sllrear = sllnewnode;
    }
    else if (choice == 3)
    {
      printf("Enter the position of insertion:");
      scanf("%d", &pos);
      if (pos == 1)
      {
        sllnewnode->sllnext = sllfront; // insert from front
        sllfront = sllnewnode;
      }
      else if (pos == 2)
      {
        sllnewnode->sllnext = sllfront->sllnext;
        sllfront->sllnext = sllnewnode;
      }
      else
      {
        slltemp = sllfront;
        for (i = 1; i < pos - 1; i++)
        {
          slltemp = slltemp->sllnext;
          if (slltemp == NULL)
          {
            sllrear->sllnext = sllnewnode; // insert from rear
            sllrear = sllnewnode;
            break;
          }
          else if (i == pos - 2)
          {
            sllnewnode->sllnext = slltemp->sllnext;
            slltemp->sllnext = sllnewnode;
            break;
          }
        }
      }
    }
    else if (choice == 4)
    {
      exit(0);
    }
    else
    {
      printf("Invalid choice");
    }
  }
}

void slldisplay()
{
  int choice;

  if (sllfront == NULL)
  {
    printf("No elements in linked list!!!\n");
  }
  else
  {
    slltemp = sllfront;
    while (slltemp != NULL)
    {
      printf("%d\n", slltemp->slldata);
      slltemp = slltemp->sllnext;
    }
  }
}

void slldel()
{
  int pos, choice, i;
  if (sllfront == NULL)
  {
    printf("No Element in linked list\n");
  }
  else
  {
    printf("From where to delete the element?\n");
    printf("1: Front\n");
    printf("2: Rear\n");
    printf("3: Between\n");
    printf("4: Exit\n");
    printf("Choice:");
    scanf("%d", &choice);

    if (choice == 1)
    {
      if (sllfront->sllnext == NULL) // there's only one element in the linked list
      {
        printf("Removed Element:%d\n", sllfront->slldata);
        free(sllfront);
        sllfront = NULL;
        sllrear = NULL;
      }
      else
      {
        printf("Removed Element:%d\n", sllfront->slldata);
        slltemp = sllfront;
        sllfront = sllfront->sllnext;
        free(slltemp);
      }
    }

    else if (choice == 2)
    {
      if (sllfront->sllnext == NULL) // there's only one element in the linked list
      {
        printf("Removed Element:%d\n", sllfront->slldata);
        free(sllfront);
        sllfront = NULL;
        sllrear = NULL;
      }
      else
      {
        slltemp = sllfront;
        while (slltemp->sllnext != sllrear)
        {
          slltemp = slltemp->sllnext;
        }
        printf("Removed Element:%d\n", sllrear->slldata);
        free(sllrear);
        sllrear = slltemp;
      }
    }

    else if (choice == 3)
    {
      printf("Enter the position:");
      scanf("%d", &pos);

      if (pos == 1)
      {                          // algo to delete element from front:
        if (sllfront == sllrear) // if there is only one element in the linked list
        {                        // and pos1 element is to be deleted
          printf("Removed Element:%d\n", sllfront->slldata);
          free(sllfront);
          sllfront = NULL;
          sllrear = NULL;
        }
        else
        { // if there are more than one element in the list
          printf("Removed Element:%d\n", sllfront->slldata);
          slltemp = sllfront;
          sllfront = sllfront->sllnext;
          free(slltemp);
        }
      }
      else if (pos == 2)
      { // for deleting position 2 element
        slltemp = sllfront->sllnext;
        sllfront->sllnext = slltemp->sllnext;
        printf("Removed Element:%d\n", slltemp->slldata);
        free(slltemp);
      }
      else
      {
        if (sllfront == sllrear) // there's only one element in the linked list
        {
          printf("Removed Element:%d\n", sllfront->slldata);
          free(sllfront);
          sllfront = NULL;
          sllrear = NULL;
        }
        else
        {
          slltemp = sllfront;
          for (i = 1; i < pos - 1; i++)
          {
            if (slltemp->sllnext == sllrear)
            {
              printf("Removed Element:%d\n", sllrear->slldata);
              sllrear = slltemp;
              break;
            }
            else if (i == pos - 2)
            {
              slldestruct = slltemp->sllnext;
              printf("Removed Element:%d\n", slldestruct->slldata);
              slltemp->sllnext = slldestruct->sllnext;
              free(slldestruct);
              break;
            }
            slltemp = slltemp->sllnext;
          }
        }
      }
    }
  }
}