// Program determines whether m is greater or less than n
#include <stdio.h>
/*
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
    int m=40, n=20;
    if(m>n)
    {
        printf("m is greater than n.");
    }
    else if(m<n)
    {
        printf("m is less than n.");
    }
    else{
        printf("m is equal n.");
    }
    printf("\n");
    return (0);
}
