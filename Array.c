//Prints the largest and smallest elements in an array

#include <stdio.h>

int main()
{
    int bee[10];
    int i;
    int min, max;

    for (i = 0; i < 10; i++)
    {
        printf("Element of array at position %d: ", i);
        scanf("%d", &bee[i]);
    }
    max = min = bee[0];

    for (i = 0; i < 10; i++)
    {
        if (bee[i] < min)
        {
            min = bee[i];
        }
        if (bee[i] > max)
        {
            max = bee[i];
        }
    }
    printf("\nMin element in array is: %d", min);
    printf("\nMax element in array is: %d", max);
    return 0;
}
