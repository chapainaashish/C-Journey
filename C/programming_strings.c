//String manuplation in C
/*Array and string are second class citizens in C. they do not support assignment operator once it is declared
 */
// in case of string scanf() function reads the sequence of characters until it encounters whitespace, newline, tab etc.

#include<stdio.h>
int main()
{
    char c[100]="welcome to hell";
    // we can't assign variable like this
    // c = "welcome to heaven" error
    printf(c);
}

