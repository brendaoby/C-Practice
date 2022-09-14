// Program determines whther an input is even or odd

#include <stdio.h>

/*
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
    int b;
    printf("\nEnter number here: ");
    scanf("%d", &b);
    if((b%2)==0)
    {
        printf("\nThe number is even.", b);
    }
    else
    {
        printf("\nThe number is odd.", b);
    }
    printf("\n");
    return (0);
}
