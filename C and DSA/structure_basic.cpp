//Basic structure implementation
#include<stdio.h>
// Student is our own custom user-defined data type
struct Student{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    // accessing Student data type
    Student person;
    printf("Enter your name: ");
    scanf("%s",person.name);
    printf("Enter your roll: ");
    scanf("%d", &person.roll);
    printf("Enter your marks: ");
    scanf("%f",&person.marks);

    printf("Name: %s\nRoll no: %d\nMarks: %f", person.name, person.roll, person.marks);
}


