#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 // CREATING NODE POINTER
    n = (struct node *)malloc(sizeof(struct node)); // ALLOCATING MEMORY IN THE HEAP
    n->data = data;                                 // SETTING DATA
    n->left = NULL;                                 // SETTING LEFT AND RIGHT CHILDREN TO NULL
    n->right = NULL;                                // SETTING LEFT AND RIGHT CHILDREN TO NULL
    return n;                                       //  RETURNING THE NODE
}

int main()
{
    /*
    // CONSTRUCTING THE ROOT NODE
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // CONSTRUCITING THE SECOND NODE
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    // CONSTRUCITING THE THIRD NODE
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->data = 2;
    p2->left = NULL;
    p2->right = NULL;

    // LINKING THE NODE WITH LEFT AND RIGHT CHILDREN
    p->left = p1;
    p->right = p2;
    */

    // CONSTRUCTING THE ROOT NODE USING FUNCTIONS
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    // LINKING THE NODE WITH LEFT AND RIGHT CHILDREN
    p->left = p1;
    p->right = p2;
    

    return 0;
}