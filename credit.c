#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>


int main(void)
{
    int sum1, sum2, sum = 0;
    int num ;
    long number;
    do
    {
        number = get_long("Please Enter Credit Card number :  "); // for user input cc number.
    }
    while (number <= 0);


/// For oddly place numbers.

    long workingccnum = number ;

    while (workingccnum > 0)
    {
        int lastdigit = workingccnum % 10;  // get the last number.

        sum = sum + lastdigit;

        workingccnum = workingccnum / 100 ; /// get the second number to add to last number.
    }

/// For evenly place numbers.


    workingccnum = number / 10 ;

    while (workingccnum > 0)
    {
        int lastdigit = workingccnum % 10; /// get the last number.

        int twiceddigits = lastdigit * 2;

        sum = sum + (twiceddigits % 10) + (twiceddigits / 10) ; /// Add the numbers

        workingccnum = workingccnum / 100 ; /// update the working number.
    }


    if (sum % 10 == 0) /// chechsum .
    {
        num = true;
    }
    else

    {
        num = false;
    }


    if (num == true && number >= 4000000000000  && number <= 4999999999999)
    {
        printf("VISA\n");
    }

    else if (num == true &&  340000000000000 <= number && number <= 349999999999999)
    {
        printf("AMEX\n");
    }

    else if (num == true &&  370000000000000 <= number && number <= 379999999999999)
    {
        printf("AMEX\n");
    }


    else if (num == true && number >= 400000000000000 && number <= 4999999999999999)
    {
        printf("VISA\n");
    }

    else if (num == true && number >= 5100000000000000  && number <= 5599999999999999)
    {
        printf("MASTERCARD\n");
    }

    else

    {
        printf("INVALID\n");

    }




    return 0;
}