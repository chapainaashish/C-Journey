// find fibonacci upto nth term
#include<stdio.h>
int main()
{
    int a=0, b=1, c, num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("%d\t%d",a,b);

    for(int i=3;i<=num;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}
