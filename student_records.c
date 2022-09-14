//Prints student records

#include <stdio.h>

struct student
{
    char name[20];
    int age;
    int roll_no;
};

int main()
{
    int max = 10;
    int i;

    struct student s[max];

    for (i = 0; i < max; i++)
    {
        printf("Enter student name: ");
        scanf("%s", &s[i].name);
        printf("Enter student age: ");
        scanf("%d", &s[i].age);
        printf("Enter student roll number: ");
        scanf("%d", &s[i].roll_no);
    }
    for (i = 0; i < max; i++)
    {
        printf("Student's name: %s | Age: %d | Roll Number: %d", s[i].name, s[i].age, s[i].roll_no);
    }
    return 0;
}
