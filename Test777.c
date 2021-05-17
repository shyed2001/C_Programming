#include <stdio.h>

int main (void)

{
    puts( "Activity: divide decimals with round-off (External resource))" );

    int CementPricePerBag = 45;

    int CementAmountPerBag = 120;
    double CementPoundNeeded, CementBagsNeeded;

    int TotalCementPoundPrice = 0;
    CementPoundNeeded = TotalCementPoundPrice = CementBagsNeeded = 0;

    puts( " Enter the amount of Cement you need for new Building Foundation" );

    scanf("%lf", &CementPoundNeeded);

    puts( " Price or average price of each 120-pound bags are 45 dollars once" );

    puts( " Cement Amount Per Bag = 120 pounds" );


    CementBagsNeeded = CementPoundNeeded/CementAmountPerBag ;

    int CementBagsNeededFinal = 0;

    CementBagsNeededFinal = (int) CementBagsNeeded +1;

    TotalCementPoundPrice = (CementBagsNeededFinal*CementPricePerBag );

    printf( "%d\n",CementBagsNeededFinal);


    printf( " Total price %d",TotalCementPoundPrice );

 printf( " \nCasting or conversion of data types\n" );

printf("\nDoubles or floats converted to integers , lose their value after decimal point\n");

     int XX1 = (double) 6.7;
     int XX2 = (double) 6.1;
     int XX3 = (double) 6.9;

     int XXX1 = (int) 6.7;
     int XXX2 = (int) 6.1;
     int XXX3 = (int) 6.9;

     printf( "\n int XX1 = (double) 6.7, XX1 =  %d", XX1 );

      printf( " \n int XX2 = (double) 6.1 XX2 = %d", XX2 );

       printf( " \n  int XX3 = (double) 6.9, XX3 =  %d", XX3 );


     printf( "\n int XXX1 = (int) 6.7, XXX1 =  %d", XXX1 );

      printf( " \n int XXX2 = (int) 6.1 XXX2 = %d", XXX2 );

       printf( " \n  int XXX3 = (int) 6.9, XXX3 =  %d", XXX3 );


    long double number;
    do
    {
        scanf("%ld", number);
        printf("Enter Credit Card number is number:  "); // for user input at least once.
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



