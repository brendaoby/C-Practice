// Function to sort an array of ten integers in ascending order

#include <stdio.h>

void swap(int *p, int x, int y);

int main()
{
    int a[10] = {43, 14, 29, 75, 35, 10, 6, 66, 50, 34};

    int i = 0;

    int j = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if(*(a+ i) > *(a + j))
            {
                swap(a, i, j);
            }
        }
    }
    printf("Array after sorting\n");
    for (i = 0; i < 10; i++)
    {
        printf("\n%d", *(a + i));
    }
}
void swap(int *p, int x, int y)
{
    int tmp = *(p + x);
    *(p + x) = *(p + y);
    *(p + y) = tmp;
}
