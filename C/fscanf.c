// C Program to demonstrate fscanf
/* Assuming that abc.txt has content in below
format
NAME AGE CITY
abc	 12 hyderabad
bef	 25 delhi
cce	 65 bangalore */

#include <stdio.h>

int main()
{
	FILE* ptr;
	char city[100];
	ptr = fopen("/home/aashish/Documents/C-Journey/C/", "r");

	while (fscanf(ptr, "%*s %*s %s ", city) == 1)
	{
		printf("%s\n", city);
	}
	return 0;
}
