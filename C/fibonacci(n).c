// finding fibonnaci upto n number
#include <stdio.h>
void fibonacci(int);
int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    fibonacci(n);
}
void fibonacci(int n)
{
    int a=0, b=1, c=1;
    printf("Fibonacci Series: %d, %d, ", a, b);
    while (c <= n) {
        printf("%d, ", c);
        a = b;
        b = c;
        c = a + b;
    }
}

