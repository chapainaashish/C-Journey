// Bubble sort implementation in C
#include<stdio.h>
int main()
{
    int array_size,i,j, temp;
    printf("Enter the size of array\n");
    scanf("%d", &array_size);
    int user_array[array_size];

    printf("Enter array element\n");
    for (i=0;i<array_size;i++)
        scanf("%d",&user_array[i]);

    for (i=0; i<array_size;i++)
    {
        for (j=0; j<array_size-i-1; j++)
        {
            if (user_array[j+1] < user_array[j])
            {
                temp = user_array[j];
                user_array[j] = user_array[j+1];
                user_array[j+1] = temp;
            }
        }
    }
    printf("Printing array by sorting it\n");
    for (i=0; i<array_size; i++)
        printf("%d\t", user_array[i]);
}

