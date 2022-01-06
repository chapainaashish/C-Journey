// Find biggest number from given array
#include<stdio.h>
int main() {
    int array_size, i, big_num=0;
    printf("Enter the size of array\n");
    scanf("%d", &array_size);
    int user_array[array_size];

    printf("Enter array element\n");
    for (i = 0; i < array_size; i++)
        scanf("%d", &user_array[i]);

    for (i = 0; i < array_size; i++)
    {
        if (user_array[i] > big_num)
            big_num= user_array[i];

    }
    printf("The biggest number from given array is %d", big_num);
}

