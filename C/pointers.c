// Pointers in C
// Pointers are special variable that are used to store variable address rather than its value
#include<stdio.h>
void pointer();
int main()
{
    int var=5;
    printf("Var value: %d\n", var);
    printf("Var address: %p\n", &var);
    pointer();
    return 0;
}
void pointer()
        {
            //Declaring pointer
            //*var_name = values
            //var_name = addrss
            int* p;

            int*pv, c;
            c = 5;
            pv = &c;
            printf("%d", *pv);

        }

