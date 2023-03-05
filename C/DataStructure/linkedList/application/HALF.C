#include<stdio.h>
#include<conio.h>

struct node{
  int data;
  struct node *next;
};

struct node *newnode;
struct node *front = NULL;
struct node *rear = NULL;
struct node *mid = NULL;
struct node *temp;
int ct = 0;

void insert();
void display();

int main(){
  int choice;
  clrscr();
  do{
    printf("1: Insert\n");
    printf("2: display\n");
    printf("3: Exit\n");
    printf("Choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
      insert();
      break;
    case 2:
      display();
      break;
    }
  }while(choice != 3);
  return 0;
}

void insert(){
  int val;
  printf("Insert the data:");
  scanf("%d",&val);
  ct++;
  newnode = (struct node*) malloc(sizeof(struct node));
  newnode->data = val;
  newnode->next = NULL;

  if(front == NULL){
    front = newnode;
    rear = newnode;
    rear->next = front;
  }
  else{
    rear->next = newnode;
    rear = newnode;
    rear->next = front;
  }
}

void display(){
  int half,i;
  half = ct/2;
  temp = front;

  for(i=0;i<half;i++){
    temp = temp->next;
  }
  mid = temp;
  do{
     printf("%d\n",temp->data);
     temp = temp->next;
  }while(temp != mid);
}
