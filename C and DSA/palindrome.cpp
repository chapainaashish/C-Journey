// Checks whether the given number is palindrome or not
#include<stdio.h>
int main()
{
    int n,num,r;
    int rev=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(n==rev)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}

