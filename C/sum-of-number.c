//Finding the sum of number 
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int r,sum=0; 
    char number[100];
    
    //Note: we are taking number as string to find its length
    printf("Enter a number:");
    scanf("%s", number);
    
    //Finding number length 
    int len = strlen(number);
    
    //Typecasting string to integer
    int num = atoi(number);
    
    for (int i=0; i<len; i++)
    {
        r=num%10;
        num=num/10; 
        sum=sum+r; 
    }
    
    printf("The sum is %d",sum); 
    return 0;
}