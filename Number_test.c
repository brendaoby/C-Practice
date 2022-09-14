// Progress to check if input number is positive.
#include <stdio.h>

/*
* main - Entry point
* Return: 0
*/
int main()
{
    int a=0;
    printf("\nEnter a number:");
    scanf("%d", &a);
    if(a>0)
    {
        printf("\nThe number %d is positive.", a);
    }
    else
    {
        printf("\nThe number %d is negative.", a);
    }
    printf("\n");
    return (0);
}
