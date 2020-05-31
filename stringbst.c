#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node//defining the node structure
{
    char data[100];
    struct node*left;
    struct node*right;
}*root=NULL;//initializing the root of the BST
struct node* createnode(char *data)//function that creates a new node and returns node pointer
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    strcpy(newnode->data,data);
    newnode->left=NULL;
    newnode->right=NULL;
        return newnode;
}
void inorder(struct node*temp)//function to traverse and print the BST
{
    if(temp!=NULL)
    {
        inorder(temp->left);
         printf("%s ",temp->data);
        inorder(temp->right);
    }
}
void insertnode(struct node*n,char *data)//function to insert new node by calling the createnode function
{
    if(strcmp(data,n->data)>0)
    {
        if(n->right)
            insertnode(n->right,data);
        else
            n->right=createnode(data);
    }
    else
    {
        if(n->left)
            insertnode(n->left,data);
        else
            n->left=createnode(data);
    }
}
void main()//creates the BST, inserts the data and prints the BST
{
    root=createnode("Dorothy");
    root->left=createnode("Christy");
    root->right=createnode("Eliza");
    root->left->left=createnode("Arithi");
    root->right->right=createnode("Fraser");
    insertnode(root,"David");// inserting data into the BST
    inorder(root);
}
