//Ask user name and display happy birthday
#include<stdio.h>
int main()
{
    // since the variable itself point to an address there is no need to add "&" in scanf
    char name[100];
    printf("Enter your name\n");
    scanf("%s", name);
    printf("Happy Birthday %s\nMany many happy returns of the day!", name);

}


