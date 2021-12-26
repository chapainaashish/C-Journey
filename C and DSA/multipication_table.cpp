#include<stdio.h>
int main()
{
	int fact, i, j;
	printf("Enter a number: ");
	scanf("%d", &fact);
	for (i=1; i<=fact; i++)
	{
		printf("\nMultipication table of %d\n", i);
		for (j=1; j<=10; j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
			
		}
	
	}
	return 0;
}
