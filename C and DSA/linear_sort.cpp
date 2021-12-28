//Linear searching algorith workflow in C
#include<stdio.h>
int linear_search(int [], int, int);
int main()
{
    int i, array_size, key;
    printf("Enter the array size:\n");
    scanf("%d", &array_size);
    int arrays[array_size];
    printf("Enter arrays elements:\n");
    for (i=0;i<array_size;i++)
        scanf("%d", &arrays[i]);
    printf("Enter a number to search\n");
    scanf("%d", &key);
    int result = linear_search(arrays,array_size, key);
    if (result == 1)
        printf("Search Successful!");
    else
        printf("Can't find element inside array!");
    return 0;
}
int linear_search(int arrays[], int array_size, int key)
{
    int j;
    for (j=0;j<array_size;j++)
    {
        if (arrays[j] == key)
            return 1;
    }
    return -1;

}
