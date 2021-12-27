//Binary search algorithm workflow in C
#include<stdio.h>
int binary_search(int [], int, int, int);
int main()
{
    int array[100] = {3, 4, 5, 6, 7, 8, 9};
    int n = 7, x = 9, l=0;
    int result = binary_search(array, x, l, n);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}
int binary_search(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) /2;

        if (array[mid] == x)
            return mid;

        if (array[mid] > x)
            return binary_search(array, x, low, mid-1);

        return binary_search(array, x, mid+1, high);
    }

    return -1;
}
