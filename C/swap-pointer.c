#include <stdio.h>
void swap(int *x,int *y);
int main()
{
    int num1=10,num2=20;
    printf("Before  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    return 0;
}
void swap(int *x,int *y)
{
    int t = *x;
    *x   = *y;
    *y   =  t;
}