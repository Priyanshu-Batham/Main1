#include<stdio.h>

struct node {
    int data;
    struct node *next;
};

struct node *newnode;
struct node *front = NULL;
struct node *rear = NULL;
struct node *temp = NULL;

int max = 0;
int min = 0;

void insert();
void display ();

int main() {

    insert();
    insert();
    insert();
    display();
    
    return 0;
}

void insert() {
    int val;
    printf("Enter the data:");
    scanf("%d",&val);

    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->data = val;
    if(front == NULL) {
        front = newnode;
        rear = newnode;
        max = val;
        min = val;
    }
    else {
        rear->next = newnode;
        rear = newnode;
    }
}

void display() {
    if(front == NULL) {
        printf("No Elements\n");
    }
    else if(front == rear) {
        printf("Max:%d\n",front->data);
        printf("Min:%d\n",front->data);
    }
    else {
        temp = front;
        while(temp != NULL){
            if(temp->data > max){
                max = temp->data;
            }
            if(temp->data < min){
                min = temp->data;
            }
            temp = temp->next;
        }
        printf("Max:%d\n",max);
        printf("Max:%d\n",min);
    }
}
