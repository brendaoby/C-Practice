//Reverses an array

#include <stdio.h>

int main()
{
    int cap[10] = {4, 6, 7, 1, 2, 3, 9, 8, 5, 58};
    int front, rear, tmp;

    front = 0;
    rear = 9;

    while (front < rear)
    {
        tmp = cap[front];

        cap[front] = cap[rear];

        cap[rear] = tmp;

        front++;
        rear--;
    }
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\n%d", cap[i]);
    }
    printf("\n");
    return 0;
}
