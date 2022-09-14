//Demo of string functions

#include <stdio.h>
#include <string.h>

int main ()
{
    char str[12] = "Hello";
    char str1[12] = "World";
    char str2[12];
    int len;

    strcpy(str2, str); /*copies str into str3*/
    printf("The new string 3 is now\n %s", str2);
    strcat(str, str1); /*concatenates str and str1*/
    printf("\nConcatenating str and str1 yields\n %s", str1);
    len = strlen(str); /*Finding the length of str after concatenating*/
    printf("\nThe lenth of str after concatenating is \n %lu", len);
    return 0;
}
