// Prints mathematical table

#include <stdio.h>

int main()
{
    int i;
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, (n*i));
    }
}
