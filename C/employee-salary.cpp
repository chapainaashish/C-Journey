#include<stdio.h>
struct Employee{
    char name[100], address[100];
    long int salary;
}emp[5];

int main()
{
    for (int i=0;i<5i++) {
        printf("Enter employee name;\n");
        scanf("%s", emp[i].name);
        printf("Enter employee address;\n");
        scanf("%s", emp[i].address);
        printf("Enter employee salary;\n");
        scanf("%ld", &emp[i].salary);
    }
    for (int i=0;i<5;i++) {
        if (emp[i].salary>10000)
            printf("%s\t%s\t%ld\n", emp[i].name, emp[i].address, emp[i].salary);
    }
    return 0;
}