// Display whether entered character is alphabet or not
#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character;\n");
    scanf("%c", &x);
    if ((x >= 'a' && x<='z') || (x >= 'A' && x<= 'Z'))
        printf("%c is an alphabet", x);
    else
        printf("%c isn't alphabet", x);
}

