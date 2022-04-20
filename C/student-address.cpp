#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[100], address[100], cell[100];
    int age;
    FILE *fptr;
    fptr = fopen("student.txt", "r");
    while(fscanf(fptr, "%s\t%s\t%s\t%d\n", name, address, cell, &age) != EOF) {
            if (strcmp(address, "Pokhara") == 0)
                printf("%s\t%s\t%s\t%d\n", name, address, cell, age);
            }
    fclose(fptr);
    return 0;
}