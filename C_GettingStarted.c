/*author/owner == Shyed Shahriar Housaini
License == MIT + terms and conditions of author/owner
Copyright: author/owner*/
// Multiple lines were commented.


#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// preprocessor directive

#define RUNS 1000UL
int main(void) // main function
{

        clock_t tStart = clock();


    printf("Hello, world!\n");
    printf ("I already know how to:\n"); /// '\n' is an escape sequence which starts a new line.
    printf ("  - Print text to the screen.\n");
    printf ("  - Start a new line.\n");
    printf ("  - Fix errors.\n");
    printf ("*****\n**|**\n*|.|*\n|...|\n.....\n"); /// Print multiple lines with one printf command.
    printf("Have fun with \"this\" course!\n"); // Print quotation mark and escape special characters '\'
    printf("Dennis Ritchie said:\n\"The only way to learn a new programming language is by writing programs in it.\"");
    /// Print quotation mark and escape special characters '\'

    int i = 0; /// Declare and assign a variable at the same time
    // variable declarations
    for(i = 0; i < 4; i++)
    {
        printf("Hello, world!\n"); ///Repeat one instruction with a for loop
    }
    // executable statements
    printf("\n");
    for(i = 0; i < 3; i++) // Repeat a block of instructions with a for loop
    {
        printf("Blah");
        printf("Bleh");
        printf("Blih ");
    }
    printf("\n");
    for (i=0; i<6; i++) ///Repeat a block of instructions with a for loop . //Comment at the end of an instruction
        /*///Comment on one dedicated line
        ///Comments inside comments work too.*/ ///Comments inside comments work too.
    {
        printf("Bloh");
        printf("Bluh ");
    }
    // executable statements
    for(i = 0; i < 3; i++)
    {
        printf("C is fun!\n");
    }
    printf("\n");
    for (i=0; i<5; i++)
    {
        printf("We can do everything with it!\n");
    }
    printf("\n");
    for(i = 0; i < 3; i++ )
    {
        printf("Hello ");
        printf("world!\n");
    }
    ///Discover the effect of simple looping errors

    for(i = 0; i < 3 ; i++ ) ///Simple looping errors
    {
        printf("Hello ");
        printf("world!\n");
    }
    printf("\n");
    for(i = 0; i < 3 ; i++ ) // Simple looping errors
        printf("Hello ");
    printf("world!\n");
    printf("\n");

    for(i = 0; i < 3 ; i++ )
        printf("Hello ");
    printf("world!\n");

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+\n");

    for (i = 0; i < 3; i++)
    {
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");

    puts("If I have 3 bills worth 5 dollars each then I have 15 dollars."); /// puts gives an \n after the line

    printf("If I have 3 bills worth 5 dollars each then I have 15 dollars.");

    puts("If I have 3 bills worth 5 dollars each then I have 15 dollars.");   // puts gives an \n after the line

    printf("If I have 3 bills worth 5 dollars each then I have 15 dollars.");

    printf("\nIf I have %d bills worth %d dollars each then I have %d dollars.",3,5,15);
    /// Use format specifier %d to print integer value

    printf("\nIf I have %d bills worth %d dollars each then I have %d dollars.",3,5,3*5); /// Multiplication
    /// Use format specifier %d to print integer value

    /// Perform simple integer arithmetic (+, -, *, ())
    printf("3+2 equals %d and 3-2 equals %d and 3*2 equals %d\n", 3+2, 3-2, 3*2);
    printf("3+2*3 equals %d and (3+2)*3 equals %d\n", 3+2*3, (3+2)*3);
    printf("2*8-2*7-4 equals %d\n", 2*8-2*7-4);
    printf("2*(8-2*(7-4)) equals %d\n", 2*(8-2*(7-4)));
    printf("2*(8-2*7)-4 equals %d\n", 2*(8-2*7)-4);


    ///Review: Declare and initialize integer variables
    //Perform simple integer arithmetic (+, -, *, ())
    ///Activity: perform simple arithmetic in C
    int X, Y, Z ;
    puts("Dear Procrastinator,\n");
    X=25-23;
    Y = (60 * 24 * X) ;
    Z = 60 * Y;
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", X, Y, Z);

    ///Store integers in variables

    //Create a variable to store an integer value
    int age;
    //Assigne a value to that variable
    age = 34;
    printf("I am %d years old.\n", age);
    printf("In %d years, I will be %d years old.\n", 8, age+8);
    printf("%d years ago, I was %d years old.\n", 11, age-11);

    //Create a variable to store an integer value
    age = 43;
    printf("I am %d years old.\n", age);
    printf("In %d years, I will be %d years old.\n", 8, age+8);
    printf("%d years ago, I was %d years old.\n", 11, age-11);

    int balance;//creating a variable containing integer values
    balance = 50;//assigning the value 50 into the balance variable
    printf("I have %d dollars in my account\n",balance);
    //expense of 40 dollars
    balance = balance - 40;
    puts("expense of 40 dollars");
    printf("I have %d dollars in my account\n",balance);
    //add 20 dollars in my account
    balance = balance + 20;
    puts("add 20 dollars to account");
    printf("I have %d dollars in my account\n",balance);
    //expense of 30 dollars
    balance = balance - 30;
    puts("expense of 40 dollars");
    printf("I have %d dollar in my account\n",balance);

    ///Review: Declare and initialize integer variables

    int Variable; //variable declaration

    Variable = 2; //assignment, definition, initialization

    int variable = 2; // variable must be declaration and initialization all in one step
    variable = 0; //assignment, definition, initialization
    int Balance = 50;
    //USE
    printf("I have %d dollars in my account\n", Balance);
    ///Declare and initialize variables in 1-step, with type name and definition


    balance = 40;//DEFINITION
    Balance = 30;
    printf("I have %d dollars in my account\n", balance);//USE
    printf("I have %d dollars in my account\n", Balance);//USE

    /// Variables are case sensitive
    ///Name your variables: do's and don'ts
    /* Variable names can use:
    lowercase and uppercase letters (characters) and digits
    do not use special characters like @ # & " ...
    do not use accented characters like é è à ...
    do not start with a digit
    start only with a letter
    spaces are forbidden
     _ may be used instead of a space in the name of the variable
    YouCanUseUppercaseLettersBetweenWordsInsteadOfSpaces

    Please Note:

    The list below has the keywords reserved by the C language. When the current programming language is C or C++,
    these keywords cannot be abbreviated, used as variable names, or used as any other type of identifiers.

    auto else long switch

    break enum register typedef  case extern return union char float short unsigned

    const for signed void  continue goto sizeof volatile

    default if static while  do int struct _Packed  double  */


/// Use variables in loops
    int numberOfHazelnuts = 0;
    int distanceTraveled = 0;
    for(i = 0; i < 9 ; i++)
    {
        printf("At %d miles I have %d hazelnuts.\n", distanceTraveled, numberOfHazelnuts);
        distanceTraveled = distanceTraveled + 1;
        numberOfHazelnuts = numberOfHazelnuts + 3;
    }
    int Times = 0;
    int Result = 0;
    int Number = 8;

    for (i = 0; i < 11; i++)
    {
        printf("%dx%d = %d\n", Times,Number,Result);

        Times = Times+1;
        Result = Times*Number;
    }

    /// Declare, assign and print characters with the %c format specifier

    char letter;//DECLARE A CHARACTER VARIABLE
    letter = 'a';//DEFINE or INITIALIZE or ASSIGN a character value
    printf("The letter is %c\n",letter);

    ///Activity: print characters
    char letter1, letter2, letter3 ;//DECLARE A CHARACTER VARIABLE

    letter1 = 'i';//DEFINE or INITIALIZE or ASSIGN a character value
    letter2 = 'n';
    letter3 = 'c';
    printf ("Programming %c%c %c\n", letter1, letter2, letter3);

    /// Declare, assign and print decimal numbers

    double h1, h2, h3, h4, h5;
    h1 = 1.9945;
    h2 = 1.9590;
    h3 = 0.995;
    h4 = 0.8999;
    h5 = 1.459;
    printf("I am %.1lf or %.1lf or %.1lf or %.1lf or %.1lf meters tall.\n",h1, h2, h3, h4, h5);
    printf("I am %.2lf or %.2lf or %.2lf or %.2lf or %.2lf meters tall.\n",h1, h2, h3, h4, h5);
    printf("I am %lf or %lf or %lf or %lf or %lf meters tall.\n",h1, h2, h3, h4, h5);

    puts("\n Read decimal numbers from user input with scanf() \n" );  /// may use scan\(\) for spacial character.




    ///Divide in C

    // integer division

    printf("5/2 d equals %d\n", 5/2);
    printf("5/2 i equals %i\n", 5/2);
    printf("5/2 ld equals %ld\n", 5/2);
    printf("5/2 lf equals %lf\n", 5/2);
    printf("5/2 lf equals %f\n", 5/2);
    // floating point division
    printf("5.0/2.0 lf equals %lf\n", 5.0/2.0);
    printf("5.0/2.0  d equals %d\n", 5.0/2.0);
    printf("5/2.0 lf equals %lf\n", 5/2.0);
    printf("5/2.0 f equals %f\n", 5/2.0);
    printf("5.0/2 lf equals %lf\n", 5.0/2);
    printf("5.0/2 ld equals %ld\n", 5.0/2);

    puts( "Divide with integer and double variables" );

    int intFive = 5;
    int intTwo = 2;
    double doubFive = 5.0;
    double doubTwo = 2.0;
    float ans = (5/2);
    float ANS = (5.0/2.0);
    printf("ANS=(doubFive/doubtTwo) d equals %d\n", ANS);
    printf("ANS=(doubFive/doubTwo) f equals %f\n", ANS);
    printf("ANS=(doubFive/doubTwo)ld equals %ld\n", ANS);
    printf("ANS=(doubFive/doubTwo)lf equals %lf\n", ANS);

    printf("intFive/intTwo equals %d\n", intFive/intTwo);
    printf("intFive/intTwo equals %lf\n", intFive/intTwo);
    printf("doubFive/doubTwo equals %lf\n", doubFive/doubTwo);
    printf("doubFive/intTwo equals %lf\n", doubFive/intTwo);
    printf("intFive/doubTwo equals %lf\n", intFive/doubTwo);




    puts( "Find the remainder in integer division\n" );

    /// pay 166 dollars using 20-dollar bills, rest with 1-dollar bills
    int twenties = 166/20;
    int rest = 166%20;
    printf("I will pay %d dollars with 20-dollar bills.\n", twenties * 20);
    printf("I will then pay %d dollars with 1-dollar bills.\n", rest);




    double height;
    printf("How tall are you (Type in meters and press enter )? \n");
    scanf("%lf", &height);
    printf("I am %.2lf meters tall.\n", height);


    puts( " Read integers and doubles with scanf()\n" );
    //int age;
    //double height;
    printf("What is your age?");
    scanf("%d",&age);
    printf("What is your height?");
    scanf("%lf",&height);
    printf("\nYou are %d years old and %.2lf meters tall.\n",age,height);


    puts( " Read integers and doubles with one scanf() statement \n" );

    printf("What is your age and height (separate with spaces)?\n");
    scanf("%d %lf",&age,&height);
    printf("You are %d years old and %.2lf meters tall.\n",age,height);


    /// Activity: read a decimal number
    double km = 0;
    double mile = 0;

    puts( "\nPlease type distance in kilometers and press enter\n" );

    scanf("%lf", &km);
    mile = (km*0.621371);
    printf("%lf\n",km*0.621371);



    /*
        When you declare:

        int column, row, index = 0;
        Only index is set to zero.

        However you can do the following:

        int column, row, index;
        column = index = row = 0;
        But personally I prefer the following which has been pointed out.
        It's a more readable form in my view.

        int column = 0, row = 0, index = 0;
        or

        int column = 0;
        int row = 0;
        int index = 0;

        */


    puts( "Activity: find the remainder in integer division" );

    int sticks =0;
    int sticksPerBox = 0;
    int box,left;
    box = left = 0;
    printf( " Please type Total stick numbers and sticks per box, then press enter" );

    scanf("%d %d", &sticks, &sticksPerBox);
    box = sticks/sticksPerBox;
    left = sticks%sticksPerBox;
    printf("%d\n%d", box, left);

    Times = Result = Number = 0;
    puts("PLEASE Enter a Number \n ");
    scanf("%d", &Number);
    for (i = 0; i < 11; i++)
    {
        printf("%dx%d = %d\n", Times,Number,Result);

        Times = Times+1;
        Result = Times*Number;
    }

    /// Read integer user input using scanf()

    int age2;//DECLARE
    printf("Whare is your age ?\n");
    scanf("%d",&age2);
    printf("You are %d years old\n", age2);//USE


    ///Read multiple integers using one scanf() statement
    int first, second, third;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &first, &second, &third);
    printf("You entered: %d for first, %d for second, %d for third.\n", first, second, third);

    long double first1, second1, third1;
    printf("Please enter three integers: ");
    scanf("%ld%i%d", &first1, &second1, &third1);
    printf("You entered: %ld for first, %ld for second, %ld for third.\n", first1, second1, third1);
    /// Previous 4 linesof code does not work properly


    /// Use scanf() inside a loop to read multiple user inputs

    int howMany = 0;
    int sum = 0;
    int numberRead = 0;
    printf("How many items do you want to add?\n");
    scanf("%d",&howMany);
    for(int i = 0; i < howMany; i++)
    {
        printf("What item do you want to add?\n");
        scanf("%d",&numberRead);
        printf("I have read %d from the input terminal\n",numberRead);
        sum = sum + numberRead;
        printf("sum equals %d\n",sum);

    }

    puts( "\nConvert double to integers\n" );

    double dOne, dTwo;
    int iOne, iTwo;
    printf("Please enter two decimals: ");
    scanf("%lf %lf", &dOne, &dTwo);
    printf("I read dOne = %lf, dTwo = %lf.\n", dOne, dTwo);
    iOne = (int) dOne;
    iTwo = (int) dTwo;
    printf("iOne = %d, iTwo = %d.\n", iOne, iTwo);
    printf("%d / %d = %d.\n", iOne, iTwo, iOne/iTwo);



    printf("Doubles or floats converted to integers , lose their value after decimal point");

     int XX1 = (double) 6.7;
     int XX2 = (double) 6.1;
     int XX3 = (double) 6.9;

     printf( "\n int XX1 = (double) 6.7, XX1 =  %d", XX1 );

      printf( " \n int XX2 = (double) 6.1 XX2 = %d", XX2 );

       printf( " \n  int XX3 = (double) 6.9, XX3 =  %d", XX3 );




    puts( "\nAverage of grades and Convert integers into doubles\n" );

    int IhowMany = 0;
    double SUM = 0;
    int NumberRead = 0;
    double avg = 0;
    printf("How many grades do you want to average?\n");
    scanf("%d",&IhowMany);
    for(int i = 0; i < IhowMany; i++)
    {
        printf("What grade do you want to add?\n");
        scanf("%d",&NumberRead);
        printf("I have read %d from the input terminal\n",NumberRead);
        SUM = SUM + NumberRead;
        double howMany = (double)IhowMany;
        avg = (SUM/howMany);
        printf("SUM and avg equals %lf and %lf\n",SUM, avg);
    }

    printf("\n%.2lf\n", avg);

///Read characters from the user input

    char letter11;
    char letter21;
    char letter31;
    char letter41;
    printf("Please enter two letters separated by a comma:");
    scanf("%c,%c", &letter11, &letter21);

    printf("I read the letters %c and %c.\n", letter11, letter21 );

    printf("Please enter two letters separated by a space:\n");
    scanf("%c %c", &letter31, &letter41 );
    printf("I read the letters %c and %c", letter31, letter41 );


    puts( " Activity: convert doubles to integers (External resource)\n  Get expected total population from current population and growth rate" );
    double TotalPopulation;

    int totalPopulation;

    int CurrentPopulation = 0;

    double groth = 0;

    puts( "Please enter the current population \n" );

    scanf("%d", &CurrentPopulation);

    puts( "Please enter the growth rate in percentage\n" );

    scanf("%lf", &groth);

    double GROTH = groth/100;

    TotalPopulation = CurrentPopulation + CurrentPopulation*GROTH;

    totalPopulation = (int) TotalPopulation;

    printf(" Estimated total population in future = %d\n", totalPopulation);


    puts( "Activity: divide decimals (External resource)" );

    double money, bookPrice;

    money = bookPrice = 0;

    puts( " Enter the amount of money you have" );

    scanf("%lf", &money );

    puts( " Enter the price or average price of each book once" );

    scanf("%lf", &bookPrice );

    int booknumber = money/bookPrice;

    printf( "You will be able to buy %d books\n", booknumber );

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

    /// Activity: read characters


    char sign;

    scanf("%c", &sign);
    printf("++++%c++++\n+++%c%c%c+++\n++%c%c%c%c%c++\n+%c%c%c%c%c%c%c+\n%c%c%c%c%c%c%c%c%c",sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign,sign);


    puts( "Activity: divide numbers, convert temperatures" );
    double TemperatureF =0 ;
    double TemperatureC =0;



    scanf("%lf", &TemperatureC);
    TemperatureF = TemperatureC * 9.0 / 5.0 + 32.0;
    printf("%.1lf", TemperatureF);




    /// free();
    free(Times);
    //free();
    free(first);
    free(age2); /// Free up memory
    free(Y); /// Free up memory
    free(Balance); /// Free up memory

    /// return statement
    return 0;




    puts( " Use an if statement with a static condition " );

    int ifnum1=4;
    int ifnum2=10;
    int result;

    if(23) /// Simple indented if statements does not need { }

                /// if it is true then do this
        /// if it is not true, then do not do this
        /// 0 always means FALSE
        /// All non zero values are TRUE
        printf("Condition is true, I am executing this line.");

    if(0)
    {
        printf("Condition is true, I am executing this line.");
    }  /// BECAUSE OF FALSE CONDITION NOTHING WAS EXECUTED

    int weatherIsGood = 0;
    if(weatherIsGood)
    {
        printf("Condition is true, I am executing this line.");
    }/// BECAUSE OF FALSE CONDITION NOTHING WAS EXECUTED

    weatherIsGood = 99; //the weather is good!
    if(weatherIsGood)
    {
        printf("The weather is good!\n");
        printf("I can go outside! Yeah!\n");
    }



puts( " Use if and else with a static condition" );


weatherIsGood = 0; // It's cloudy!!
    if(weatherIsGood){
        printf("The weather is good!\n");
        printf("That's great, I can go outside!\n");
    }else{
        printf("The weather is bad!\n");
        printf("Too bad, I have to stay home!\n");
    }


  puts( " Use an if statement with a dynamic condition " );

    if (ifnum1 > ifnum2)
    {

        result = ifnum1;
    }
    else
    {
        result = ifnum2;
    }

    printf(" Bigger number of 4 and 10  is: %d \n", result);

    if (!(1==1))
    {
        printf(" True\n");
    }
    else
    {
        printf("False\n");
    }

    if (1!=1) /// != not equal
    {
        printf(" True\n");
    }
    else
    {
        printf("False\n");
    }

    if (1==1) /// == equal to.
    {
        printf(" True\n");
    }
    else
    {
        printf("False\n");
    }

    printf("+ - * / % : arithmetic operators\n");
    printf("// < > <= >= != == : comparison operators \n");
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
    int a = 5;
    int b = 2;
    bool RES;
    puts( "Use of bool in C, Prerequisite: Bool Data Type in C++, The C99 standard for C language supports bool variables.  " );
    puts( "Unlike C++, where no header file is needed to use bool, a header file “stdbool.h” must be included to use bool in C.  " );
    puts( "If we save the below program as .c, it will not compile, but if we save it as .cpp, it will work fine. " );


    puts( " bool is an alias to _Bool to avoid breaking existing C code which might be using bool as an identifier." );
    puts( "#include <stdbool.h> Note if we do not include the above header file, then we need to replace bool with _Bool and the code will work as usually." );





    printf("Check: Is a == b?\n");
    RES = (a==b);
    printf("Result is %d.\n", RES);

    result;
    printf("Check: Is a == b?\n");
    result = (a==b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }
        printf("Check: Is a < b?\n");
    result = (a<b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }
        printf("Check: Is a > b?\n");
    result = (a>b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }

        printf("Check: Is a <= b?\n");
    result = (a<=b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }
    printf("Check: Is a >= b?\n");
    result = (a>=b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }

        printf("Check: Is a != b?\n");
    result = (a!=b);
    printf("Result is %d.\n", result);
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }



     printf(" Activity: if else to find cost of carpool (External resource)");

    puts( " You are planning a car trip so you post on a carpooling website in order to share the cost of the trip. " );

    puts( "   If you have 0 passengers the carpool site does not charge anything and you alone pay the full cost of the trip." );

    puts( " ($1 fee + gas) among the passengers and you. You want to write a program that calculates the cost you have to pay. " );

    puts( "  The program should read the number of passengers (an integer) and the cost of gas for the trip (a decimal number). " );

    puts( " The program should then print the cost that you have to pay (a decimal number) with 2 digits after the decimal point. " );

    int NumberOfPassengers = 0 ;
    int TotalNumberOfPassengers = 0 ;
    double avgtripcost, CostOfGas, TotalTripCost;

    avgtripcost = CostOfGas = TotalTripCost = 0 ;

    printf(" Please enter an integer number for number of passengers\n");

    scanf("%d", &NumberOfPassengers);

    printf(" Please enter an Decimal number for cost of gas\n");

    scanf("%lf", &CostOfGas);

    if ( NumberOfPassengers < 1)
        avgtripcost = CostOfGas;

    else
    {
        /// TotalTripCost = (1 + CostOfGas);
        /// TotalNumberOfPassengers = (1 + NumberOfPassengers );
        ///  avgtripcost = TotalTripCost/TotalNumberOfPassengers ;
        avgtripcost = (1 + CostOfGas)/(1 + NumberOfPassengers );

    }

    printf(" The cost of trip is  %.2f \n", avgtripcost);




        printf("+ - * / % : arithmetic operators\n");
    printf("// < > <= >= != == : comparison operators \n");
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
    a = 5;
    b = 2;
    RES;
    printf("Check: Is a == b?\n");
    RES = (a==b);
    printf("Result is %d.\n", RES);

    result;
    printf("Check: Is a == b?\n");
    result = (a==b);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
        printf("FALSE!\n");
    }
    printf("Check: Is a < b?\n");
    result = (a<b);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
        printf("FALSE!\n");
    }
    printf("Check: Is a > b?\n");
    result = (a>b);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
        printf("FALSE!\n");
    }

    printf("Check: Is a <= b?\n");
    result = (a<=b);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
        printf("FALSE!\n");
    }
    printf("Check: Is a >= b?\n");
    result = (a>=b);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
        printf("FALSE!\n");
    }

    printf("Check: Is a != b?\n");
    result = (a!=b);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
        printf("FALSE!\n");
    }




    puts( " Activity: if else to find hostel cost (External resource) " );


     printf(" The hostel in which you plan to spend the night tonight offers very interesting rates,\n \
            as long as you do not arrive too late. Housekeeping finishes preparing rooms by noon, and \n \
            the sooner guests arrive after noon, the less they have to pay. You are trying to build a \n \
            C program that calculates your price to pay based on your arrival time. \n \
            Your program will read an integer (between 0 and 12) indicating the number of hours past noon \n \
            of your arrival. For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc.\n \
            The base price is 10 dollars, and 5 dollars are added for every hour after noon.\n \
            Thankfully the total is capped at 53 dollars, so you'll never have to pay more than that.\n \
            Your program should print the price (an integer) you have to pay, given the input arrival time.  \n\
            Example 1 Input 7, Output 45, Example 2 Input 10 Output 53");





    int ARTM = 0 ;

    printf(" Please enter an integer number for (between 0 and 12) indicating the number of hours past noon of your arrival.\n");

    scanf(" %d", &ARTM );

     int  printprice = 0;

    ///int Thebaseprice = 10 ;

   ///    int everyhourafternoon =  5;

 int totalcost = 10 + ( 5 * ARTM )  ;


   if (ARTM == 0 || totalcost == 10 )

       printprice = 10;

   else if ( totalcost > 53 )

        printprice = 53;

   else
            printprice = totalcost;


    ///int printprice = 0 ;


    printf( "\n Total cost is  %d \n", printprice );


    puts( " Branch program flow using floating point numbers " );

    puts( " Activity: if statements: bridge tax , Activity: compare decimals to cross bridge (External resource) " );


 puts( " You arrive in front of a bridge that you must cross to reach a village before dark. \
       Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. \
       You decide to write a program to verify that he is charging the right price. \
       Your program should read two integers, between 1 and 6, representing the values of each die.  \
       If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). \
       Otherwise, you pay twice the sum of the values of the two dice.  \
       Your program must then display the text \'Special tax' or 'Regular tax'. followed by the amount you have to pay on the next line.   \
       Example  Input  5   6  ; Output   Special tax   36 ;;; Input   4   3 ;   Output  Regular tax  14 \
       Use if statements to verify whether the fee will be regular or special   " );



       int Dice1, Dice2 , SumDice;

       Dice1 = Dice2 = 0;

       puts(" Please enter two  integers, between 1 and 6 digits for two dice rolls ");

       scanf("%d %d", &Dice1, &Dice2 );

       SumDice = Dice1 + Dice2 ;


       if (SumDice >= 10)
            puts( " Special tax \n 36 " );

       else
            printf( " Regular tax \n %d", 2*SumDice );





  puts( "   Activity: if statements, Tug of War , Activity: compare decimals to play tug of war (External resource) " );



    puts( "  You decide to bet on the final match of the Tug of War National Championship.  \n \
Prior to the match the names and weights of the players are presented, \n\
 alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). \n\
There is the same number of players on each side. \n\
You record the player weights as they are presented and calculate a total weight for each time to inform your bet. \n\
You write a C program to assist with this. \n\
Your program should first read an integer indicating the number of members per team. \n\
 Then, the program should read the player weights (integers representing kilograms) alternating by team. \n\
After calculating the total weight of each team, the program should display the text \"Team X has an advantage\" \n\
(replacing X with 1 or 2 depending on which team has a greater total weight). \n\
You will then display the text \"Total weight for team 1:\" followed by the weight of team 1, \n\
 then \"Total weight for team 2:\" followed by the weight of team 2 (see example below).  \n\
You are guaranteed that the two teams will not have the same total weight. \n\
Example Each team is composed of four players. Those of the first weigh 110, 113, 112, and 117kg, \n\
 while those of the second weigh 106, 102, 121, and 111kg. \n\
Team 1 weighs a total of 452kg whereas team 2 weighs a total of 440kg, giving team 1 an advantage. \n\
Input 4 110 106 113 102 112 121 117 111 \n\
Output Team 1 has an advantage Total weight for team 1: 452 Total weight for team 2: 440 \n\
Experiment with putting scanf statements inside a for loop! \n\
You only need to compare the total weights of the two teams once.\
If the total weight of team 1 is greater, then you know they have the advantage. \n\
         If not, then you know team 2 has the advantage. Try using an if-else structure! s" );




    int iFB1, MemberPerTeam, Team1Weight, Team2Weight ;

    MemberPerTeam = Team1Weight = Team2Weight = 0;

    printf("\nPlease enter a positive integer for player number in each team:   " );

    scanf("%d", &MemberPerTeam );

    int TotalPlayer =(2*MemberPerTeam ) ;
    int counter1 =1;
    int counter2 =1;
    int Team1Weightsum = 0;
    int Team2Weightsum = 0;

    for (iFB1 =0; iFB1 < TotalPlayer ; iFB1++ )

    {
        if ( iFB1 % 2 == 0 )
        {


            printf("\nEnter Weight of Team 1 Player  %d  ", counter1 );

            scanf("%d", &Team1Weight );


            Team1Weightsum = Team1Weightsum + Team1Weight ;
            counter1++;

        }



        else

        {

            printf("\nEnter Weight of Team 2 Player  %d  ", counter2 );

            scanf("%d", &Team2Weight );


            Team2Weightsum += Team2Weight;
            counter2++;

        }

    }


    if ( Team1Weightsum > Team2Weightsum)

        puts("Team 1 has an advantage");

    else if   ( Team1Weightsum < Team2Weightsum)

        puts("Team 2 has an advantage");

    else
        puts( " Both teams have same Weights" );



    printf("%d,%d,%d",  MemberPerTeam, Team1Weightsum, Team2Weightsum );


    printf("\nTotal weight for team 1:  %d", Team1Weightsum);

    printf("\nTotal weight for team 2:  %d", Team2Weightsum);

    printf( "    \    \      \      \      \      \       \      \      \      \      \      " );


    puts( "    \       \      \      \      \      \      " );


    printf( "    \       \      \      \      \      \      " );




    puts( "\n  Combine logical conditions using AND &&  " );

    int sunny = 1;
    int vacation = 1;
    int sunAndVacation = sunny && vacation;  /// AND :- && operator

    ///// printf() must examine each character at least once in order to
//figure out that it is -not- a format character. If it is using
//putc() to output characters, then in theory it could just output
//each character immediately. It needs to test each character to
//see if it is \0 anyhow, but two comparisons per character
//instead of one might detectable on long enough strings.
//
    if (sunAndVacation)
    {
        puts("\n Yeah!!");
    }
    else
    {
        puts("Too bad!");
    }


    sunny = 0;   ///
    vacation = 1;
    sunAndVacation = sunny && vacation;  /// && operator. Both conditions have to be true. but here one condition is not true.
    if (sunAndVacation)
    {
        puts("Yeah!!\n");
    }
    else
    {
        puts("Too bad!\n");
    }



    sunny = 1;
    vacation = 0;
    sunAndVacation = sunny && vacation;   /// && operator. Both conditions have to be true. but here one condition is not true.
    if (sunAndVacation)
    {
        puts("Yeah!!\n");
    }
    else
    {
        puts("Too bad!\n");
    }


    sunny = 0;
    vacation = 0;
    sunAndVacation = sunny && vacation; /// both conditions are false.
    if (sunAndVacation)
    {
        puts("Yeah!!\n");
    }
    else
    {
        puts("Too bad!\n");
    }


    sunny = 2; /// False
    vacation = 0;
    sunAndVacation = sunny && vacation; /// both conditions are false.
    if (sunAndVacation)
    {
        puts("Yeah!!\n");
    }
    else
    {
        puts("Too bad!\n");
    }


    sunny = 1;
    vacation != 1;   /// False
    sunAndVacation = sunny && vacation; /// both conditions are false.
    if (sunAndVacation)
    {
        puts("Yeah!!\n");    /// use puts for simple printing.
    }
    else
    {
        puts("Too bad!\n");
    }

    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

//        int halt;
//        scanf("%d", halt);


    puts("puts and printf speed test");
    puts("puts and printf speed test");



    clock_t tStart11 = clock();


    unsigned long l;
    for (l=0; l<RUNS; l++)
    {
        /// printf("stuff\n");
        puts("puts stuff"); ///alternate with printf.
    }



    printf("Time taken: %.5fs\n", (double)(clock() - tStart11)/CLOCKS_PER_SEC);

    printf("Time taken start to puts finish: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);


    clock_t tStart1 = clock();

    /// unsigned long i;
    for (l=0; l<RUNS; l++)
    {
        printf("printf stuff");
        /// puts("stuff"); ///alternate with printf.
    }
    printf("printf stuff\n");

    printf("Time taken: %.5fs\n", (double)(clock() - tStart1)/CLOCKS_PER_SEC);

    printf("Time taken puts start to printf finish: %.5fs\n", (double)(clock() - tStart11)/CLOCKS_PER_SEC);

    printf("Time taken start to printf finish: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);



    puts( " Combine logical conditions using OR || " );

    puts( " Combine logical conditions using OR || " );


    sunny = 0;
    vacation = 0;
    int sunORvacation = sunny || vacation;
    if(sunORvacation)
    {
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    }
    else
    {
        printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
    }


    sunny = 1;
    vacation = 0;
    sunORvacation = sunny || vacation;
    if(sunORvacation)
    {
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    }
    else
    {
        printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
    }


    sunny = 0;
    vacation = 1;
    sunORvacation = sunny || vacation;
    if(sunORvacation)
    {
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    }
    else
    {
        printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
    }


    sunny = 1;
    vacation = 1;
    sunORvacation = sunny || vacation;
    if(sunORvacation)
    {
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    }
    else
    {
        printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
    }



    puts( " The hostel in which you stop for the night changes its prices according to \n\
           the age of the customer and the weight of their luggage. The rules are not very clear, \n\
          so you decide to write a small program that will easily allow you and your travel companions \n\
         to know the price of one night.  One room costs nothing if you are 60 (the age of the innkeeper), \n\
          or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus \n\
          an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's \n\
          age first, then the weight of their luggage, then output the price they have to pay. " );



    puts( "  //1||1:1 1||0:1 0||1:1 0||0:0   // this is truth table. \n" );

    puts( " Activity: more complex if statements: costly hotel rooms. \n \
         Activity : complex logic conditions to find hostel cost (External resource)" );




          double weightOfBags = 0;
          double inkeeperAge = 0;
          int costofHotel = 0 ;

          scanf("%lf %lf", &weightOfBags, &inkeeperAge );

          if (inkeeperAge >= 60)
          {
              puts("0");
          }

          else if (inkeeperAge < 10 )

          {
              puts("0");
          }

           else
          {
             if (weightOfBags < 20)
                puts("30");


             puts("40");

          }





   printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0;
    system("pause>null");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);


}
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n


