/* Printing this pattern
            1
		2	1	2
	3	2	1	2	3
4	3	2	1	2	3	4
*/

#include<stdio.h>
int main()
{
    int i, j ,n;
    int k = 3;
    for(i=1; i<5; i++)
    {
        for(n=1; n<=k; n++)
        {
            printf("\t");
        }
        for(j=i; j>0; j--)
        {
            printf("%d\t", j);
        }
        for(j=2; j<=i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
        k--;
    }
}

