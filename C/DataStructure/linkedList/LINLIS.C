#include <stdio.h>
#include <stdlib.h>

// simple linked list declarations-------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>
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
void sllsearch();

// cirular linked list declarations------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>
struct cllnode
{
  int clldata;
  struct cllnode *cllnext;
};
struct cllnode *cllfront = NULL;
struct cllnode *cllrear = NULL;
struct cllnode *clltemp = NULL;
struct cllnode *clldestruct = NULL;
struct cllnode *cllnewnode;
void cllins();
void clldel();
void clldisplay();
void cllsearch();

// Doubly linked list declarations------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>
struct dllnode
{
  int dlldata;
  struct dllnode *dllnext;
  struct dllnode *dllprev;
};
struct dllnode *dllnewnode;
struct dllnode *dllfront = NULL;
struct dllnode *dllrear = NULL;
struct dllnode *dlltemp = NULL;
struct dllnode *dlldestruct = NULL;
int dllCtr = 0;
void dllins();
void dlldel();
void dlldisplay();

// Doubly-Circular linked list declarations------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>
struct dcllnode
{
  int dclldata;
  struct dcllnode *dcllnext;
  struct dcllnode *dcllprev;
};
struct dcllnode *dcllnewnode;
struct dcllnode *dcllfront = NULL;
struct dcllnode *dcllrear = NULL;
struct dcllnode *dclltemp = NULL;
struct dcllnode *dclldestruct = NULL;
int dcllCtr = 0;

void dcllins();
void dclldel();
void dclldisplay();

// application linked list declarations------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>
struct allnode
{
  int coeff;
  char var;
  int exponent;
  struct allnode *allnext;
};
struct allnode *allnewnode;
struct allnode *allfront1 = NULL;
struct allnode *allfront2 = NULL;
struct allnode *allrear1 = NULL;
struct allnode *allrear2 = NULL;
struct allnode *alltemp1 = NULL;
struct allnode *alltemp2 = NULL;

void allins();
void alldisplay();

// ------------------------------------------------------------------------>>>>>>>>>>>>>
int main()
{
  int typeofll;
  int simplellchoice;
  int circularllchoice;
  int doublychoice; // because circular doesn't have dynamic so no need for circularstatichcoice
  int doublycircularchoice;
  int applicationChoice;
  // clrscr();
  do
  {
    printf("\n<----------MENU--------->\n");
    printf("Which Linked List to use?\n");
    printf("1:Simple Linked List\n");
    printf("2:Circular Linked List\n");
    printf("3:Doubly Linked List\n");
    printf("4:Circular Doubly Linked List\n");
    printf("5:Application\n");
    printf("6:Exit\n");
    printf("Choice:");
    scanf("%d", &typeofll);
    switch (typeofll)
    {
      // For Simple ll
    case 1:
      do
      {
        printf("\nWhich Operation to perform?\n");
        printf("1:Insert Element\n");
        printf("2:Delete Element\n");
        printf("3:Display Element\n");
        printf("4:Search Element\n");
        printf("5:Exit\n");
        printf("Choice:");
        scanf("%d", &simplellchoice);
        switch (simplellchoice)
        {
        case 1:
          sllins();
          break;
        case 2:
          slldel();
          break;
        case 3:
          slldisplay();
          break;
        case 4:
          sllsearch();
          break;
        case 5:
          break;
        default:
          printf("Invalid Choice\n");
        }
      } while (simplellchoice != 5);
      break;

    // circular ll
    case 2:
      do
      {
        printf("\nWhich Operation to perform?\n");
        printf("1:Insert Element\n");
        printf("2:Delete Element\n");
        printf("3:Display Element\n");
        printf("4:Search Element\n");
        printf("5:Exit\n");
        printf("Choice:");
        scanf("%d", &circularllchoice);
        switch (circularllchoice)
        {
        case 1:
          cllins();
          break;
        case 2:
          clldel();
          break;
        case 3:
          clldisplay();
          break;
        case 4:
          cllsearch();
          break;
        case 5:
          break;
        default:
          printf("Invalid Choice\n");
        }
      } while (circularllchoice != 5);
      break;

    // double ll
    case 3:
      do
      {
        printf("\nWhich Operation to perform?\n");
        printf("1:Insert Element\n");
        printf("2:Delete Element\n");
        printf("3:Display Element\n");
        printf("4:Exit\n");
        printf("Choice:");
        scanf("%d", &doublychoice);
        switch (doublychoice)
        {
        case 1:
          dllins();
          break;
        case 2:
          dlldel();
          break;
        case 3:
          dlldisplay();
          break;
        case 4:
          break;
        default:
          printf("Invalid Choice\n");
        }
      } while (doublychoice != 4);
      break;

    // cicular double ll
    case 4:
      do
      {
        printf("\nWhich Operation to perform?\n");
        printf("1:Insert Element\n");
        printf("2:Delete Element\n");
        printf("3:Display Element\n");
        printf("4:Exit\n");
        printf("Choice:");
        scanf("%d", &doublycircularchoice);
        switch (doublycircularchoice)
        {
        case 1:
          dcllins();
          break;
        case 2:
          dclldel();
          break;
        case 3:
          dclldisplay();
          break;
        case 4:
          break;
        default:
          printf("Invalid Choice\n");
        }
      } while (doublycircularchoice != 4);
      break;

    // exit
    case 5:
      do
      {
        printf("\nWhich Operation to perform?\n");
        printf("1:Insert Element\n");
        printf("2:Display Element\n");
        printf("3:Exit\n");
        printf("Choice:");
        scanf("%d", &applicationChoice);
        switch (applicationChoice)
        {
        case 1:
          allins();
          break;
        case 2:
          alldisplay();
          break;
        case 3:
          break;

        default:
          printf("Invalid Choice\n");
        }
      } while (applicationChoice != 3);
      break;

    default:
      printf("Invalid Choice\n");
      break;
    }
  } while (typeofll != 6);

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
  int pos, choice, i, data;
  if (sllfront == NULL)
  {
    printf("No Element in linked list\n");
  }
  else
  {
    /*
    printf("From where to delete the element?\n");
    printf("1: Front\n");
    printf("2: Rear\n");
    printf("3: Between\n");
    printf("4: Data wise\n");
    printf("5: Exit\n");
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
    else if (choice == 4)
    {
    */
    printf("Enter the data:");
    scanf("%d", &data);
    slltemp = sllfront;
    while (slltemp != NULL)
    {
      // if only one node
      if (sllfront->sllnext == NULL)
      {
        if (sllfront->slldata == data)
        {
          printf("%d deleted\n", sllfront->slldata);
          free(sllfront);
          sllfront = NULL;
          sllrear = NULL;
          break;
        }
        else
        {
          printf("%d not found\n", data);
          break;
        }
      }

      // data is at first node
      if (sllfront->slldata == data)
      {
        printf("%d deleted\n", sllfront->slldata);
        sllfront = sllfront->sllnext;
        break;
      }

      // data is at last node
      if (slltemp->sllnext->sllnext == NULL)
      {
        if (slltemp->sllnext->slldata == data)
        {
          printf("%d deleted from last\n", slltemp->sllnext->slldata);
          free(sllrear);
          sllrear = slltemp;
          sllrear->sllnext = NULL;
          break;
        }
        else
        {
          printf("%d not found\n", data);
          break;
        }
      }

      // data is at middle position
      if (slltemp->sllnext->slldata == data)
      {
        printf("%d deleted\n", slltemp->sllnext->slldata);
        slldestruct = slltemp->sllnext;
        slltemp->sllnext = slltemp->sllnext->sllnext;
        free(slldestruct);
        break;
      }
      slltemp = slltemp->sllnext;
    }
  }
  /* }
   else if (choice == 5)
   {
     printf("\nExited\n");
   }
   else
   {
     printf("Invalid Choice\n");
   }
 }*/
}

void sllsearch()
{
  int search, count = 1;
  if (sllfront == NULL)
  {
    printf("Linked List is Empty\n");
  }
  else
  {
    printf("Enter the data to be searched:");
    scanf("%d", &search);
    slltemp = sllfront;
    while (slltemp != NULL)
    {
      if (slltemp->slldata == search)
      {
        printf("%d is at %d position\n", search, count);
        break;
      }
      if (slltemp->sllnext == NULL)
      {
        printf("Element not found\n");
        break;
      }
      slltemp = slltemp->sllnext;
      count++;
    }
  }
}

// circular linked list----------------------------------------------------------------------------------->>>>>>>>>>>>>>>>>>>
void cllins()
{
  int choice, pos, i;
  cllnewnode = (struct cllnode *)malloc(sizeof(struct cllnode));
  printf("Enter the value:");
  scanf("%d", &cllnewnode->clldata);
  cllnewnode->cllnext = cllfront;

  if (cllfront == NULL)
  {
    cllfront = cllnewnode;
    cllrear = cllnewnode;
    cllnewnode->cllnext = cllfront;
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
      cllnewnode->cllnext = cllfront;
      cllfront = cllnewnode;
      cllrear->cllnext = cllfront;
    }
    else if (choice == 2)
    {
      cllrear->cllnext = cllnewnode;
      cllrear = cllnewnode;
      cllrear->cllnext = cllfront;
    }
    else if (choice == 3)
    {
      printf("Enter the position of insertion:");
      scanf("%d", &pos);
      if (pos == 1)
      {
        cllnewnode->cllnext = cllfront;
        cllfront = cllnewnode;
        cllrear->cllnext = cllfront;
      }
      else if (pos == 2)
      {
        cllnewnode->cllnext = cllfront->cllnext;
        cllfront->cllnext = cllnewnode;
      }
      else
      {
        clltemp = cllfront->cllnext;
        for (i = 2; i < pos; i++)
        {
          if (clltemp == cllrear)
          {
            cllrear->cllnext = cllnewnode; // insert from rear
            cllrear = cllnewnode;
            cllrear->cllnext = cllfront;
            break;
          }
          else if (i == pos - 1)
          {
            cllnewnode->cllnext = clltemp->cllnext;
            clltemp->cllnext = cllnewnode;
            break;
          }
          clltemp = clltemp->cllnext;
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

void clldel()
{
  int pos, choice, i, data;
  if (cllfront == NULL)
  {
    printf("No Element in linked list\n");
  }
  else
  {
    printf("Enter the data:");
    scanf("%d", &data);
    clltemp = cllfront;
    do
    {
      // if only one node
      if (cllfront->cllnext == cllfront)
      {
        if (cllfront->clldata == data)
        {
          printf("%d deleted\n", cllfront->clldata);
          free(cllfront);
          cllfront = NULL;
          cllrear = NULL;
          break;
        }
        else
        {
          printf("%d not found\n", data);
          break;
        }
      }

      // data is at first node
      if (cllfront->clldata == data)
      {
        printf("%d deleted\n", cllfront->clldata);
        clltemp = cllfront;
        cllfront = cllfront->cllnext;
        cllrear->cllnext = cllfront;
        free(clltemp);
        break;
      }

      // data is at last node
      if (clltemp->cllnext->cllnext == cllfront)
      {
        if (clltemp->cllnext->clldata == data)
        {
          printf("%d deleted from last\n", clltemp->cllnext->clldata);
          free(cllrear);
          cllrear = clltemp;
          cllrear->cllnext = cllfront;
          break;
        }
        else
        {
          printf("%d not found\n", data);
          break;
        }
      }

      // data is at middle position
      if (clltemp->cllnext->clldata == data)
      {
        printf("%d deleted\n", clltemp->cllnext->clldata);
        clldestruct = clltemp->cllnext;
        clltemp->cllnext = clltemp->cllnext->cllnext;
        free(clldestruct);
        break;
      }
      clltemp = clltemp->cllnext;
    } while (clltemp != cllfront);
  }
}

void clldisplay()
{
  int choice;

  if (cllfront == NULL)
  {
    printf("No elements in linked list!!!\n");
  }
  else
  {
    clltemp = cllfront;
    do
    {
      printf("%d\n", clltemp->clldata);
      clltemp = clltemp->cllnext;
    } while (clltemp != cllfront);
  }
}

void cllsearch()
{
  printf("to be done soon\n");
}

// Doubly linked list----------------------------------------------------------------------------------->>>>>>>>>>>>>>>>>>>
void dllins()
{
  int choice, pos, i;
  dllnewnode = (struct dllnode *)malloc(sizeof(struct dllnode));
  printf("Enter the value:");
  scanf("%d", &dllnewnode->dlldata);
  dllnewnode->dllnext = NULL;
  dllnewnode->dllprev = NULL;

  if (dllfront == NULL)
  {
    dllfront = dllnewnode;
    dllrear = dllnewnode;
    dllCtr++;
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
      dllnewnode->dllnext = dllfront;
      dllfront->dllprev = dllnewnode;
      dllfront = dllnewnode;
      dllCtr++;
    }
    else if (choice == 2)
    {
      dllrear->dllnext = dllnewnode;
      dllnewnode->dllprev = dllrear;
      dllrear = dllnewnode;
      dllCtr++;
    }
    else if (choice == 3)
    {
      printf("Enter the position of insertion:");
      scanf("%d", &pos);

      if (pos > dllCtr + 1)
      // if user inputs stupid position number
      {
        printf("Linked list doesn't have this much data\n");
      }
      else if (pos == 1)
      // means insert from the beginning
      {
        dllnewnode->dllnext = dllfront;
        dllfront->dllprev = dllnewnode;
        dllfront = dllnewnode;
        dllCtr++;
      }
      else if (pos == dllCtr + 1)
      // means insert from the end
      {
        dllrear->dllnext = dllnewnode;
        dllnewnode->dllprev = dllrear;
        dllrear = dllnewnode;
        dllCtr++;
      }
      else
      // insert anywhere from second to second last location
      {
        dlltemp = dllfront;
        for (i = 1; i < pos; i++)
        {
          if (i == pos - 1)
          {
            dllnewnode->dllnext = dlltemp->dllnext;
            dllnewnode->dllprev = dlltemp;
            dlltemp->dllnext = dllnewnode;
            dllnewnode->dllnext->dllprev = dllnewnode;
            break;
          }
          dlltemp = dlltemp->dllnext;
        }
        dllCtr++;
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

void dlldel()
{
  int pos, choice, i, data;
  if (dllfront == NULL)
  {
    printf("No Element in linked list\n");
  }
  else
  {

    printf("From where to delete the element?\n");
    printf("1: Front\n");
    printf("2: Rear\n");
    printf("3: Between\n");
    printf("4: Data wise\n");
    printf("5: Exit\n");
    printf("Choice:");
    scanf("%d", &choice);

    if (choice == 1)
    {
      if (dllfront->dllnext == NULL) // there's only one element in the linked list
      {
        printf("Removed Element:%d\n", dllfront->dlldata);
        free(dllfront);
        dllfront = NULL;
        dllrear = NULL;
        dllCtr--;
      }
      else
      {
        printf("Removed Element:%d\n", dllfront->dlldata);
        dlltemp = dllfront;
        dllfront = dllfront->dllnext;
        dllfront->dllprev = NULL;
        free(dlltemp);
        dllCtr--;
      }
    }

    else if (choice == 2)
    {
      if (dllfront->dllnext == NULL) // there's only one element in the linked list
      {
        printf("Removed Element:%d\n", dllfront->dlldata);
        free(dllfront);
        dllfront = NULL;
        dllrear = NULL;
        dllCtr--;
      }
      else
      {
        dllrear = dllrear->dllprev;
        free(dllrear->dllnext);
        dllrear->dllnext = NULL;
        dllCtr--;
      }
    }

    else if (choice == 3)
    {
      printf("Enter the position:");
      scanf("%d", &pos);

      if (pos > dllCtr)
      {
        printf("No element on position %d\n", pos);
      }
      else if (pos == 1)
      {                          // algo to delete element from front:
        if (dllfront == dllrear) // if there is only one element in the linked list
        {                        // and pos1 element is to be deleted
          printf("Removed Element:%d\n", dllfront->dlldata);
          free(dllfront);
          dllfront = NULL;
          dllrear = NULL;
          dllCtr--;
        }
        else
        { // if there are more than one element in the list
          printf("Removed Element:%d\n", dllfront->dlldata);
          dlltemp = dllfront;
          dllfront = dllfront->dllnext;
          dllfront->dllprev = NULL;
          free(dlltemp);
          dllCtr--;
        }
      }

      else
      {
        dlltemp = dllfront;
        for (i = 1; i < pos; i++)
        {
          dlltemp = dlltemp->dllnext;
        }

        if (dlltemp == dllrear)
        {
          printf("Removed Element:%d\n", dllrear->dlldata);
          dllrear = dllrear->dllprev;
          free(dllrear->dllnext);
          dllrear->dllnext = NULL;
          dllCtr--;
        }
        else
        {
          printf("Removed Element:%d\n", dlltemp->dlldata);
          dlltemp->dllprev->dllnext = dlltemp->dllnext;
          dlltemp->dllnext->dllprev = dlltemp->dllprev;
          free(dlltemp);
          dllCtr--;
        }
      }
    }
    else if (choice == 4)
    {

      printf("Enter the data:");
      scanf("%d", &data);
      dlltemp = dllfront;
      while (dlltemp != NULL)
      {
        // if only one node
        if (dllfront->dllnext == NULL)
        {
          if (dllfront->dlldata == data)
          {
            printf("%d deleted\n", dllfront->dlldata);
            free(dllfront);
            dllfront = NULL;
            dllrear = NULL;
            dllCtr--;
          }
          else
          {
            printf("%d not found\n", data);
          }
          break;
        }

        // data is at first node
        if (dllfront->dlldata == data)
        {
          printf("%d deleted\n", dllfront->dlldata);
          dllfront = dllfront->dllnext;
          free(dllfront->dllprev);
          dllfront->dllprev = NULL;
          dllCtr--;
          break;
        }

        // data is at last node
        if (dllrear->dlldata == data)
        {
          printf("%d deleted\n", dllrear->dlldata);
          dllrear = dllrear->dllprev;
          free(dllrear->dllnext);
          dllrear->dllnext = NULL;
          dllCtr--;
          break;
        }

        // data is at middle position
        if (dlltemp->dlldata == data)
        {
          printf("%d deleted\n", dlltemp->dlldata);
          dlltemp->dllprev->dllnext = dlltemp->dllnext;
          dlltemp->dllnext->dllprev = dlltemp->dllprev;
          free(dlltemp);
          dllCtr--;
          break;
        }
        dlltemp = dlltemp->dllnext;
      }
    }

    else if (choice == 5)
    {
      printf("\nExited\n");
    }
    else
    {
      printf("Invalid Choice\n");
    }
  }
}

void dlldisplay()
{
  int choice;

  if (dllfront == NULL)
  {
    printf("No elements in linked list!!!\n");
  }
  else
  {
    dlltemp = dllfront;
    do
    {
      printf("\n");
      printf("%d\n", dlltemp->dlldata);
      dlltemp = dlltemp->dllnext;
    } while (dlltemp != NULL);
  }
}

// Doubly-Circular linked list---------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>
void dcllins()
{
  int choice, pos, i;
  dcllnewnode = (struct dcllnode *)malloc(sizeof(struct dcllnode));
  printf("Enter the value:");
  scanf("%d", &dcllnewnode->dclldata);
  dcllnewnode->dcllnext = NULL;
  dcllnewnode->dcllprev = NULL;

  if (dcllfront == NULL)
  {
    dcllfront = dcllnewnode;
    dcllrear = dcllnewnode;
    dcllrear->dcllnext = dcllfront;
    dcllfront->dcllprev = dcllrear;
    dcllCtr++;
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
      dcllnewnode->dcllnext = dcllfront;
      dcllnewnode->dcllprev = dcllrear;
      dcllfront->dcllprev = dcllnewnode;
      dcllrear->dcllnext = dcllnewnode;
      dcllfront = dcllnewnode;
      dcllCtr++;
    }
    else if (choice == 2)
    {
      dcllnewnode->dcllprev = dcllrear;
      dcllnewnode->dcllnext = dcllfront;
      dcllrear->dcllnext = dcllnewnode;
      dcllfront->dcllprev = dcllnewnode;
      dcllrear = dcllnewnode;
      dcllCtr++;
    }
    else if (choice == 3)
    {
      printf("Enter the position of insertion:");
      scanf("%d", &pos);

      if (pos > dcllCtr + 1)
      // if user inputs stupid position number
      {
        printf("Linked list doesn't have this much data\n");
      }
      else if (pos == 1)
      // means insert from the beginning
      {
        dcllnewnode->dcllnext = dcllfront;
        dcllnewnode->dcllprev = dcllrear;
        dcllfront->dcllprev = dcllnewnode;
        dcllrear->dcllnext = dcllnewnode;
        dcllfront = dcllnewnode;
        dcllCtr++;
      }
      else if (pos == dcllCtr + 1)
      // means insert from the end
      {
        dcllnewnode->dcllprev = dcllrear;
        dcllnewnode->dcllnext = dcllfront;
        dcllrear->dcllnext = dcllnewnode;
        dcllfront->dcllprev = dcllnewnode;
        dcllrear = dcllnewnode;
        dcllCtr++;
      }
      else
      // insert anywhere from second to second last location
      {
        dclltemp = dcllfront;
        for (i = 1; i < pos; i++)
        {
          if (i == pos - 1)
          {
            dcllnewnode->dcllnext = dclltemp->dcllnext;
            dcllnewnode->dcllprev = dclltemp;
            dclltemp->dcllnext = dcllnewnode;
            dcllnewnode->dcllnext->dcllprev = dcllnewnode;
            break;
          }
          dclltemp = dclltemp->dcllnext;
        }
        dcllCtr++;
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

void dclldel()
{
  int pos, choice, i, data;
  if (dcllfront == NULL)
  {
    printf("No Element in linked list\n");
  }
  else
  {

    printf("From where to delete the element?\n");
    printf("1: Front\n");
    printf("2: Rear\n");
    printf("3: Between\n");
    printf("4: Data wise\n");
    printf("5: Exit\n");
    printf("Choice:");
    scanf("%d", &choice);

    if (choice == 1)
    {
      if (dcllfront->dcllnext == dcllfront) // there's only one element in the linked list
      {
        printf("Removed Element:%d\n", dcllfront->dclldata);
        free(dcllfront);
        dcllfront = NULL;
        dcllrear = NULL;
        dcllCtr--;
      }
      else
      {
        printf("Removed Element:%d\n", dcllfront->dclldata);
        dcllrear->dcllnext = dcllfront->dcllnext;
        dcllfront->dcllnext = dcllrear;
        dcllfront = dcllfront->dcllnext;
        free(dcllfront->dcllprev);
        dcllCtr--;
      }
    }

    else if (choice == 2)
    {
      if (dcllfront->dcllnext == dcllfront) // there's only one element in the linked list
      {
        printf("Removed Element:%d\n", dcllfront->dclldata);
        free(dcllfront);
        dcllfront = NULL;
        dcllrear = NULL;
        dcllCtr--;
      }
      else
      {
        printf("Removed Element:%d\n", dcllrear->dclldata);
        dcllrear = dcllrear->dcllprev;
        free(dcllrear->dcllnext);
        dcllrear->dcllnext = dcllfront;
        dcllfront->dcllprev = dcllrear;
        dcllCtr--;
      }
    }

    else if (choice == 3)
    {
      printf("Enter the position:");
      scanf("%d", &pos);

      if (pos > dcllCtr)
      {
        printf("No element on position %d\n", pos);
      }
      else if (pos == 1)
      {                            // algo to delete element from front:
        if (dcllfront == dcllrear) // if there is only one element in the linked list
        {                          // and pos1 element is to be deleted
          printf("Removed Element:%d\n", dcllfront->dclldata);
          free(dcllfront);
          dcllfront = NULL;
          dcllrear = NULL;
          dcllCtr--;
        }
        else
        { // if there are more than one element in the list
          printf("Removed Element:%d\n", dcllfront->dclldata);
          dcllfront = dcllfront->dcllnext;
          free(dcllfront->dcllprev);
          dcllfront->dcllprev = dcllrear;
          dcllrear->dcllnext = dcllfront;
          dcllCtr--;
        }
      }

      else
      {
        dclltemp = dcllfront;
        for (i = 1; i < pos; i++)
        {
          dclltemp = dclltemp->dcllnext;
        }

        if (dclltemp == dcllrear)
        {
          printf("Removed Element:%d\n", dcllrear->dclldata);
          dcllrear = dcllrear->dcllprev;
          free(dcllrear->dcllnext);
          dcllrear->dcllnext = dcllfront;
          dcllCtr--;
        }
        else
        {
          printf("Removed Element:%d\n", dclltemp->dclldata);
          dclltemp->dcllprev->dcllnext = dclltemp->dcllnext;
          dclltemp->dcllnext->dcllprev = dclltemp->dcllprev;
          free(dclltemp);
          dcllCtr--;
        }
      }
    }
    else if (choice == 4)
    {

      printf("Enter the data:");
      scanf("%d", &data);
      dclltemp = dcllfront;
      while (dclltemp != NULL)
      {
        // if only one node
        if (dcllfront->dcllnext == dcllfront)
        {
          if (dcllfront->dclldata == data)
          {
            printf("%d deleted\n", dcllfront->dclldata);
            free(dcllfront);
            dcllfront = NULL;
            dcllrear = NULL;
            dcllCtr--;
          }
          else
          {
            printf("%d not found\n", data);
          }
          break;
        }

        // data is at first node
        if (dcllfront->dclldata == data)
        {
          printf("%d deleted\n", dcllfront->dclldata);
          dcllfront = dcllfront->dcllnext;
          free(dcllfront->dcllprev);
          dcllfront->dcllprev = dcllrear;
          dcllrear->dcllnext = dcllfront;
          dcllCtr--;
          break;
        }

        // data is at last node
        if (dcllrear->dclldata == data)
        {
          printf("%d deleted\n", dcllrear->dclldata);
          dcllrear = dcllrear->dcllprev;
          free(dcllrear->dcllnext);
          dcllrear->dcllnext = dcllfront;
          dcllfront->dcllprev = dcllrear;
          dcllCtr--;
          break;
        }

        // data is at middle position
        if (dclltemp->dclldata == data)
        {
          printf("%d deleted\n", dclltemp->dclldata);
          dclltemp->dcllprev->dcllnext = dclltemp->dcllnext;
          dclltemp->dcllnext->dcllprev = dclltemp->dcllprev;
          free(dclltemp);
          dcllCtr--;
          break;
        }
        dclltemp = dclltemp->dcllnext;
      }
    }

    else if (choice == 5)
    {
      printf("\nExited\n");
    }
    else
    {
      printf("Invalid Choice\n");
    }
  }
}

void dclldisplay()
{
  int choice;

  if (dcllfront == NULL)
  {
    printf("No elements in linked list!!!\n");
  }
  else
  {
    dclltemp = dcllfront;
    do
    {
      printf("\n");
      printf("%d\n", dclltemp->dclldata);
      dclltemp = dclltemp->dcllnext;
    } while (dclltemp != dcllfront);
  }
}

void allins()
{
  int i, j;
  char exp1Choice, exp2Choice;

  // for expression 1
  printf("Enter Expression 1:\n");
  do
  {
    allnewnode = (struct allnode *)malloc(sizeof(struct allnode));
    allnewnode->allnext = NULL;
    printf("Element:");
    scanf(" %d%c%d", &allnewnode->coeff, &allnewnode->var, &allnewnode->exponent);

    // when no node
    if (allfront1 == NULL)
    {
      allfront1 = allnewnode;
      allrear1 = allnewnode;
    }
    // when some nodes
    else
    {
      allrear1->allnext = allnewnode;
      allrear1 = allnewnode;
    }
    printf("\nwhat to add more? (y/n):");
    scanf(" %c", &exp1Choice);

  } while (exp1Choice == 'y' || exp1Choice == 'Y');

  // for expression 2
  printf("Enter Expression 2:\n");
  do
  {
    allnewnode = (struct allnode *)malloc(sizeof(struct allnode));
    allnewnode->allnext = NULL;
    printf("Element:");
    scanf(" %d%c%d", &allnewnode->coeff, &allnewnode->var, &allnewnode->exponent);

    // when no node
    if (allfront2 == NULL)
    {
      allfront2 = allnewnode;
      allrear2 = allnewnode;
    }
    // when some nodes
    else
    {
      allrear2->allnext = allnewnode;
      allrear2 = allnewnode;
    }
    printf("\nwhat to add more? (y/n):");
    scanf(" %c", &exp2Choice);

  } while (exp2Choice == 'y' || exp2Choice == 'Y');
}

void alldisplay()
{
  int sum;
  alltemp1 = allfront1;
  alltemp2 = allfront2;
  if (alltemp1 == NULL)
  {
    printf("NO expressions to ADD :(\n");
  }
  else
  {
    do
    {
      if (alltemp1->exponent == alltemp2->exponent)
      {
        sum = alltemp1->coeff + alltemp2->coeff;
        printf("%d%c%d ", sum, alltemp1->var, alltemp1->exponent);
        alltemp1 = alltemp1->allnext;
        alltemp2 = alltemp2->allnext;
      }
      else if (alltemp1->exponent > alltemp2->exponent)
      {
        printf("%d%c%d ", alltemp1->coeff, alltemp1->var, alltemp1->exponent);
        alltemp1 = alltemp1->allnext;
      }
      else if (alltemp1->exponent < alltemp2->exponent)
      {
        printf("%d%c%d ", alltemp2->coeff, alltemp2->var, alltemp2->exponent);
        alltemp2 = alltemp2->allnext;
      }
    } while (alltemp1 != NULL && alltemp2 != NULL);

     if (alltemp1 == NULL && alltemp2 != NULL)
    {
      while (alltemp2 != NULL)
      {
        printf("%d%c%d ", alltemp2->coeff, alltemp2->var, alltemp2->exponent);
        alltemp2 = alltemp2->allnext;
      }
    }
    else if(alltemp1 != NULL && alltemp2 == NULL)
    {
      while (alltemp1 != NULL)
      {
        printf("%d%c%d ", alltemp1->coeff, alltemp1->var, alltemp1->exponent);
        alltemp1 = alltemp1->allnext;
      }
    }
  }
}