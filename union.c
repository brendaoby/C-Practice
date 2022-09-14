//Union demo

#include <stdio.h>
#include <string.h>

union student
{
    char name[20];
    char subject[20];
    float percentage;
};
int main()
{
    union student record1;
    union student record2;
    strcpy(record1.name, "Brenda");
    strcpy(record1.subject, "Low Level Programming");
    record1.percentage = 96.5;
    printf("Name is: %s\n", record1.name);
    printf("Subject is: %s\n", record1.subject);
    printf("Percentage is: %f\n", record1.percentage);
    printf("Name is: %s\n", record2.name);
    strcpy(record2.subject, "High Level Programming");
    record2.percentage = 90.5;
    printf("Subject is: %s\n", record2.subject);
    printf("Percentage is: %f\n", record2.percentage);
    return 0;
}
