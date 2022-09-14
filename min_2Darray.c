// Prints the smallest element in a two-dimensional array

#include <stdio.h>

int main()
{
    int arr[3][2] = {{54, 32}, {6, 45}, {4, 30}};

    int i, j, rli, rlj;

    int min = arr[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if(arr[i][j] < min)
                min = arr[i][j];
                rli = i;
                rlj = j;
        }
        printf("Smallest element present in given array in position arr[%d][%d]: %d\n", rli, rlj, min);
    }
    return 0;
}
