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
struct node *insertNode(struct node *root, int val)
{
    if (root == NULL)
        root = createNode(val);
    else if (root->data > val)
        root->left = insertNode(root->left, val);
    else if (root->data < val)
        root->right = insertNode(root->right, val);

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
    else if (choice == 2)
    {
        if (root != NULL)
        {
            printf("\n%d", root->data);
            display(root->left, choice);
            display(root->right, choice);
        }
    }
    else if (choice == 3)
    {
        if (root != NULL)
        {
            display(root->left, choice);
            display(root->right, choice);
            printf("\n%d", root->data);
        }
    }
}

// ----------------SEARCH-------------->>>
struct node *search(struct node *root, int val)
{
    if (root != NULL)
    {
        if (root->data > val)
            root = search(root->left, val);
        else if (root->data < val)
            root = search(root->right, val);
    }
    return root;
}

// ----------------MIN-SEARCH-------------->>>
/* utility function to find the location of smallest node in a tree
using it in delete functionF*/

struct node *minSearch(struct node *root){
    if(root != NULL){
        if(root->left != NULL) root = minSearch(root->left);
    }
    return root;
}





<<<<<<< HEAD
// ----------------DELETE-------------->>>
=======
//----------------DELETE-------------->>>
>>>>>>> 1b6ffbd078474df3da102abec30261271c2c1dd0
struct node *delete(struct node *root, int val)
{

    // search for the target node
    if (root == NULL){
        printf("\n%d not found\n", val);
        return root;
    }
    else if (val < root->data)
        root->left = delete (root->left, val);
    else if (val > root->data)  
        root->right = delete (root->right, val);
    // if the target node is found
    else
    {
        // if it has zero or one child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            printf("\n%d removed\n",val);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            printf("\n%d removed\n",val);
            return temp;
        }
        // if it has two children
        else{
            struct node *minimum = minSearch(root->right);
            root->data = minimum->data;
            root->right = delete(root->right,minimum->data);
        }
    }
}

// ----------------MAIN FUNCTION-------------->>>
int main()
{
    int choice, val, displayChoice, target;
    do
    {
        printf("\n");
        printf("Which Operation to perform?\n");
        printf("1:Insert\n");
        printf("2:Display\n");
        printf("3:Search\n");
        printf("4:Delete\n");
        printf("5:Exit\n");
        printf("Choice:");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            printf("Enter the data:");
            scanf("%d", &val);
            if (root == NULL)
                root = createNode(val);
            else
                root = insertNode(root, val);
            break;

        case 2:
            printf("In What Order?\n");
            printf("1:In-Order\n");
            printf("2:Pre-Order\n");
            printf("3:Post-Order\n");
            printf("Choice:");
            scanf("%d", &displayChoice);
            printf("\n");
            display(root, displayChoice);
            break;

        case 3:
            printf("\nEnter the number to search:\n");
            scanf("%d", &target);
            struct node *location = NULL;
            location = search(root, target);
            if (location == NULL) printf("\n%d not found\n", target);
            else printf("\n%d found at memory address: %d\n", target, location);
            break;

        case 4:
            printf("\nEnter the number to delete:\n");
            scanf("%d", &target);
            delete(root, target);
            break;
        }
    } while (choice != 5);
    return 0;
}