//Sample sting printer

#include <stdio.h>
#include <string.h>

int main ()
{
    char str[6] = "Hello";
    printf("%s\n", str);

    //Using strlen() - string length function
    printf("\nLength of sting is: %lu", strlen(str));

    //Using strcpy() - String copy
    char str1[6];
    strcpy(str1, str);
    printf("\nString 2 str1 is: %s", str1);

    //Using strncpy() - String copy to specified nth character
    char str2[4];
    strncpy(str2, str, 4);
    printf("\nString 3 str2 is: %s", str2);

    //strcmp() - Compares two strings(case sensitive)
    //stricmp() - Compares two strings

    return 0;
}
