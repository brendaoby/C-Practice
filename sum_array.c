//Sum of elements of an array

#include <stdio.h>

int main()
{
    int boat[10] = {56, 78, 67, 6, 145, 14, 5, 69, 90, 80};
    int i;
    int sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum += boat[i];
    }
    printf("\nSum of array is %d", sum);
    return 0;
}
