//Program to demonstrate switch case

#include <stdio.h>

int main()
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    switch(x % 2)
    {
    case 1:
        printf("x is not divisible by 2");
        break;
    case 0:
        printf("x is divible by 2");
        break;
    default:
        printf("I don't know");
    }
    printf("\n");
    return (0);
}
