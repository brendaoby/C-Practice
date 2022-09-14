// Example of tenary operator
#include <stdio.h>
/*
* main - Entry point
* Return: 0 (Success)
*/
int main()
{
    int b;

    printf("\nEnter number here: ");
    scanf("%d, &b");

    ((b%2)==0) ? printf("%d is divisible by 2", b) : printf("%d is not divisible by 2", b);

    printf("\n");
    return (0);
}
