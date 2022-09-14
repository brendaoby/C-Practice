#ifndef BTREE_H_INCLUDED
#define BTREE_H_INCLUDED

#include <stdlib.h>
#include <string.h>

typedef struct treeNode
{
    char *data;
    struct treeNode *left;
    struct treeNode *right;
} TREE;

void addToTree(TREE **root, char *s)
{
     if (*root == NULL)
     {
        TREE *x = (TREE *)malloc(sizeof(TREE));
        x->data = s;
        x->left = NULL;
        x->right = NULL;
        *root = x;
        return;
     }
     TREE *temp = *root;
     int val = strcmp(temp->data, s);
     if (val == 0)
        return;
     else if (val > 0)
        addToTree(&(temp->left), s);
     else
        addToTree(&(temp->right), s);
}

// This method will return -1 if string is not found in the tree and 0 if it is
int searchString(TREE *root, char *s)
{
    if (root == NULL)
        return -1;
    int val = strcmp(root->data, s);
    if (val == 0)
        return 0;
    if (val > 0)
        return searchString(root->left, s);
    else
        return searchString(root->right, s);
}

#endif // BTREE_H_INCLUDED
