#include <stdio.h>

int
main (void)
{
    int inner;
    int outer;
    int sum;
    int sum2;
    int reverse;
    int largest;

    int max = 999;
    int min = 100;

    for( outer = max; outer >= min; outer = outer - 1 ){
        for( inner = max; inner >= min; inner = inner - 1 ){
            sum = inner * outer;
            sum2 = sum;

            reverse = 0;

            // wont work if sum ends in 0, but works for our case
            // e.g. none of our numbers start with 0, thus no match
            // on numbers that end in zero
            while (sum2 != 0)
            {
                reverse = reverse * 10;
                reverse = reverse + sum2%10;
                sum2    = sum2/10;
            }
     
            if ( sum == reverse ) {
                if ( sum > largest ) {
                    largest = sum;
                }
                break;
            }
        }
    }
    printf("%d\n", largest);
    
    return 0;
}
