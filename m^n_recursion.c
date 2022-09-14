//m raised to the power of n with recursive function

#include <stdio.h>

int power(int m, int n);

int main ()
{
    int m, n, result;

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    result = power(m, n);

    printf("%d^%d = %d", m, n, result);
    return 0;
}
int power(int m, int n)
{
    if (n != 0)
        return (m * power(m, n - 1));
    else
        return 1;
}
