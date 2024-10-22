// Implementation of binary tree 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left , *right;
 };

struct node * create()
{
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter -1 for NULL child or any other number for continue : ");
    scanf("%d",&x);

    if(x == -1)
    {
        return 0;
    }
    else
    {
       printf("Enter an element : ");
       scanf("%d",&newnode->data);
       printf("\nEnter data for left child of %d",newnode->data);
       newnode->left = create();
       printf("\nEnter data for right child of %d",newnode->data);
       newnode->right = creat();
       return newnode;
    }
}

int main()
{
    struct node *root;
    root = create();
    return 0;
}