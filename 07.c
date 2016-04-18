#include <stdio.h>

int
main (void)
{
    int prime = 0;
    int find = 10001;
    int size = find * 20;
    int seive[size];
    seive[0] = 1;
    seive[1] = 1;
    for(int j = 2; j <= size; j++) {
        if ( seive[j] == 1 ) {
            continue;
        } else {
            seive[j] = 0;
            for(int mark = j * 2; mark <= size; mark = mark + j) {
                seive[mark] = 1;
            }
        }
    }
    for(int j = 0; j <= size; j++) {
        if ( seive[j] == 1 ) {
            continue;
        } else {
            prime++;
            if ( prime == find ) {
                printf ("%d\n", j);
            }
        }
    }
}
