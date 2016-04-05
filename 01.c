#include <stdio.h>

int
main (void)
{
    int a;
    int total = 1000;
    int running;
    for( a = 3; a < total; a = a + 3 ){
        running += a; 
    }
    for( a = 5; a < total; a = a + 5 ){
        running += a; 
    }
    for( a = 15; a < total; a = a + 15 ){
        running -= a; 
    }
    printf("%d\n", running);
    return 0;
}
