#include <stdio.h>

int
main (void)
{
    int test;
    long number = 600851475143;

    // take out the 2s
    while ( number % 2 == 0 ) {
        printf("Found factor %d\n", test);
        number = number / 2;
    }

    for( test = 3; test <= number; test = test + 2 ){
        while ( number % test == 0 ) {
            printf("Found factor %d\n", test);
            number = number / test;
        }
    }
    
    return 0;
}
