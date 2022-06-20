#include<stdio.h>
int main()
{
    int array1[3][3] = {{1,2,3},{4,5,6}, {7, 8, 9}};
    int array2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int sum=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (array1[i][j] % 2 == 0)
                sum+=array1[i][j];

            if (array1[i][j] % 2 == 0)
                sum+=array2[i][j];
        }
    }
    printf("Total sum: %d", sum);
}