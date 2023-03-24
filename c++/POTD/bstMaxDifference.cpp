#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;

    Node(int x)
    {
        data = x;
        right = NULL;
        left = NULL;
    }
};

class Solution
{
public:
    int sumTillTarget = 0;
    int childDiff = INT_MAX;

    Node *findTarget(Node *parent, int target)
    {
        if (parent == NULL)
        {
            return NULL;
        }
        else if (parent->data == target)
        {
            return parent;
        }
        else if (parent->data > target)
        {
            sumTillTarget += parent->data;
            findTarget(parent->left, target);
        }
        else if (parent->data < target)
        {
            sumTillTarget += parent->data;
            findTarget(parent->right, target);
        }
    }

    int childAdder(Node *parent, int sum){
        sum += parent->data;

        if(parent->left == NULL && parent->right == NULL){
            childDiff = min(childDiff,sum);
            return 0;
        }
        else if(parent->left == NULL){
            childAdder(parent->right, sum);
        }
        else if(parent->right == NULL){
            childAdder(parent->left, sum);
        }
        else{
            childAdder(parent->left, sum);
            childAdder(parent->right, sum);
        }
    }

    int maxDifferenceBST(Node *root, int target)
    {
        Node *middle = findTarget(root, target);
        if(middle == NULL){
            return -1;
        }
        else{
            childAdder(middle,0);
            return childDiff - target;
        }
    }
};

int main()
{
    Node *n1 = new Node(25);
    Node *n2 = new Node(20);
    Node *n3 = new Node(35);
    Node *n4 = new Node(15);
    Node *n5 = new Node(22);
    Node *n6 = new Node(30);
    Node *n7 = new Node(45);
    Node *n8 = new Node(32);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    n6->right = n8;

    Solution S;
    Node * ans = S.findTarget(n1,30);
    cout<<S.sumTillTarget<<endl;
    if(ans == NULL){
        cout<<"Null"<<endl;
    }
    else{
        cout<<ans->data;
    }
    return 0;
}