#include<stdio.h>
struct student{
    char name[100];
    char address[100];
    int age;
}students[10];
int main()
{
    for(int i=0; i<2; i++)
    {
        printf("Enter a name:\n");
        //scanf("%s", students[i].name);
        getchar();
        gets(students[i].name);

        printf("Enter a address:\n");
        getchar();
        gets(students[i].address);
        //scanf("%s", students[i].address);

        printf("Enter a age:\n");
        scanf("%d", &students[i].age);
    }

    for(int i=0; i<2; i++)
    {
        printf("%s\n%s\n%d\n", students[i].name, students[i].address, students[i].age);
    }
}

