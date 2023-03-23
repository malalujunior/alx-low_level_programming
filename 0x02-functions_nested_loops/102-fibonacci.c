#include <stdio.h>

int main(void)
{
    int i, n;
    long int first = 1, second = 2, fib;

    printf("%ld, %ld", first, second);

    for (i = 3; i <= 50; i++)
    {
        fib = first + second;
        printf(", %ld", fib);
        first = second;
        second = fib;
    }

    printf("\n");
    return 0;
}
