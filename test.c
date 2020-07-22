//#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>



/*
1. All American Express numbers start with 34 or 37 ; uses 15-digit numbers,
2. MasterCard numbers start with 51, 52, 53, 54, or 55 : uses 16-digit numbers,
(they also have some other potential starting numbers which we won’t concern ourselves with for this problem);
3. all Visa numbers start with 4. Visa uses 13- and 16-digit numbers.

$ ./credit
Number: 4003-6000-0000-0014
Number: foo
Number: 4003600000000014
VISA

20 % 10 = 0; /// Remainder is 0, % is modulo operator.
5 % 2 = 1 /// remainder is 1.
*/


int main(void)
{

    long number;
    do
    {
        number = get_long("Enter Credit Card number is number:  "); // for user input at least once.
    }
    while (number < 4000000000000 );

    printf(" The number is %ld \n", number);


    if (number >= 4000000000000  && number <= 4999999999999)
    {
        printf(" The number is Visa Card number\n");
    }

    else if (340000000000000 <= number && number <= 379999999999999)
    {
        printf(" The number is American Express number\n");
    }


        else if ( number >= 400000000000000 && number <= 4999999999999999)
    {
        printf(" The number is Visa Card number\n");
    }

        else if (5100000000000000 <= number && number <= 5599999999999999)
    {
        printf(" The number is Master Card number\n");
    }

    else

    { printf(" INVALID \n"); }


   /* do
    {
        number = get_long("Enter card number :  "); // for user input at least once.
    }
    while (number <=0);       // Fix range of input.

    */

 return 0;
}