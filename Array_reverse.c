// Program to input 10 elements in an array and output in reverse order

#include <stdio.h>

int main()
{
    int ball[10];
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Element of array at position %d: ", i);
        scanf("%d", &ball[i]);
    }
    printf("\n-------------------------------");
    printf("\nPrinting array in reverse order");

    for (i = 9; i > 0; i--)
    {
        printf("\n%d", ball[i]);
    }
    return 0;
}
