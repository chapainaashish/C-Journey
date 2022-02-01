// find fibonacci upto 10th term
#include<stdio.h>
int main()
{
    int a=1,b=1,c;
    int i;
    printf("%d\t%d",a,b);
    for(i=1;i<=8;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}
