//Prints sum of digits of a given number

#include <stdio.h>

int sum(int n);

int main()
{
    int number = 5678;

    int sumOfDigits = sum(number);

    printf("Sum of digits of number %d is %d\n", number, sumOfDigits);

    return (0);
}
int sum(int n)
{
    /*n % 10 + sum (n / 10) - subproblem
    n == 0, return 0 - exit condition or base case*/

    int remainder;
    int div;

    if (n <= 0)
    {
        return 0;
    }
    else
    {

    remainder = n % 10;
    div = n / 10;

    return remainder + sum(div);
    }
}
