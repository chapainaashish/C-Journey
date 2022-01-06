//strupr() function is used to uppercase entered string
#include<stdio.h>
#include<string.h>
int main()
{
    char string[20], upper_string[20];
    printf("Enter a string\n");
    scanf("%s", string);
    upper_string = strupr(string);
    printf(upper_string);
    return 0;
}

