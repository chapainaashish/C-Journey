// Find the sum of digit inside 4 figure digit
#include<stdio.h>
int main()
{
    int num,r,n;
    int sum=0;
    printf("Enter a 4 digit number:");
    scanf("%d",&num);

    r=num%10;
    n=num/10;
    sum=sum+r;
    r=n%10;
    n=n/10;
    sum=sum+r;
    r=n%10;
    n=n/10;
    sum=sum+r;
    r=n%10;
    sum=sum+r;

    printf("The sum is %d",sum);
    return 0;
}

