#include <stdio.h>
#include "list.h"
#include "btree.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Arguments entered by user are too few, please provide a string to search for");
        return 1;
    }
    if (argc > 2)
    {
        printf ("Too many arguments entered");
        return 2;
    }
    initialize();
    LIST *h = getListHeader();
    TREE *root = NULL;

    while (h != NULL)
    {
        addToTree(&root, h->data);
        h = h->next;
    }
    printf("\nUser wants to search %s in our list", argv[1]);

    int val = searchString(root, argv[1]);

    if (val == 0)
    {
        printf("\n%s found in the list", argv[1]);
    }
    else
    {
        printf("\n%s is not found in the list", argv[1]);
    }
}
