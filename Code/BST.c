#include<stdio.h>
#include<stdlib.h>

//unanimous  
// typedef struct 
// {
//     int data;
//     struct  left;
//     struct  right;
// }TREE;
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TREE;
//heap is slower than stack
//calloc sets 0 all the values
TREE * insert_into_bst(TREE* root,int x)
{
        TREE *newnode;
        //void returns we need typecast
        newnode=(struct tree *)malloc(sizeof(TREE));
        if(newnode==NULL)
        {
            printf("Memory allocation failed\n");
            return root;
        }
        newnode->data=x;
        newnode->left=NULL;
        newnode->right=NULL;
        if(root==NULL)
        {
              root=newnode;
               return root;
        }
        
        TREE *cur,*parent;
        parent=NULL;
        cur=root;
        while(cur)
        {
            parent=cur;
            if(newnode->data<cur->data)
            cur=cur->left;
            else
            cur=cur->right;
        }
        if(newnode->data<parent->data)
            parent->left=newnode;
        else
            parent->right=newnode;
      return root;
}

void inorder(TREE* root)
{
        if(root==NULL)
        return;
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
}

TREE * delete_from_root(TREE *root,int data)
{
    if(root==NULL)
    {
        printf("Root is Empty\n");
        return root;
    }
    TREE *cur,*parent,*succc,*p;
    cur=root;
    parent=NULL;
    while (cur!=NULL && data!=cur->data)
    {
        /* code */
        parent=cur;
        if(data<cur->data)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
        if(cur==NULL)
        {
            printf("item not found\n");
            return root;
        }
        if(cur->left==NULL)
        p=cur->right;
        else if(cur->right==NULL)
        p=cur->left;
        else
        {
            succc=cur->right;
            while(succc->left!=NULL)
            succc=succc->left;
            succc->left=cur->left;
            p=cur->right;
        }
        if(parent==NULL)
        {
            free(cur);
            return p;
        }
        if(cur==parent->left)
        parent->left=p;
        else
        parent->right=p;
        free(cur);
        return root;
    }
    
}
int main()
{
    TREE *root=NULL;
    
    root=insert_into_bst(root,3);
    root=insert_into_bst(root,2);
    root=insert_into_bst(root,6);
    root=insert_into_bst(root,1);
    root=delete_from_root(root,2);
    inorder(root);
}