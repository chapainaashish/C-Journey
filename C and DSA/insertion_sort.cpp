#include<stdio.h>
// Example of insertion sort in C
int main()
{
    int i, j, key, n;
    int our_array[5] = {5,4,3,2,1};
    for (j=0; j<5; j++)
    {
        key = our_array[j];
        i = j-1;

        while (i>=0 && key<our_array[i])
        {
            our_array[i+1] = our_array[i];
            i = i -1;
        }
        our_array[i+1] = key;
        printf("%d ", our_array[i]);
    }

}
