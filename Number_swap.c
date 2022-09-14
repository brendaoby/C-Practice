// Function swaps two numbers

#include <stdio.h>

void swap(int *p1, int *p2);

int main()
{
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("\nThe value for a is %d while b is %d", a, b);
}
void swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
