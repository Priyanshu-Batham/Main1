#include <stdio.h>
#include <stdlib.h>

// simple linked list declarations------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *front = NULL;
struct node *rear = NULL;
struct node *temp = NULL;
struct node *destruct = NULL;
struct node *newnode;
void ins();
void del();
void display();
void search();
void sort();
// ------------------------------------------------------------------>>>>>>>>>>>>>>>>>>>>>>>>>>
int main()
{
    int choice;
    do
    {
        printf("\nWhich Operation to perform?\n");
        printf("1:Insert Element\n");
        printf("2:Delete Element\n");
        printf("3:Display Element\n");
        printf("4:Search Element\n");
        printf("5:Sort Element\n");
        printf("6:Exit\n");
        printf("Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ins();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            sort();
            break;
        case 6:
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (choice != 6);
    return 0;
}

// simple linked list-------------------------------------------------------------->>>>>>>>>>>>>>>>
void ins()
{
    int choice, pos, i;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;

    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
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
            newnode->next = front;
            front->prev = newnode;
            front = newnode;
        }
        else if (choice == 2)
        {
            rear->next = newnode;
            newnode->prev = rear;
            rear = newnode;
        }
        else if (choice == 3)
        {
            printf("Enter the position of insertion:");
            scanf("%d", &pos);
            if (pos == 1)
            {
                newnode->next = front; // insert from front
                front->prev = newnode;
                front = newnode;
            }
            else if (pos == 2)
            {
                newnode->next = front->next;
                newnode->next->prev = newnode;
                newnode->prev = front;
                front->next = newnode;
            }
            else
            {
                temp = front;
                for (i = 1; i < pos - 1; i++)
                {
                    temp = temp->next;
                    if (temp == NULL)
                    {
                        rear->next = newnode;
                        newnode->prev = rear; // insert from rear
                        rear = newnode;
                        break;
                    }
                    else if (i == pos - 2)
                    {
                        newnode->next = temp->next;
                        newnode->next->prev = newnode;
                        temp->next = newnode;
                        newnode->prev = temp;
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

void display()
{
    int choice;

    if (front == NULL)
    {
        printf("No elements in linked list!!!\n");
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void del()
{
    int pos, choice, i, data;
    if (front == NULL)
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
            if (front->next == NULL) // there's only one element in the linked list
            {
                printf("Removed Element:%d\n", front->data);
                free(front);
                front = NULL;
                rear = NULL;
            }
            else
            {
                printf("Removed Element:%d\n", front->data);
                temp = front;
                front = front->next;
                front->prev = NULL;
                free(temp);
            }
        }

        else if (choice == 2)
        {
            if (front->next == NULL) // there's only one element in the linked list
            {
                printf("Removed Element:%d\n", front->data);
                free(front);
                front = NULL;
                rear = NULL;
            }
            else
            {
                temp = front;
                while (temp->next != rear)
                {
                    temp = temp->next;
                }
                printf("Removed Element:%d\n", rear->data);
                free(rear);
                rear = temp;
                rear->next = NULL;
            }
        }

        else if (choice == 3)
        {
            printf("Enter the position:");
            scanf("%d", &pos);

            if (pos == 1)
            {                      // algo to delete element from front:
                if (front == rear) // if there is only one element in the linked list
                {                  // and pos1 element is to be deleted
                    printf("Removed Element:%d\n", front->data);
                    free(front);
                    front = NULL;
                    rear = NULL;
                }
                else
                { // if there are more than one element in the list
                    printf("Removed Element:%d\n", front->data);
                    temp = front;
                    front = front->next;
                    front->prev = NULL;
                    free(temp);
                }
            }
            else if (pos == 2)
            { // for deleting position 2 element
                temp = front->next;
                front->next = temp->next;
                printf("Removed Element:%d\n", temp->data);
                free(temp);
                front->next->prev = front;
            }
            else
            {
                if (front == rear) // there's only one element in the linked list
                {
                    printf("Removed Element:%d\n", front->data);
                    free(front);
                    front = NULL;
                    rear = NULL;
                }
                else
                {
                    temp = front;
                    for (i = 1; i < pos - 1; i++)
                    {
                        if (temp->next == rear)
                        {
                            printf("Removed Element:%d\n", rear->data);
                            temp->next = NULL;
                            free(rear);
                            rear = temp;
                            break;
                        }
                        else if (i == pos - 2)
                        {
                            destruct = temp->next;
                            printf("Removed Element:%d\n", destruct->data);
                            temp->next = destruct->next;
                            destruct->next->prev = temp;
                            free(destruct);
                            break;
                        }
                        temp = temp->next;
                    }
                }
            }
        }
        else if (choice == 4)
        {

            printf("Enter the data:");
            scanf("%d", &data);
            temp = front;
            while (temp != NULL)
            {
                // if only one node
                if (front->next == NULL)
                {
                    if (front->data == data)
                    {
                        printf("%d deleted\n", front->data);
                        free(front);
                        front = NULL;
                        rear = NULL;
                        break;
                    }
                    else
                    {
                        printf("%d not found\n", data);
                        break;
                    }
                }

                // data is at first node
                if (front->data == data)
                {
                    printf("%d deleted\n", front->data);
                    temp = front;
                    front = front->next;
                    front->prev = NULL;
                    free(temp);
                    break;
                }

                // data is at last node
                if (temp->next->next == NULL)
                {
                    if (temp->next->data == data)
                    {
                        printf("%d deleted from last\n", temp->next->data);
                        free(rear);
                        rear = temp;
                        rear->next = NULL;
                        break;
                    }
                    else
                    {
                        printf("%d not found\n", data);
                        break;
                    }
                }

                // data is at middle position
                if (temp->next->data == data)
                {
                    printf("%d deleted\n", temp->next->data);
                    destruct = temp->next;
                    temp->next = temp->next->next;
                    destruct->next->prev = temp;
                    free(destruct);
                    break;
                }
                temp = temp->next;
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

void search()
{
    int search, count = 1;
    if (front == NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
        printf("Enter the data to be searched:");
        scanf("%d", &search);
        temp = front;
        while (temp != NULL)
        {
            if (temp->data == search)
            {
                printf("%d is at %d position\n", search, count);
                break;
            }
            if (temp->next == NULL)
            {
                printf("Element not found\n");
                break;
            }
            temp = temp->next;
            count++;
        }
    }
}

void sort()
{
    int key, choice;
    struct node *i = NULL;
    struct node *j = NULL;

    // no element to sort
    if (front == NULL)
    {
        printf("\nNo Element to sort\n");
    }
    // only ony element
    else if (front == rear)
    {
        printf("%d", front->data);
    }
    // the real show
    else
    {
        printf("Which Sort to apply?\n");
        printf("1: Bubble Sort\n");
        printf("2: Insertion Sort\n");
        printf("3: Selection Sort\n");
        printf("Choice:");
        scanf("%d", &choice);

        // Bubble sorting----------------------->>>>>>>>>>>>
        if (choice == 1)
        {
            printf("\nUnder Maintainence\n");
        }

        // insertion sorting----------------------------->>>>>>
        else if (choice == 2)
        {
            for (i = front->next; i != NULL; i = i->next)
            {
                key = i->data;
                j = i->prev;
                while (j != NULL && j->data > key)
                {
                    j->next->data = j->data;
                    j = j->prev;
                }
                // if j goes beyond first node also
                if (j == NULL)
                {
                    front->data = key;
                }
                // if j is no more greater than key even before reaching the first node
                else
                {
                    j->next->data = key;
                }
            }
            display();
        }

        // Selection sorting----------------------->>>>>>>>>>>>
        else if (choice == 3)
        {
            printf("\nUnder Maintainence\n");
        }
        else
        {
            printf("\nInvalid Choice\n");
        }
    }
}
