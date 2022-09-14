// Program prints a matrix in spiral order

#include <stdio.h>

#define R 4
#define C 5

/*
 * spiral_matrix - Prints a matrix in spiral order
 * row_end: Last item in row
 * col_end: Last item in column
 * mat[R][C]: Matrix to be printed in spiral order
 */

void spiral_matrix(int row_end, int col_end, int mat[R][C])
{
    int i;
    int row_ind = 0;/*Initializing row index to position 0*/
    int col_ind = 0;/*Initializing col index to position 0*/

    while (row_ind < row_end && col_ind < col_end)
    {
        for (i = col_ind; i < col_end; ++i)
        {
            printf("%d ", mat[row_ind][i]);
        }
        row_ind++;
        for (i = row_ind; i < row_end; ++i)
        {
            printf("%d ", mat[i][col_end-1]);
        }
        col_end--;
        if (row_ind < row_end)
        {
            for (i = col_end-1; i >= col_ind; --i)
            {
                printf("%d ", mat[row_end-1][i]);
            }
            row_end--;
        }
        if (col_ind < col_end)
        {
            for (i = row_end-1; i >= row_ind; --i)
            {
                printf("%d ", mat[col_end-1][i]);
            }
            col_end++;
        }
    }
}
int main(void)
{
    int i, j;
    int mat[R][C] = {{1,  2,  3,  4,  5},
        {6, 7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    /*Printing original array*/
    printf("The array in matrix form is :  \n");
	for(i = 0; i < R; i++)
	{
	for (j = 0; j< C; j++)
	{
	printf("%d  ", mat[i][j]);
    }
	printf("\n");
	}
	/*Printing the array in spiral form*/
	printf("The spiral form of above matrix is: \n");
    spiral_matrix(R, C, mat);
    return 0;
}
