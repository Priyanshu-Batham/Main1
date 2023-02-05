#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SSM 10
#define CM 5
#define DEM 5


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
  struct sdnode *sdnext;
};
struct sdnode *sdfront = NULL;
struct sdnode *sdrear = NULL;
struct sdnode *sdtemp = NULL;
struct sdnode *sdnewnode;
void sdpush();
void sdpop();
void sddisplay();

// circular queue elements

int cfront = -1;
int crear = -1;
int cqueue[CM];
int ctemp = -1;
void cpush();
void cpop();
void cdisplay();

//double ended queue elements
int dequeue[DEM];
int defront=-1;
int derear=-1;
int detemp;
void depush();
void depop();
void dedisplay();

int main()
{
  int typeofqueue;
  int typeofsimplequeue;
  int simplestaticchoice;
  int simpledynamicchoice;
  int circularchoice; //because circular doesn't have dynamic so no need for circularstatichcoice
  int doubleendedchoice;
  clrscr();
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
      do
      {
        printf("\nWhich Operation to Perform?\n");
        printf("1:Insert\n");
        printf("2:Delete\n");
        printf("3:Display\n");
        printf("4:Exit\n");
        printf("Choice:\n");
        scanf("%d", &doubleendedchoice);
        switch (doubleendedchoice)
        {
        case 1:
          depush();
          break;
        case 2:
          depop();
          break;
        case 3:
          dedisplay();
          break;
        case 4:
          break;
        default:
          printf("Invalid Choice\n");
        }
      } while (doubleendedchoice != 4);
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
    for (ctemp=cfront+1; ctemp <= crear; ctemp++)
    {
      printf("%d\n", cqueue[ctemp]);
    }
  }
}

//<-------------double ended queue------------->
void depush(){
  int dechoice,num;
  printf("Add Elements from frontend or rearend??\n");
  printf("1: Rear\n");
  printf("2: Front\n");
  printf("Choice:");
  scanf("%d",&dechoice);

  if(dechoice==1){
    printf("Enter the Element:");
    scanf("%d",&num);
    if(derear+1 == DEM){
      printf("Queue Overflow\n");
    }
    else if(defront == -1){
      defront =0;
      derear=0;
      derear++;
      dequeue[derear]=num;
    }
    else{
      derear++;
      dequeue[derear]=num;
    }
  }

  else if(dechoice==2){
    printf("Enter the Element:");
    scanf("%d",&num);
    if(defront==-1 || defront == 0){
      printf("No space before frontend\n");
    }
    else{
      dequeue[defront]=num;
      defront--;
    }
  }
  else{
    printf("Invalid choice\n");
  }
}

void depop(){
  int choice;
  printf("Remove Elements from frontend or rearend??\n");
  printf("1: Front\n");
  printf("2: Rear\n");
  printf("Choice:");
  scanf("%d",&choice);
  if(choice==1){
    if(defront==-1){
      printf("Queue is empty\n");
    }
    else{
      defront++;
      printf("Removed element:%d\n",dequeue[defront]);
      if(defront==derear && defront != -1){
        defront=-1;
        derear=-1;
      }
    }
  }

  else if(choice==2){
    if(defront==-1){
      printf("Queue is empty\n");
    }
    else{
      printf("Removed element:%d\n",dequeue[derear]);
      derear--;
      if(defront==derear && defront != -1){
        defront=-1;
        derear=-1;
      }
    }
  }
  else{
    printf("Invalid choice\n");
  }
}

void dedisplay(){
  int choice;
  printf("Display Elements from frontend or rearend??\n");
  printf("1: Front\n");
  printf("2: Rear\n");
  printf("Choice:");
  scanf("%d",&choice);
  if(choice==1){
    if(defront==-1){
      printf("Queue Empty\n");
    }
    else{
      detemp=defront+1;
      while(detemp<=derear){
        printf("%d\n",dequeue[detemp]);
        detemp++;
      }
    }
  }

  else if(choice == 2){
    if(defront==-1){
      printf("Queue Empty\n");
    }
    else{
      detemp=derear;
      while(detemp>defront){
        printf("%d\n",dequeue[detemp]);
        detemp--;
      }
    }
  }
  else{
    printf("Invalid choice\n");
  }
}
