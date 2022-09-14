//Rotating  a string a given number of times

#include <stdio.h>
#include <string.h>

int main ()
{
    char bet[5] = "gate";
    int n;
    char bet1[5];
    int i, p, len;

    len = strlen(bet);

    for (i = 0; i < len; i++)
    {
        n = 1;
        p = (i + n) % len;
        bet1[p] = bet[i];
    }
    bet1[len] = "\0";
    printf("\nRotated string is \n %s", bet1);
    return 0;
}
