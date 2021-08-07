/*author/owner == Shyed Shahriar Housaini
License == MIT + terms and conditions of author/owner
Copyright: author/owner*/
// Multiple lines were commented.


#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
// preprocessor directive

#define RUNS 1000UL
int main(void) // main function
{

    printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");


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





    /// free();
    free(Times);
    //free();
    free(first);
    free(age2); /// Free up memory
    free(Y); /// Free up memory
    free(Balance); /// Free up memory

    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    /// return statement
    return 0;






    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

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


