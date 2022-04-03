#include <stdio.h>
#include <ctype.h>
int main()
{
   char c;
   printf("Enter some character. Enter $ to exit...\n");
   while (c != '$');
   {
      c = getchar();
      printf("\n Entered character is: ");
      putchar(c);
      printf("\n")
   } 
   return 0;
}