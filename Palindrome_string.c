//Checks if a given string is a palindrome or not

#include <stdio.h>
#include <string.h>

int main ()
{
    char bet[5] = "abba";
    int len, start, end;

    len = strlen(bet);
    start = 0;
    end = len - 1;

    int result = 0;

    while (start <= end)
    {
        if (bet[start] != bet[end])
        {
            result = 1;
            break;
        }
        start++;
        end--;
    }
        (result == 0) ? printf("\nString is a palindrome") : printf("\nString is not a palindrome");
        return 0;
}
