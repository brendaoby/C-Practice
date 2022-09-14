// Finds a specific element in a binary search tree

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} BST;

void addNodetoBST(BST **ptr, int val);
int findVal(BST *root, int val);

int main()
{
    BST *Root = NULL;

    int a[10] = {5, 7, 8, 2, 45, 3, 9, 1, 4, 12};

    int i = 0;

    for (i = 0; i < 10; i++)
    {
        addNodetoBST(&Root, a[i]);
    }
    int x = 9;

    int v = findVal(Root, x);

    (v == 0) ? printf("\n%d value not found ", x) : printf("\n%d value found ", x);

    x = 78;

    v = findVal(Root, x);

    (v == 0) ? printf("\n%d value not found ", x) : printf("\n%d value found ", x);

    return 0;
}

/*
 * addNodetoBST - Creates BST from given array
 * @ptr: Address to root pointer
 * @val: Array to be used
 */

 void addNodetoBST(BST **ptr, int val)
 {
     if (*ptr == NULL)
     {
         BST *x = (BST *)malloc(sizeof(BST));
         x->data = val;
         x->left = NULL;
         x->right = NULL;
         *ptr = x;
         printf ("\nAdding %d", val);
         return;
     }
     BST *temp = *ptr;
     if (val > temp->data)
     {
         addNodetoBST(&(temp->right), val);
     }
     else
     {
         addNodetoBST(&(temp->left), val);
     }
 }
 /*
  * findVal - Searches for a value in a BST
  * @root: Address of root
  * @val: Value to be searched for
  * Return: 1 if value is found in BST,
  * 0 otherwise
  */

  int findVal(BST *root, int val)
  {
      if (root == NULL)
        return 0;
      if (val == root->data)
        return 1;
      if (val < root->data)
        return 0 | findVal(root->left, val);
      else
        return 0 | findVal(root->right, val);
  }
