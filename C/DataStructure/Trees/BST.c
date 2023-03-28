#include <stdio.h>
#include <stdlib.h>

// ----------------INSERT-------------->>>
// structure of a node
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

// allocating memory to a node
struct node *createNode(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = val;
    return newNode;
}

// inserting the node at appropriate place
struct node* insertNode(struct node *root, int val)
{
    if (root == NULL)
    {
        root = createNode(val);
    }
    else if (root->data > val)
    {
        root->left = insertNode(root->left, val);
    }
    else if (root->data < val)
    {
        root->right = insertNode(root->right, val);
    }
    return root;
}

// ----------------DISPLAY-------------->>>
void display(struct node *root, int choice)
{
    if (choice == 1)
    {
        if (root != NULL)
        {
            display(root->left, choice);
            printf("\n%d", root->data);
            display(root->right, choice);
        }
    }
    else if(choice == 2){
        if (root != NULL)
        {
            printf("\n%d", root->data);
            display(root->left, choice);
            display(root->right, choice);
        }
    }
    else if(choice == 3){
        if (root != NULL)
        {
            display(root->left, choice);
            display(root->right, choice);
            printf("\n%d", root->data);
        }
    }
}

// ----------------SEARCH-------------->>>
struct node *search(struct node *root, int val){
    if(root != NULL){
        if(root->data > val) root = search(root->left,val);
        else if(root->data < val) root = search(root->right,val);
    }
    return root;
}

// ----------------MAIN FUNCTION-------------->>>
int main()
{
    int choice, val,displayChoice,target;
    do
    {
        printf("\n");
        printf("Which Operation to perform?\n");
        printf("1:Insert\n");
        printf("2:Display\n");
        printf("3:Search\n");
        printf("4:Exit\n");
        printf("Choice:");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            printf("Enter the data:");
            scanf("%d", &val);
            if (root == NULL) root = createNode(val);
            else root = insertNode(root, val);
            break;

        case 2:
            printf("In What Order?\n");
            printf("1:In-Order\n");
            printf("2:Pre-Order\n");
            printf("3:Post-Order\n");
            printf("Choice:");
            scanf("%d",&displayChoice);
            printf("\n");
            display(root,displayChoice);
            break;

        case 3:
            printf("\nEnter the number to search:\n");
            scanf("%d",&target);
            struct node *location = NULL;
            location = search(root,target);
            if(location == NULL) printf("\n%d not found\n", target);
            else printf("\n%d found at memory address: %d\n",target,location);
            break;
        }
    } while (choice != 4);
    return 0;
}