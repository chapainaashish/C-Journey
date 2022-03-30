//find entered array sum
#include<stdio.h>
int main() {
    int array_size, i, sum=0;
    printf("Enter the size of array\n");
    scanf("%d", &array_size);
    int user_array[array_size];

    printf("Enter array element\n");
    for (i = 0; i < array_size; i++)
        scanf("%d", &user_array[i]);

    for (i = 0; i<array_size; i++)
        sum += user_array[i];

    printf("The sum and average of given array is %d and %d", sum, sum/2);
}