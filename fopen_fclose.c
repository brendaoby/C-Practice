// file I/O n C

#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("a.txt", "w");
    printf("Enter data:");
    while((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("a.txt", "r");
    while((ch = getchar()) != EOF)
        printf("%c", ch);
    fclose(fp);
}
