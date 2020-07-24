#include "cs50.h"
#include <stdio.h>
#include <unistd.h>
#include <math.h>

/// cs50 library does not work on local IDE


int main(void)
{

    float dollars;

    do
    {
     float   dollars = get_float("Change owed?:  "); // for user input at least once.
    }
    while (dollars < 0);       // Fix range of input.

    int coins = 0;
    int cents = round(dollars * 100);  // converts to cents.

    while (cents >= 25)

    {
        cents = cents - 25;
        coins++;
    }

    while (cents >= 10)

    {
        cents = cents - 10;
        coins++;
    }

    while (cents >= 5)

    {
        cents = cents - 5;
        coins++;
    }
    while (cents >= 1)

    {
        cents = cents - 1;
        coins++;
    }

    printf("%i\n", coins); // print number of coins.

    return 0;
}
