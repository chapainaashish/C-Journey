//Display the name of the employees whose salary is greater than 5000
#include<stdio.h>
#include<string.h>
struct Employee{
    char name[50];
    char address[50];
    int salary;
}employee[5];

int main()
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("Enter employee name: ");
        scanf("%s", employee[i].name);
        printf("Enter employee address: ");
        scanf("%s", employee[i].address);
        printf("Enter employee salary: ");
        scanf("%d", &employee[i].salary);
    }
    print("Employee with 10,000+ salary;\n")
    for (int i=0; i<5; i++)
    {
        if (employee[i].salary > 10000)
        {
            printf("%s\t%s\t%d\t", employee[i].name,employee[i].address, employee[i].salary);
        }
    }
}
