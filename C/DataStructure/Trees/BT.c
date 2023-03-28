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

// utility function to check the no of terminal nodes of a tree
int noOfNodes(struct node *root, int count)
{
    if(root == NULL) return count;
    else if (root->left == NULL && root->right == NULL) count++;
    else
    {
        if (root->left != NULL) count = noOfNodes(root->left, count);
        if (root->right != NULL) count = noOfNodes(root->right, count);
    }
    return count;
}

// inserting the node at appropriate place
struct node *insertNode(struct node *root, int val)
{
    int leftNodes = 0;
    int rightNodes = 0;

    if (root == NULL)root = createNode(val);
    else
    {
        leftNodes = noOfNodes(root->left, 0);
        rightNodes = noOfNodes(root->right, 0);

        if (leftNodes <= rightNodes) root->left = insertNode(root->left, val);
        else root->right = insertNode(root->right, val);
    }
    return root;
}

// ----------------DISPLAY-------------->>>
void display(struct node *root)
{
    if (root != NULL)
    {
        display(root->left);
        printf("\n%d ", root->data);
        display(root->right);
    }
}

// ------------------CALLING THE MAIN FUNCTION---------------->>>>
int main()
{
    int count = 0;
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 30);
    root = insertNode(root, 40);
    root = insertNode(root, 50);
    root = insertNode(root, 60);
    count = noOfNodes(root,count);
    printf("%d",count);

    // printf("hello");

    display(root);
    return 0;
}
