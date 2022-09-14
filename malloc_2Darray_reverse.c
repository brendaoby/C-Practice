/*
 * Program that accepts number of rows and
 * columns as input from user, initializes
 * the 2D array and accepts user input for
 * each row and column element then prints
 * the array in reverse
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, c;

    printf("Please enter the number of rows for array, Mal[r][c]: ");
    scanf("%d", &r);

    printf("\nPlease enter the number of columns for array, Mal[r][c]: " );
    scanf("%d", &c);

    int Mal[r][c];

    int *ptr = malloc((r * c) * sizeof(int));

    printf("\n");

    int i, j;

    printf("Enter array Mal[r][c]: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &Mal[i][j]);
        }
    }
    printf("\n-----------------------------------------------------------\n");
    for (i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf( "%d  ", Mal[i][j]);
        }
        printf( "\n" );
    }

    printf("The array Mal[r][c] in reverse is: ");
    for (i = r; i > 0; i--)
    {
        for(j = c; j > 0; j--)
        {
            printf( "%d  ", Mal[i][j]);
        }
        printf( "\n" );
    }
    free(ptr);
    return (0);
}
