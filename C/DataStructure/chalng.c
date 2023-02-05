#include <stdio.h>
#include <stdlib.h>

struct node
{
    // int id;
    char name[20];
    int salary;
    struct node *next;
} ;
struct node *temp = NULL;
struct node *pretemp = NULL;
struct node *start = NULL;
struct node *newnode;

void insert();
void display();


int main(){
    int i;
    for(i=0;i<5;i++){
        insert();
    }
    display();
    return 0;
}


void insert()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the name:");
    scanf("%s", &newnode->name);
    printf("Enter the salary:");
    scanf("%d", &newnode->salary);
    newnode->next = NULL;

    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            if (temp->salary > newnode->salary)
            {
                if (temp == start)
                { // found at first position
                    newnode->next = start;
                    start = newnode;
                    break;
                }
                else
                {
                    newnode->next = temp;
                    pretemp->next = newnode;
                    break;
                } // found in betweeen
            }
            if (temp->next == NULL)
            {
                temp->next = newnode;
                break;
            }
            pretemp = temp;
            temp = temp->next;
        }
    }
}

void display()
{
    temp = start;
    if (start == NULL)
    {
        printf("No Info\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("Name:%s\t",temp->name);
            printf("Salary:%d\n",temp->salary);
            temp = temp->next;
        }
    }
}
