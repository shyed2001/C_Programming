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


    return 0;
}
