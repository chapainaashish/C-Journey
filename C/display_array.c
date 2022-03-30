// Program which take input as array and print that array in reverse order
#include<stdio.h>
int main()
{
    int array_size,i;
    printf("Enter the size of array\n");
    scanf("%d", &array_size);
    int user_array[array_size];

    printf("Enter array element\n");
    for (i=0;i<array_size;i++)
        scanf("%d",&user_array[i]);

    printf("Printing array in reverse order\n");
    for (i=array_size-1; i>=0; i--)
        printf("%d\t", user_array[i]);


}
/*
 *
 * add_executable(C_Journey
        "C and DSA/binary_searching.cpp"
        "C and DSA/display_array.cpp"
        "C and DSA/hello_world.cpp"
        "C and DSA/insertion_sort.cpp"
        "C and DSA/linear_searching_c.cpp"
        "C and DSA/matrix_calculator.cpp"
        "C and DSA/matrix_viewer.cpp"
        "C and DSA/mege_sort_full.cpp"
        "C and DSA/merge_sort_shortcut.cpp"
        "C and DSA/multipication_table.cpp"
        "C and DSA/oddfinder.cpp"
        "C and DSA/sort_arrays.cpp"
        "C and DSA/square_finder.cpp"
        "C and DSA/temprature_converter.cpp")
 *
 *
 *
 */
