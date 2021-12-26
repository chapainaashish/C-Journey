// Sorting user entered arrays and searching user key over it
// Algorithms Used: Merge Sort, Binary Search
#include<cstdio>
#define max 100
void merger(int [], int, int);
void merge_it(int [], int, int, int);
int binary_search(int [], int, int, int);
void display(int[], int);
int main()
{
    int arrays[max],l=0,n,i,key;
    printf("Enter Array size;\n");
    scanf("%d", &n);
    int h = n-1;
    printf("Enter the elements;\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arrays[i]);
    }
    merger(arrays,l,h);
    printf("Entered Arrays in ascending order;\n");
    display(arrays,h);

    printf("\nEnter a number to search\n");
    scanf("%d", &key);
    int result = binary_search(arrays, l, h, key);
    if (result == 1)
        printf("Search Successful!");
    else
        printf("Can't find element inside array!");

}
void display(int arrays[],int h)
{
    int i;
    for (i=0;i<=h;i++)
        printf("%d\t", arrays[i]);
}
void merger(int arrays[], int l, int h)
{
    if (l<h)
    {
        int mid = (l+h)/2;
        merger(arrays,l,mid);
        merger(arrays,mid+1,h);
        merge_it(arrays, l, mid, h);
    }
}
void merge_it(int arrays[], int l, int mid, int h)
{
    int arrays_b[max],k, i=l, j=mid+1;
    for (k=l; k<=h; k++)
    {
        if (i>mid)
        {
            arrays_b[k] = arrays[j];
            j ++;
        }
        else if (j>h)
        {
            arrays_b[k] = arrays[i];
            i ++;
        }
        else if (arrays[i] < arrays[j])
        {
            arrays_b[k] = arrays[i];
            i ++;
        }
        else if (arrays[i] > arrays[j])
        {
            arrays_b[k] = arrays[j];
            j ++;
        }
    }
    for (k=l; k<=h; k++)
        arrays[k] = arrays_b[k];
}
int binary_search(int arrays[], int l, int h, int key)
{
    if (l<=h)
    {
        int mid = l+(h-l)/2;
        if (key==arrays[mid])
            return 1;
        else if (key<arrays[mid])
            return binary_search(arrays, l, mid-1, key);
        else if (key>arrays[mid])
            return binary_search(arrays, mid+1, h, key);
    }
    return -1;
}

