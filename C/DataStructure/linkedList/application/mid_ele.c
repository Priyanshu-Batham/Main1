#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
struct node *temp;
struct node *newnode;
int count = 0;


void insert();
void display();

int main(){
    int i,choice;
    do{
        printf("1 Insert?\n");
        printf("2 Display?\n");
        printf("3 Exit?\n");
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
    count++;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    
    if(front == NULL){
        front = newnode;
        rear = newnode;
        newnode->next = front;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void display(){
    int half = count/2;
    int i;
    temp = front;
    if(front == NULL){
        printf("NO element\n");
    }
    
    else if(count <= 2){
        printf("\nMiddle Element:%d\n",front->data);
    }
    else if(half % 2 == 0){
         for(i = 0;i < half-1;i++){
            temp = temp->next;
        }
        printf("\nMiddle Element:%d\n",temp->data);
    }
    else{
        for(i = 0;i < half;i++){
            temp = temp->next;
        }
        printf("\nMiddle Element:%d\n",temp->data);
    }
}