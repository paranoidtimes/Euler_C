#include <stdio.h>

int
main (void)
{
    int a;
    int total = 100;
    int power = 0;
    int sum = 0;
    int diff;
    for( a = 1; a <= total; a = a + 1 ){
        power += a * a; 
    }
    for( a = 1; a <= total; a = a + 1 ){
        sum += a; 
    }
    sum = sum * sum;
    diff = sum - power;
    printf("power: %d sum: %d diff: %d\n", power, sum, diff);
    return 0;
}
