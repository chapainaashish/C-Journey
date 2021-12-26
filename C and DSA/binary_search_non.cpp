// Binary Search in C
#include <stdio.h>
int binarySearch(int [], int, int, int);

int main()
{
    int array[100] = {3, 4, 5, 6, 7, 8, 9};
    int n = 7, x = 9, l=0;
    int result = binarySearch(array, x, l, n);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}
int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        // If found at mid, then return it
        if (array[mid] == x)
            return mid;

        // Search the left half
        if (array[mid] > x)
            return binarySearch(array, x, low, mid - 1);

        // Search the right half
        return binarySearch(array, x, mid + 1, high);
    }

    return -1;
}
