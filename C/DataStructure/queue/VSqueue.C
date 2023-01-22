#include <stdio.h>
#include <stdlib.h>
// #include<conio.h>
#define SSM 10
#define CM 5
// simple static queue elements
int ssrear = -1, ssfront = -1;
int ssqueue[SSM];
void sspush();
void sspop();
void ssdisplay();

// simple dynamic queue elements
struct sdnode
{
  int sdvalue;
  sdnode *sdnext;
};
struct sdnode *sdfront = NULL;
struct sdnode *sdrear = NULL;
struct sdnode *sdtemp = NULL;
struct sdnode *sdnewnode;
void sdpush();
void sdpop();
void sddisplay();

// circular static queue elements

int cfront = -1;
int crear = -1;
int cqueue[CM];
int ctemp = cfront;
void cpush();
void cpop();
void cdisplay();

int main()
{
  int typeofqueue;
  int typeofsimplequeue;
  int simplestaticchoice;
  int simpledynamicchoice;
  int circularchoice; //because circular doesn't have dynamic so no need for circularstatichcoice
  do
  {
    printf("\n<----------MENU--------->\n");
    printf("How to implement the queue?\n");
    printf("1:Simple Queue\n");
    printf("2:Circular Queue\n");
    printf("3:DoubleEnded Queue\n");
    printf("4:Priority Queue\n");
    printf("5:Exit\n");
    printf("Choice:");
    scanf("%d", &typeofqueue);
    switch (typeofqueue)
    {

    // For Simple Queue
    case 1:
      do
      {
        printf("\nHow to Implement?\n");
        printf("1:Statically\n");
        printf("2:Dynamically\n");
        printf("3:Exit\n");
        printf("Choice:");
        scanf("%d", &typeofsimplequeue);
        switch (typeofsimplequeue)
        {

        // for Simple Static Queue
        case 1:
          do
          {
            printf("\nWhich Operation to Perform?\n");
            printf("1:Insert\n");
            printf("2:Delete\n");
            printf("3:Display\n");
            printf("4:Exit\n");
            printf("Choice:\n");
            scanf("%d", &simplestaticchoice);
            switch (simplestaticchoice)
            {
            case 1:
              sspush();
              break;
            case 2:
              sspop();
              break;
            case 3:
              ssdisplay();
              break;
            case 4:
              break;
            default:
              printf("Invalid Choice\n");
            }
          } while (simplestaticchoice != 4);
          break;

        // for simple dynamic queue
        case 2:
          do
          {
            printf("\nWhich Operation to perform?\n");
            printf("1:Insert Element\n");
            printf("2:Delete Element\n");
            printf("3:Display Element\n");
            printf("4:Exit\n");
            printf("Choice:");
            scanf("%d", &simpledynamicchoice);
            switch (simpledynamicchoice)
            {
            case 1:
              sdpush();
              break;
            case 2:
              sdpop();
              break;
            case 3:
              sddisplay();
              break;
            case 4:
              break;
            default:
              printf("Invalid Choice\n");
            }
          } while (simpledynamicchoice != 4);
          break;

        case 3:
          break;

        default:
          printf("Invalid Choice\n");
        }
      } while (typeofsimplequeue != 3);
      break;

    // circular Queue
    case 2:
      do
      {
        printf("\nWhich Operation to Perform?\n");
        printf("1:Insert\n");
        printf("2:Delete\n");
        printf("3:Display\n");
        printf("4:Exit\n");
        printf("Choice:\n");
        scanf("%d", &circularchoice);
        switch (circularchoice)
        {
        case 1:
          cpush();
          break;
        case 2:
          cpop();
          break;
        case 3:
          cdisplay();
          break;
        case 4:
          break;
        default:
          printf("Invalid Choice\n");
        }
      } while (circularchoice != 4);
      break;

    // for Double Ended queue
    case 3:
      printf("\nDouble Ended queue under maintenance\n");
      break;

    // for Priority queue
    case 4:
      printf("\nPriority queue under maintenance\n");
      break;

    // exit mainloop
    case 5:
      break;
    default:
      printf("Invalid Choice\n");
    }
  } while (typeofqueue != 5);
  return 0;
}

// <------------simple static queue------------->
void sspush()
{
  int sdvalue;
  printf("\nEnter the value:");
  scanf("%d\n", &sdvalue);
  if (ssrear == -1 && ssfront == -1)
  {
    ssrear++;
    ssfront++;
  }
  if (ssrear >= SSM)
  {
    printf("\nQueue overflow\n");
  }
  else
  {
    ssqueue[ssrear] = sdvalue;
    ssrear++;
  }
}

void sspop()
{
  if (ssfront == -1)
  {
    printf("\nQueue underflow\n");
  }
  else if (ssfront == ssrear - 1 && ssfront != -1)
  {
    printf("Element Popped:%d\n\n", ssqueue[ssfront]);
    ssfront = -1;
    ssrear = -1;
  }
  else
  {
    printf("Element Popped:%d\n\n", ssqueue[ssfront]);
    ssfront++;
  }
}

void ssdisplay()
{
  int stemp = ssfront;
  if (stemp == -1)
  {
    printf("\nQueue Empty\n");
  }
  else
  {
    printf("\n");
    while (stemp < ssrear)
    {
      printf("%d\n", ssqueue[stemp]);
      stemp++;
    }
  }
}

// <------------simple dynamic queue------------->

void sdpush()
{
  int n;
  printf("Enter the element:");
  scanf("%d\n", &n);
  sdnewnode = (struct sdnode *)malloc(sizeof(struct sdnode));
  sdnewnode->sdvalue = n;
  sdnewnode->sdnext = NULL;

  if (sdfront == NULL)
  {
    sdfront = sdnewnode;
    sdrear = sdnewnode;
  }
  else
  {
    sdrear->sdnext = sdnewnode;
    sdrear = sdnewnode;
  }
}

void sdpop()
{
  if (sdfront == NULL)
  {
    printf("\nQueue Empty\n");
  }
  else
  {
    sdtemp = sdfront;
    sdfront = sdfront->sdnext;
    printf("Item popped=%d\n\n", sdtemp->sdvalue);
    free(sdtemp);
  }
}

void sddisplay()
{
  sdtemp = sdfront;
  if (sdtemp == NULL)
  {
    printf("\nQueue Empty\n");
  }
  else
  {
    while (sdtemp->sdnext != NULL)
    {
      printf("%d\n", sdtemp->sdvalue);
      sdtemp = sdtemp->sdnext;
    }
    printf("%d\n", sdtemp->sdvalue);
  }
}

// <--------------circular static queue-------------->
void cpush()
{
  int n;
  printf("\nEnter the value to be pushed:");
  scanf("%d/n", &n);
  if ((crear + 1) % CM == cfront)
  {
    printf("\nQueue if full\n");
  }
  else if (cfront == -1)
  {
    cfront = 0;
    crear = 0;
    crear = (crear + 1) % CM;
    cqueue[crear] = n;
  }
  else
  {
    crear = (crear + 1) % CM;
    cqueue[crear] = n;
  }
}

void cpop()
{
  if (cfront == -1)
  {
    printf("\nQueue is Empty\n");
  }
  else
  {
    cfront = (cfront + 1) % CM;
    printf("\nDeleted Element: %d", cqueue[cfront]);
    // csqueue[csfront]=NULL;
    if (cfront == crear)
    {
      cfront = -1;
      crear = -1;
    }
  }
}

void cdisplay()
{
  if (cfront == -1)
  {
    printf("\nQueue is Empty\n");
  }
  else
  {
    ctemp = cfront + 1;
    for (ctemp; ctemp <= crear; ctemp++)
    {
      printf("%d\n", cqueue[ctemp]);
    }
  }
}
