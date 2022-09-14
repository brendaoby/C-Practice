//Prints the factorial value of number n

#include <stdio.h>

int main()
{
    int n;

    int i, fact;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    i = 1;
    fact = 1;

    while (1 <= n)
    {
        fact = fact = i;
        i--;
    }
    printf("Factorial of %d is %d", n, fact);

    return (0);
}
