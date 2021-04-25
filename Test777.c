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


    return 0;
}
