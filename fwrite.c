// Demonstrating fwrite

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt", "w+");
    fprintf(fp, "Test content\n");
    fputs("More test content", fp);
    fclose(fp);
    return 0;
}
