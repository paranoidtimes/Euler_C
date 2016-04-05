#include <stdio.h>

int
main (void)
{
    int max = 4000000;
    int previous = 1;
    int current = 2;
    int fib = 2;

    int sum = 0;

    while ( fib <= max ) {
        if ( ! ( fib & 1 ) ) {
            sum += fib;
        }

        fib = previous + current;
        previous = current;
        current = fib;
    }

    if ( 1 ) {
        printf("one\n");
    }
    if ( 0 ) {
        printf("zero\n");
    }
    printf("%d\n", sum);
    return 0;
}
