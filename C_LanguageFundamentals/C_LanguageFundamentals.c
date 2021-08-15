#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// preprocessor directive

#define RUNS 1000UL

#define maxCount 500

int main(void)
{
printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");

    clock_t tStart = clock();


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


    printf("Branch program flow using floating point numbers");


    // + - * / % : arithmetic operations
    // <  >  <=  >=  !=  ==  :  comparison operations
    double a = 5.0;
    double b = 2.0;
    result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }


    printf("// Double data types have precisions of 15 digits after decimal points,\n");

    a = 5.0000000000000000001; /// Double data types have precisions of 15 digits after decimal points,
    b = 5.0000000000000000000;
    result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    printf("// double data types have precisions of 15 digits after decimal points,\n");


    a = 5.00000001; // Double data types have precisions of 15 digits after decimal points,
    b = 5.00000000;
    result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }




    puts( " Use if and else with a static condition" );


    weatherIsGood = 0; // It's cloudy!!
    if(weatherIsGood)
    {
        printf("The weather is good!\n");
        printf("That's great, I can go outside!\n");
    }
    else
    {
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
    int aa = 5;
    int bb = 2;
    bool RES;
    puts( "Use of bool in C, Prerequisite: Bool Data Type in C++, The C99 standard for C language supports bool variables.  " );
    puts( "Unlike C++, where no header file is needed to use bool, a header file “stdbool.h” must be included to use bool in C.  " );
    puts( "If we save the below program as .c, it will not compile, but if we save it as .cpp, it will work fine. " );


    puts( " bool is an alias to _Bool to avoid breaking existing C code which might be using bool as an identifier." );
    puts( "#include <stdbool.h> Note if we do not include the above header file, then we need to replace bool with _Bool and the code will work as usually." );





    printf("Check: Is a == b?\n");
    RES = (aa==bb);
    printf("Result is %d.\n", RES);

    result;
    printf("Check: Is a == b?\n");
    result = (aa==bb);
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
    result = (aa<bb);
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
    result = (aa>bb);
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
    result = (aa<=bb);
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
    result = (aa>=bb);
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
    result = (aa!=bb);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
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
       Crossing the bridge is not free - the bridge keeper asks you to roll two dice to determine the cost. \
       You decide to write a program to verify that he is charging the right price. \
       Your program should read two integers, between 1 and 6, representing the values of each die.  \
       If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). \
       Otherwise, you pay twice the sum of the values of the two dice.  \
       Your program must then display the text \'Special tax' or 'Regular tax'. followed by the amount you have to pay on the next line.   \
       Example  Input  5   6  ; Output   Special tax   36 ;;; Input   4   3 ;   Output  Regular tax  14 \
       Use if statements to verify whether the fee will be regular or special   " );



    int Dice1, Dice2, SumDice;

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



    puts(" Activity: more complex if statements: costly hotel rooms ");
    puts(" Activity : complex logic conditions to find hostel cost (External resource) ");



    puts(" The hostel in which you stop for the night changes its prices \n \
         according to the age of the customer and the weight of their luggage. \n \
        The rules are not very clear, so you decide to write a small program that \n \
         will easily allow you and your travel companions to know the price of one  \n \
         night. \n \ One room costs nothing if you are 60 (the age of the innkeeper), \n \
          or 5 dollars if you are less than 10 years old. For everyone else, \n \
          the cost is 30 dollars plus an additional 10 dollars if you bring more \n \
           than 20 pounds of luggage. Your program should read the customer's  \n \
           age first, then the weight of their luggage, then output the price they \n \
            have to pay. \n \
Example \n \
Input: \n \
22 \n \
25 \n \
Output: \n \
40 \n \   \n \ ") ;


    weightOfBags = 0;
    inkeeperAge = 0;
    /// int costofHotel = 0 ;


    puts (" Please input Age and Weight of luggage ");

    scanf("%lf %lf", &inkeeperAge, &weightOfBags );

    if (inkeeperAge == 60)
    {
        puts("0");
    }

    else if (inkeeperAge < 10 )

    {
        puts("5");
    }

    else
    {
        if (weightOfBags < 20)

            puts("30");

        else
            puts("40");

    }











    puts(" Negate a logical condition using NOT ");
    puts(" Negate a logical condition using NOT ");

    sunny = 0; // 0: cloudy, other value (1 for example): sunny
    vacation = 0; // 0: working , other value (1 for example): vacation
    int NOTsunny = !sunny;

    if (NOTsunny)
    {
        puts("It's cloudy!\n");
    }

    sunny = 1; // 0: cloudy, other value (1 for example): sunny
    vacation = 0; // 0: working , other value (1 for example): vacation
    NOTsunny = !sunny;

    if (NOTsunny)
    {
        puts("It's cloudy!\n");
    }

    sunny = 0; // 0: cloudy, other value (1 for example): sunny
    vacation = 1; // 0: working , other value (1 for example): vacation
    int NOTsunnyANDvacation = !sunny && vacation;
    if (NOTsunnyANDvacation)
    {
        puts("It's cloudy but at least I am on vacation!\n");
    }

    sunny = 0; // 0: cloudy, other value (1 for example): sunny
    vacation = 0; // 0: working , other value (1 for example): vacation
    NOTsunnyANDvacation = !sunny && vacation;
    if (NOTsunnyANDvacation)
    {
        puts("It's cloudy but at least I am on vacation!\n");
    }


    int NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation)
    {
        puts("It's neither sunny nor am I on vacation!\n");
    }


    sunny = 1; // 0: cloudy, other value (1 for example): sunny
    vacation = 0; // 0: working , other value (1 for example): vacation

    NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation)
    {
        puts("It's neither sunny nor am I on vacation!\n");
    }


    sunny = 1; // 0: cloudy, other value (1 for example): sunny
    vacation = 1; // 0: working , other value (1 for example): vacation

    NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation)
    {
        puts("It's neither sunny nor am I on vacation!\n");
    }


    puts(" Branch using complex logical conditions ");
    puts(" Branch using complex logical conditions");


    int age;
    printf("What is your age?\n");
    scanf("%d",&age);
    int isAdult = age >= 18;
    int isSenior = age >= 65;
    int isInTheWorkForce = isAdult && !isSenior;

    if(isInTheWorkForce)
    {
        printf("You are in the labor force\n");
    }

    else
    {
        printf("You are not in the labor force\n");
    }
/// Previous version use more memory

    printf("What is your age?\n");
    scanf("%d",&age);
    isInTheWorkForce = ((age >= 18) && !(age >= 65));
    if(isInTheWorkForce)
    {
        printf("You are in the labor force\n");
    }
    else
    {
        printf("You are not in the labor force\n");
    }

/// Previous version use more processor and less memory
    printf("What is your age?\n");
    scanf("%d",&age);
    if(age >= 18 && !(age >= 65))
    {
        printf("You are in the labor force\n");
    }
    else
    {
        printf("You are not in the labor force\n");
    }

/// Previous version use most processor and less memory



    puts(" Activity: if statements, name that tree ");
    puts(" Activity: Negative logic to name tree (External resource)");


    puts("  As you cross a forest you can't help but admire the nature around \n \
          you including the many species of trees. Despite your interest, \n \
         you are a very unskilled botanist and have a lot of trouble identifying \n \
         different trees. A friend gives you some guidance and you decide \n \
         to write a program that will give you the name of the tree based on its \n \
         characteristics.    \n \  There are 4 types of trees: \n \
the \"Tinuviel\" is 5 meters high or less and its leaves are composed of 8 or more leaflets \n \
the \"Calaelen\" is 10 meters high or more and its leaves are composed of 10 or more leaflets \n \
the \"Falarion\" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets \n \
the \"Dorthonion\" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets \n \
Your program should read the height and the number of leaflets of a given tree (both integers), \n \
         and should be able to determine and display the name of the corresponding tree. \n \
          If the height and number of leaflets does not match any of the tree type descriptions, your program should display \"Uncertain\". \n \  ");

    int treeHeight = 0 ;
    int numOftreeLeaflets = 0 ;

    char* TreeName;

    char treeName[77];

    puts(" Input height and the number of leaflets of a given tree (both integers) separated by space");

    scanf("%d %d", &treeHeight,&numOftreeLeaflets );


    if(treeHeight <= 5 && numOftreeLeaflets>= 8 )
    {
        //puts("Tinuviel");// do something
        TreeName = "Tinuviel";
        printf("%s", TreeName);  /// https://stackoverflow.com/questions/10298819/how-does-printf-display-a-string-from-a-char
    }
    else if(treeHeight >= 10 && numOftreeLeaflets>= 10)
    {
        //puts("Calaelen");// do something else

        treeName[77] = "Calaelen";
        TreeName = "Calaelen";
        printf("%s", TreeName);

        // printf("%s", treeName); // %s is format specifier
    }

    else if(treeHeight <= 8 && numOftreeLeaflets<= 5)
    {
        puts("Falarion"); // do something else
    }

    else if(treeHeight >= 12 && numOftreeLeaflets<= 7)
    {
        puts("Dorthonion"); // do something else
    }


    else
    {
        puts("Uncertain"); // do something if neither something1 or something2 is true
    }




    puts( " Store integers in an array" );

    puts( " Store integers in an array" );


    int array[3]; /// creates space to hold three integers
    array[0] = 18;  /// indexing tarts at 0
    array[1] = 137;
    array[2] = 8;
    printf("First element is %d.\n", array[0]);
    printf("Second element is %d.\n", array[1]);
    printf("Third element is %d.\n", array[2]);





    puts( " Assign array elements from user input" );


    puts( " Assign array elements from user input" );



    /// https://www.programmingsimplified.com/c/program/print-string

    int Secondarray[5];
    int readValue = 0;
    int cellNumber = 0;
    int i = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        printf("Enter a value for %d, :", Secondarray[cellNumber]);
        scanf("%d", &readValue);
        Secondarray[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, Secondarray[cellNumber]);
        cellNumber = cellNumber + 1;
    }

    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);





    puts( " Store integers in an array" );

    puts( " Store integers in an array" );


    array[3]; /// creates space to hold three integers
    array[0] = 18;  /// indexing tarts at 0
    array[1] = 137;
    array[2] = 8;
    printf("First element is %d.\n", array[0]);
    printf("Second element is %d.\n", array[1]);
    printf("Third element is %d.\n", array[2]);





    puts( " Assign array elements from user input" );


    puts( " Assign array elements from user input" );



    /// https://www.programmingsimplified.com/c/program/print-string

    Secondarray[5];
    readValue = 0;
    cellNumber = 0;
    i = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        printf("Enter a value for Cell number %d :", cellNumber);
        /// printf("Enter a value:");
        scanf("%d", &readValue);
        Secondarray[cellNumber] = readValue;
        printf("Cell number %d contains %d\n", cellNumber, Secondarray[cellNumber]);
        cellNumber = cellNumber + 1;
    }











    puts( " Activity: store recipe ingredients in an array. Activity: store recipe ingredients in an array (External resource)" );

    puts( "  Your grandparents gave you a fantastic cooking recipe but you can never \n \
             remember how much of each ingredient you have to use! There are 10 ingredients in \n \
             the recipe and the quantities needed for each of them are given as input (in grams). \n \
             Your program must read 10 integers (the quantities needed for each of the ingredients, in order)  \n \
              and store them in an array. It should then read an integer which represents an ingredient's \n \
               ID number (between 0 and 9), and output the corresponding quantity. \n \
          Example \n \
          Input:\n \
          500 180 650 25 666 42 421 1 370 211 \n \
          3 \n \
          Output: 25  \n \ " );


    int arrayinputInGrams[10];
    int inputInGrams = 0;
    int CellNumber = 0;
    int IDnumber = 0 ;

    for ( int i = 0; i< 10 ; i++)
    {
        puts( "Enter number as input (in grams):   " );
        scanf("%d", &inputInGrams);

        arrayinputInGrams[CellNumber] = inputInGrams ;

        CellNumber += 1;

    }

    puts( "Enter an integer which represents an ingredient's ID number (between 0 and 9):   " );

    scanf("%d", &IDnumber);
    printf("\n%d\n", arrayinputInGrams[IDnumber]);

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    free(treeName[77]);
    free(arrayinputInGrams[10]);
    free(Secondarray[5]);




    puts( " Explore details of the for loop" );


    /// int i;

    for (i = 0; i<3; i = i+1)
    {
        printf("i has the value %d.\n", i);
    }



    /// watch the execution of for loop step by step .


    // i++ is short for i = i+1

    for (i = 2; i<=5; i = i+2)

        /// i is initialized inside for loop once only.

        /// i is initialized inside for loop once only.

        /// middle condition is checked, we enter the loop, then action in { } takes place, then i is incremented.

        /// when condition is false, we exit the loop.

    {
        printf("i has the value %d.\n", i);

    }


    for (i = 3; i>0; i = i-1)
    {
        printf("i has the value %d.\n", i);
    }



    puts(" // while loop is a modified and simple for loop ");

    /// while loop is a modified and simple for loop
    while ( i<3 )
    {
        printf("i has the value %d.\n", i);
        i += 1;   ///i = i+1 = i += 1;;
    }


    puts( " Store doubles in an array " );

    puts( " Store doubles in an array " );


    double Array[3];
    double ReadValue = 0.0;
    CellNumber = 0;
    /// int i = 0;
    for(i=0; i<3; i++)
    {
        printf("Enter a decimal value:");
        scanf("%lf",&ReadValue);
        Array[cellNumber] = ReadValue;
        printf("Cell number %d contains %.3lf\n", CellNumber, Array[CellNumber]);  /// 3 digit precision after decimal place.
        CellNumber = CellNumber + 1;
    }


    puts( " Activity: use an array to balance weights " );

    puts( " Activity: use an array to balance weights (External resource) " );


    puts( " You are responsible for a rail convoy of goods consisting of several boxcars.  \n\
         You start the train and after a few minutes you realize that some boxcars are overloaded \n\
         and weigh too heavily on the rails while others are dangerously light. So you decide to stop  \n\
         the train and spread the weight more evenly so that all the boxcars have exactly the same weight  \n\
         (without changing the total weight). For that you write a program which helps you in the distribution of the weight. \n\
         Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). \n\
         Then your program should calculate and display how much weight to add or subtract from each car such that every car has  \n\
         the same weight. The total weight of all of the cars should not change. These additions and subtractions of weights should   \n\
         be displayed with one decimal place. You may assume that there are no more than 50 boxcars. \n\
        Example 1 \n\
In this example, there are 5 boxcars with different weights summing to 110.0. \n\
The output shows that we are modifying all the boxcars so that they each carry a weight of 22.0  \n\
(which makes a total of 110.0 for the entire train). So we remove 18.0 for the first boxcar, \n\
 we add 10.0 for the second, we add 2.0 for the third, etc. \n\
Input 5 40.0 12.0 20.0 5.0 33.0 Output -18.0 10.0 2.0 17.0 -11.0  \n\
This task offers 2 hints :  Hint 1 : Sometimes it is necessary to set a variable to 0 before using it in a loop.  \n\
Hint 2 : Use an array to store the boxcar weights. To do so, you can simply declare an array of 50 doubles   \n\
since you are told that there are no more than 50 boxcars.   \n\  " );




    int NumberOfCars = 0;
    ///  int i = 0 ;

    int CarNumber = 0;

    double WeightOfCar =0;

    double WeightOfCars[50] ;

    double SumOfCarWeights = 0.0;

    SumOfCarWeights = WeightOfCar;

    double AverageCarWeight = 0.0 ;


    puts(" \n Please enter an integer number for number of cars: ");

    scanf("%d", &NumberOfCars);

    for ( i = 0 ; i < NumberOfCars ; i++ )
    {

        puts(" \n Please enter weight of car: ");

        scanf("%lf", &WeightOfCar);

        WeightOfCars[CarNumber] = WeightOfCar;
        SumOfCarWeights = SumOfCarWeights + WeightOfCar;

        CarNumber++;

    }

    printf(" Sum of weight %.3lf\n", SumOfCarWeights);

    AverageCarWeight = SumOfCarWeights/NumberOfCars;

    printf(" Average weight %.3lf\n", AverageCarWeight);

//    printf("%.3lf\n", WeightOfCars[0]);
//
//    printf("%.3lf\n", WeightOfCars[1]);
//
//    printf("%.3lf\n", WeightOfCars[2]);


    CarNumber = 0;

    double ChangeWeightOfCar;

    for ( i = 0 ; i < NumberOfCars ; i++ )
    {

        ChangeWeightOfCar =  AverageCarWeight - WeightOfCars[CarNumber] ;

        printf("%.1lf\n", ChangeWeightOfCar);

        /// SumOfCarWeights = SumOfCarWeights + WeightOfCar;

        CarNumber++;

    }


    puts( " Find the largest array element max or maximum" );

    puts( " Find the max or maximum / largest / biggest array element in this case age, and show the difference " );

    puts( " Compute with arrays, compare smaller  or bigger" );


    int ages[10];
    /// int i;
    int ageMax = 0; /// Initialize the biggest element to 0
    for (i=0; i<10; i++)
    {
        printf(" Please enter age of Number %d person,  maximum 10 person :\n", i+1);
        scanf("%d", &ages[i]);
        if (ages[i] > ageMax)
        {
            ageMax = ages[i];
        }
    }
    printf("The maximum age is %d.\n", ageMax);
    printf("Age differences with the eldest person:\n");
    for(i=0; i<10; i++)
    {
        printf("%d:%d ", ages[i],ageMax-ages[i]);
    }



    puts( " Compute with arrays, compare small min minimum smaller  or bigger" );
    puts( " Compute with arrays small min minimum" );
    puts( " Find the smallest array element" );
    puts( " Compute with arrays, compare smaller  or bigger" );
    puts( " Find the smallest array element in this case youngest age, and show the difference " );


    int Smallages[10];
    //int i;
    int ageMin;
    ageMin = Smallages[0];  /// Initialize the smallest element to the first element.
    for (i=0; i<10; i++)
    {

        printf(" Please enter age of Number %d person,  maximum 10 person :\n", i+1);
        scanf("%d", &Smallages[i]);

        if (Smallages[i] < ageMin)
        {
            ageMin = Smallages[i];
        }
    }
    printf("The minimum age is %d.\n", ageMin);
    printf("Age differences with the youngest person:\n");
    for(i=0; i<10; i++)
    {
        printf("%d:%d ", ages[i],ages[i] - ageMin);
    }





    puts( " Compute with arrays" );
    puts( " Activity: array computation" );

    puts( " Activity: array computation (External resource)" );

    puts( "  You plan to make a delicious meal and want to take the money you need to buy the ingredients. \n \
        Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. \n \
        The program should read in the number of ingredients (up to a maximum of 10 ingredients), \n \
        then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe \n \
        (for each ingredient in the same order). Your program should calculate the total cost of these purchases, \n \
        then display it with 6 decimal places. \n \
          Example : \n \
          There are 4 ingredients and they all have a different price per pound: 9.90, 5.50, 12.0, and 15.0. \n \
          You must take 0.25 lbs of the first, 1.5 lbs of the second, 0.3 lbs of the third and 1 lb of the fourth. \n \
          It will cost exactly $29.325000." );


    int NumberOfIngredients = 0;

    int ItemNumberSerial = 0 ;

    double arrayPricePerPound[10];
    double PricePerPound = 0 ;

    double arrayWeightPerItem[10];
    double WeightPerItem = 0 ;

    double Cost = 0 ;
    double TotalCost = 0 ;

    puts(" \n Please enter an integer number for number of  ingredients (up to a maximum of 10 ingredients): ");

    scanf("%d", &NumberOfIngredients);

    if (NumberOfIngredients > 10)
    {
        puts ("You have more than 10 items " ) ;
        return 1;
    }



    for ( int i = 0 ; i < NumberOfIngredients ; i++ )
    {

        puts(" \n Please enter different price per pound of items: ");

        scanf("%lf", &PricePerPound );

        arrayPricePerPound[ItemNumberSerial] = PricePerPound;

        ItemNumberSerial++;

    }


    ItemNumberSerial = 0;

    for ( int i = 0 ; i < NumberOfIngredients ; i++ )
    {

        puts(" \n Please enter weights of ingredient (for each ingredient in the same order): ");

        scanf("%lf", &WeightPerItem  );

        arrayWeightPerItem [ItemNumberSerial] = WeightPerItem  ;

        Cost = arrayWeightPerItem [ItemNumberSerial] * arrayPricePerPound[ItemNumberSerial];

        TotalCost = TotalCost + Cost ;

        ItemNumberSerial++;

    }


    printf("Total Cost: %.6lf\n", TotalCost);



    puts( " Nest if and for " );

    puts( " Nest if and for " );


    int target;
    i = 0;
    printf("Please enter a target number: ");
    scanf("%d", &target);
    if (target >= 0)
    {
        for (i=0; i<target; i++)  /// for (i=1; i<target; i+2) without the nested if statement
        {
            if (i%2) /// or  if (i%2 == 1)
            {
                printf("\n%d", i);
            }
        }
    }
    else
    {
        printf("Nothing to do!\n");
    }



    puts( "\n Activity: branch inside a loop, how many big cities?" );

    puts( "\n Activity: branch inside a loop, how many big cities? (External resource) " );

    puts( "\n You want to determine the number of cities in a given region that have a population \n \
          strictly greater than 10,000. To do this, you write a program that first reads the number \n \
         of cities in a region as an integer, and then the populations for each city one by one (also integers). \n \
         Example, Input 6 1000 5000 15000 4780 0 23590 Output 2 , This task offers 1 hint : Hint 1 : \n \
          Try using an if-statement inside of a for-loop." );



    int NumberOfCities = 0;

    int PopulationsOfCity = 0;

    int BigCity = 0;

    puts( " Enter the number of cities in a region as an integer:  " );
    scanf("%d", &NumberOfCities );

    for (i = 0 ; i < NumberOfCities; i++ )
    {
        puts( " Enter the populations for each city one by one (also integers):  " );
        scanf("%d", &PopulationsOfCity);

        if (PopulationsOfCity > 10000)
        {
            BigCity++;
        }
    }

    printf( "Number of Big city inn the region is %d", BigCity );



    puts( " Take user input for number of dice throwers and numbers of dice, then show output \n \
              for Sum of dice values for each thrower" );


    puts( " \n \ input is \n \
                   5 4 \n \
                1 4 2 3 \n \
                3 2 6 4 \n \
                2 4 1 4 \n \
                2 2 1 4 \n \
                3 6 1 2 \n \ " );

    int nbThrows = 0;
    int nbDice = 0;
    int diceValue = 0;
    int throwSum = 0;
    int throw = 0;
    int dice = 0;
    puts( " Enter values for number of throwers and number of dices" );
    scanf("%d%d", &nbThrows, &nbDice);
    for(throw = 0; throw<nbThrows; throw++)
    {
        puts( " Enter values for dices" );
        for(dice = 0; dice<nbDice; dice++)
        {

            scanf("%d", &diceValue);
            throwSum = throwSum + diceValue;
        }
        printf("throw %d sum equals %d\n", throw, throwSum);
        throwSum = 0;
    }



    puts( " Activity: print a square of stars using nested loops" );


    puts( " Activity: print a square of stars using nested loops (External resource)" );


    puts( " Create a program that displays on the screen a square of n x n stars, with the integer n given as an input." );


    int nbStars = 0;
    int width = 0;
    int height = 0;
    puts( " Enter a values for number of stars in height and width" );
    scanf("%d", &nbStars );
    for(width = 0; width <nbStars ; width++)
    {
        for(height  = 0; height  <nbStars ; height ++)
        {

            printf("*");

        }
        printf("\n");

    }
    puts( " Repeat instructions using a while loop - introduction" );

    puts( " Repeat instructions using a while loop - introduction" );


    puts( " while loop is used when the range of loop can not be known in advance. " );


    puts( " program to read value of integers until the integer value is 6" );

    nbThrows = 0; /// Start counting at Zero at first throw, have to modify and add one to output
    diceValue = 0;
    puts("Please enter value of 6 to get out of this while loop");
    scanf("%d", &diceValue);
    /// notSix = diceValue != 6;
    while (diceValue != 6)
    {
        scanf("%d", &diceValue);
        /// notSix = diceValue != 6;
        nbThrows = nbThrows + 1;
    }
    printf("We needed %d number of throws to get the value 6\n", nbThrows+1); /// nbThrows+1 needed.

    /// below code will show same results
    int notSix;
    puts("Please enter value of 6 to get out of this while loop");
    scanf("%d", &diceValue);
    notSix = diceValue != 6;
    nbThrows = 1; /// Start counting at one at first throw
    while (notSix)
    {
        scanf("%d", &diceValue);
        notSix = diceValue != 6;
        nbThrows = nbThrows + 1;
    }

    printf("We needed %d number of throws to get the value 6\n", nbThrows);



    puts ("  While-loops are perfect for when you want to execute an undetermined number of iterations. ");

    puts ("  Activity: compute budget using a while loop (External resource) ");

    puts ("  Much of the work of a university administration (in addition to managing \n \
           teachers, researchers, students, courses, etc.) is to ensure the proper \n \
          functioning of the university and in particular that the accounting job is well done. \n \
           Once a year, an annual report of expenditures must be made. \n \
           All expenses for the year have been recorded and classified in a multitude of \n \
           files and the sum of all these expenses must now be calculated. \n \
           But no one knows exactly how many different expenses have been made in the past year! \n \
           Your program will have to read a sequence of positive integers and display their sum. \n \
            We do not know how many integers there will be, but the sequence always ends with the value -1 \n \
            (which is not an expense, just an end marker). Example 1 Input 1000 2000 500 -1 Output 3500 \n \
           Example 2 Input -1  Output 0 Example 3 Input 150 250 350 4500 240 120 -1 Output 5610");



    double ExpenValue = 0 ;

    double ExpenSum = 0 ;

    puts("Please enter values of expenses and end with -1 as escape character");

    while ( ExpenValue != -1)
    {

        scanf("%lf", &ExpenValue );

        ExpenSum = ExpenSum + ExpenValue;

    }

    printf("%.0lf \n", ExpenSum+1);


    puts( " Write a program to determine - How many days are needed to get Required number of (from user input) signatures. \n \
         Initially there are n signatures (from user input), Each day every one with a new signature is required to get two other \n \
         signatures in the next day " );


    int signaturesNeeded = 0;

    int day = 0;

    int newSignatures = 0;

    int totalSignatures = 0;

    puts( " Please enter the number of Required signatures " );

    scanf(" %d", &signaturesNeeded  );

    puts( " Please enter the number of Initial signatures.  " );

    scanf(" %d", &newSignatures  );

    totalSignatures =  newSignatures ;

    while (totalSignatures < signaturesNeeded)
    {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }



    puts( " Activity: controlling an epidemic " );

    puts( " Activity: controlling an epidemic (External resource) " );



    puts(" In order to be able to better fight various epidemics in a region, the department of medicine of a major university \n \
          has launched a large study. Researchers are interested in how fast an epidemic spreads, and therefore the speed at which  \n \
           health measures must be put in place. Your program should first read an integer representing the total population of the area. \n \
            Knowing that a person was infected on day 1 and that each infected person contaminates two new people every day, \n \
            you must calculate the day at which the entire population of the area will be infected.    \n \
            Examples : For a total population of 3 inhabitants, on day 1 a single person is infected. The next day, \n \
            that person contaminates 2 new people so there are 3 infected people in total. This is the entire population, \n \
            so it takes 2 days to contaminate the entire population. \n \
            Input: 3 Output: 2 \n \
            For a total population of 10 inhabitants, on day 1 a single person is infected. \n \
             This is followed by 2 new people on the second day for a total of 3 infected people. \n \
             On the third day,  6 new people are infected for a total of 9 infected people. \n \
             On the fourth day the last of the 10 people is infected (though the epedemic had the potential to \n \
            infect 18 people on the fourth day) so your program should output '4'.   Input: 10 Output: 4   \n \  " );

    int CityPopulation = 0;

    int Day = 1;  /// initial contamination.

    int newInfections = 1;

    int totalInfections = 1;

    scanf(" %d", &CityPopulation  );

    // totalInfections =  newInfections ;

    while (totalInfections < CityPopulation )

    {

        newInfections = 2*totalInfections ;
        /// Be careful that each day, all infected people contaminate two more people, not only the newly infected ones.

        totalInfections = totalInfections + newInfections;
        /// Each day, all infected people contaminate two other ones, not only the newly infected ones.
        Day++;

    }


    printf("%d", Day);



    //! showArray(word, cursors[i])

    char word[51]; //arrray of characters (string)

    printf("Please enter a word within 50 letters/characters Maximum : ");

    scanf("%s", word);

    printf("The word read is: %s.\n", word);

    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);

    word[1] = 'a';

    printf("The new word is %s\n", word);




    puts( " Write a C-program that prints out a word as many times as specified. \n \
               The number of repetitions and the word should be given as input to the program. \n \
               You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!). " );

    puts( " Examples Input: \n \
                    2 Hello \n \
                    Output: \n \
                    Hello \n \
                    Hello \n \ " );

    puts( " Input: 4 thing \n \
                    Output: \n \
                    thing \n \
                    thing \n \
                    thing \n \
                    thing  \n \ " );

    puts( " This task offers 1 hint : Hint 1 : Use a for loop to repeat printing the scanned word as many times as necessary. " );



    int numberRepeat = 0 ;

    char TheWord[101];

    puts("Please first enter an integer as repetition number and enter a word within 100 letters/characters Maximum : ");

    scanf("%d", &numberRepeat);

    scanf("%s", TheWord);

    printf("The word read is: %s.\n", TheWord);

    for (int i = 0 ; i < numberRepeat ; i++ )
    {
        printf("%s\n", TheWord);
    }




    puts( " can we store a sentence??? " );
    puts( " can we store a sentence??? " );

    puts( " With %s format specifier, scanf will stop at first blank characters, so you can't read and store a sentence (with spaces) with it. \n \
     There are several ways to do it though, but they are not introduced in this course. \n \
     One solution is to use fgets function instead of scanf. " );

    puts( " Please enter a sentence with within 500 letters/characters Maximum : " );



    char sen[maxCount];

    fgets(sen, maxCount, stdin);

    scanf("%[^\n]%*c", sen);

    printf("%s",sen);





    puts( " Working with more than one words " );

    puts( " " );

    puts( " Please input two word of less than 6 letters/characters" );

    char word1[7];
    char word2[8];
    scanf("%s%s", word1, word2);

    printf(" You entered %s %s\n", word1, word2);




    puts( " " );

    puts( " " );

    puts( " Replacing word1[3] = '\\0';  word2[2] = '\\0';" );


    puts( " Please input two word of less than 6 letters/characters" );

    word1[7];
    word2[7];
    scanf("%s%s", word1, word2);

    printf(" You entered %s %s\n", word1, word2);

    puts( " Replacing word1[3] = '\0';  word2[2] = '\0';" );
    word1[3] = '\0';
    word2[2] = '\0';
    printf(" You entered %s %s\n", word1, word2);







    puts( "  Your local public library keeps a record of all of its patrons, \n \
                 consisting of index cards that hold a person\'s last name followed by their first name \n \
                  (so that the cards can easily be sorted alphabetically by last name). \n \
                  Unfortunately a computer error led to incorrectly printed forms last month,\n \
                  resulting in a number of cards that list the patron's first name followed by their \n \
                  last name rather than the other way around. Your job is to read these pairs of first and \n \
                  last names and display them in the correct order (last name followed by first name).  \n \
                 You may assume that each first and last name has at most 100 characters and does not contain any spaces. \n \
                 Your program should first read the total number of names (an integer) in order to know how many index cards need to be processed altogether. \n \
                 Next,  for each index card, your program should read a patron\'s first name and last name and then display these names correctly, \n \
                 that is on one line, the last name followed by one space, followed by the first name.  \n \
                  Your program should print the reversed name immediately after reading the patron\'s names \n \
                  (ie, it should not wait until it has read all of the index cards to begin printing). \n \
                 Note that, for ease of viewing, the example below shows all of the inputs in one block and all \n \
                 of the outputs in another block, despite the fact that programmatically these will be interspersed. \n \
                  \n \
                 Example ,  Input: 4 Alan Turing  Ada Lovelace  Donald Knuth  Claude Shannon \n \
                 Output: Turing Alan Lovelace Ada Knuth Donald Shannon Claude    \n \ " );



    int NumOfContributorNames = 0;

    char FirstContributorName[101];
    char LastContributorName[101];

    puts( " PLease enter an integer , for number of names to be entererd " );

    scanf ( "%d", &NumOfContributorNames);


    for ( i = 0; i < NumOfContributorNames; i++ )

    {
        puts( " Please enter a name " );

        scanf ( "%s %s", FirstContributorName, LastContributorName );

        printf("%s %s",LastContributorName, FirstContributorName);

    }




    puts( " Find the length of a string " );


    puts( " Find the length of a string" );

    char wordinput[30];
    i = 0;
    printf("Please enter a word: ");
    scanf("%s", wordinput);
    while (wordinput[i]!='\0')
        i++;
    printf("%s has word length %d.\n", wordinput, i);




    puts( " Activity: guess my number " );

    puts( " Activity: guess my number (External resource) " );



    puts( " We would like you to develop a program capable of making a child play automatically the game of \n \
            \"more or less\" -- the child must try to guess a secret number. The program should respond to each guess with \n \
            \"it is more\ or \"it is less\" until the child finds the right number. \n \
           Your program must first read an integer indicating the number that the child will have to find during the game.  \n \
          Next the program should repeatedly read the player's guesses and display the text \"it is more\" if the child has submitted a smaller  \n \
           number or \"it is less\" if they have submitted a larger number. Once the correct number is reached, the program should print \n \
           \"Number of tries needed:\" followed by a new line and the integer number of tries that it took the guesser. \n \
           Example 1 Input 5  \n \
           1 2 3 4 5 \n \
          it is more it is more it is more it is more Number of tries needed: 5 \n \
          Example 2 Input 10 \n \
          5 15 8 12 11 10 \n \
          it is more it is less it is more it is less it is less Number of tries needed: 6 \n \ " );



    int rRandom = 0 ;
    puts( " please enter a secret number between 1 to 99  to find via guess " );
    scanf("%d", &rRandom);

    int UserGuess = 0 ;

    int NumTriesGuess = 1;

    puts( " please enter a secret number between 1 to 99 as a guess " );
    scanf("%d", &UserGuess);
    while ( UserGuess != rRandom )
    {

        NumTriesGuess++;
        if( UserGuess < rRandom )
        {
            puts( "it is more" );
        }

        else
        {
            puts( "it is less" );
        }

        puts( " please enter a secret number between 1 to 99 as a guess " );
        scanf("%d", &UserGuess);
    }

    printf(" Number of tries needed:\n %d", NumTriesGuess);


    puts( " " );

    puts( " " );

    puts( " " );

    puts( " " );

    /* random int between 0 and 19
    int r = rand() % 20;

    */

    srand(time(NULL));   // Initialization, should only be called once.
    /// int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
    /* random int between 0 and 99 */

    rRandom = rand() % 99;

    // int rRandom = 9 ;

    UserGuess = 0 ;


    NumTriesGuess = 1;

    /// printf(" The secret Number was: %d", rRandom);

    puts( " please enter a number between 0 to 99 as a guess " );
    scanf("%d", &UserGuess);
    while ( UserGuess != rRandom )
    {

        NumTriesGuess++;
        if( UserGuess < rRandom )
        {
            puts( "it is more" );
        }

        else
        {
            puts( "it is less" );
        }

        scanf("%d", &UserGuess);
    }

    printf(" Number of tries needed: %d", NumTriesGuess);
    puts( " " );


    printf(" The secret Number was: %d", rRandom);



    puts( "Activity: monitoring a chemical experiment " );

    puts( "Activity: monitoring a chemical experiment (External resource) " );

    puts( "   \n \
               University chemists have developed a new process for the manufacturing of a drug that heals wounds extremely quickly. \n \
               The manufacturing process is very lengthy and requires monitoring the chemicals at all times, sometimes for hours! \n \
               Entrusting this task to a student is not possible; students tend to fall asleep or not pay close attention after a while. \n \
               Therefore you need to program an automatic device to monitor the manufacturing of the drug. \n \
               The device measures the temperature every 15 seconds and provides these measurement to your program. \n \
               Your program should first read two integers representing the minimum and maximum safe temperatures. \n \
               Next, your program should continuously read temperatures (integers) that are being provided by the device. \n \
               Once the chemical reaction is complete the device will send a value of -999, \n \
               indicating to you that temperature readings are done. For each recorded temperature that is in the correct range \n \
               (it could also be equal to the min or max values), your program should display the text \"Nothing to report\".  \n \
               But as soon as a temperature reaches an unsafe level your program must display the text \"Alert!\" \n \
                and stop reading temperatures (although the device may continue sending temperature values). \n \
              Examples Input: 10 20 \n \
              15 10 20 0 15 -999 \n \
                Output: Nothing to report \n \  Nothing to report \n \ Nothing to report \n \   Alert! \n \
                Input: 0 100 \n \
                15 50 75 -999 \n \
                Output: \n \  Nothing to report \n \  Nothing to report \n \   Nothing to report \n \   " );

    puts( "This task offers 1 hint : Hint 1 : Use a while loop to continue reading temperatures until \n \
                     the program reads -999 or an unsafe temperature. " );



    int minimumSafeTemperatures = 0;

    int maximumSafeTemperatures = 0;

    int ReadTemp = 0 ;

    puts( " Your should first input two integers representing the minimum and maximum safe temperatures. " );

    scanf("%d", &minimumSafeTemperatures );

    scanf("%d", &maximumSafeTemperatures );

    while ( ReadTemp != -999)
    {
        puts( " Your should integers representing the temperatures, enter -999 to stop. " );

        scanf("%d", &ReadTemp );

        if( ReadTemp >= minimumSafeTemperatures && ReadTemp <= maximumSafeTemperatures )
        {
            puts( "Nothing to report" );
        }

        else if ( ReadTemp == -999)
        {
            /// puts( "End of Input" );

            break;
        }

        else
        {
            puts( "Alert!" );

            break;
        }



    }



    puts( " Activity: even or odd number of letters in a word?" );

    puts( " Activity: odd even length of string (External resource) " );



    puts( " At the annual meeting of MOOC fans, participants register on the first day of the event in order to receive their name tags, \n \
         brochures and banquet vouchers. Unfortunately this often results in long lines. In an attempt to speed things up, \n \
          there are now two people working the registration desk: one person who has the registration materials \n \
          for those fans whose names contain an odd number of letters, the other for those whose names have an even number of letters. \n \
            Your job is to write a C-program that will tell a fan which line to stand in. \n \
            To simplify the program, you may assume that student names are less than 50 characters long and contain no spaces. \n \
         Your program should output an integer value (1 or 2) depending on whether the fan should join \n \
         line 1 (name has even number of letters) or line 2 (name has odd number of letters). " );

    puts( " Examples Input: Sharrock , Output: 1. Input: Bonfert, Output: 2 " );

    puts( " Remember that strings are null terminated, so you can count characters until you reach the \0 character to find the string's length. " );

    puts( " Activity: even or odd number of letters in a word?" );

    puts( " Activity: odd even length of string (External resource) " );



    char wordName[50]; /// Initialize the word
    int iName = 0; /// Initialize the word length
    printf("Please enter a Name: ");
    scanf("%s", wordName);
    while (wordName[iName]!='\0')
        iName++;
    printf("%s has word length %d.\n", wordName,iName);

    if ( iName % 2 == 0)
        puts( "1" );
    else
        puts( "2" );


    puts( " " );

    puts( " Find the frequencies of word lengths " );

    puts( " First input number of words in the string, then input the String of several words \n \
              in a sentence, Then Find the frequencies of word lengths " );


    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11]; /// Maximum 10 characters.
    int length[10];//length[5] number of 5-letter-long words in the text
    for(i=0; i<10; i++) /// Put zero value in all length number frequency

    {
        length[i]=0;
    }
    scanf("%d", &nbWords);
    for(t=0; t<nbWords; t++)
    {
        scanf("%s", word);
        l = 0;   /// start counting l at 0 for each word length.
        while(word[l]!='\0')
        {
            l++;
        }
        length[l] = length[l] + 1;  /// or  length[l]++
        printf("%s %d ", word,l);
    }
    for(j=0; j<10; j++)
    {
        printf("There are %d words with %d letters.\n", length[j], j);
    }





    puts( " Activity: find the longest word in a text " );

    puts( " Activity: find longest string length (External resource) " );




    puts( " Your job is to find the length of the longest word in a text with no punctuation \n \
           or special characters of any kind - only contains words. To do so, please write a C-program  \n \
           that takes as a input first the number of words in a text, followed by all of the words in the text. \n \
            The output of your program should be the length of the longest word in the text. \n \
           To simplify your program, you can assume that the longest word will not exceed 100 characters.  \n \
           \n \
          Examples Input: 14 \n \
          This is a simple example text \n \
          we have to find the largest word length \n \
          Output: 7 \n \
          Input:  7 \n \
          All cats are grey in the dark \n \
          Output:   4 \n \
         Remember that the last character in a C string is always a null terminator, \\0. \n \
         This means you can count characters until you reach a \\0 to calculate a words length. \n \ " );






    int WordLengthMax = 0 ;  /// Initialize the maximum word length.

    int inputWordNumber = 0 ; /// takes as a input first the number of words in a text, followed by all of the words in the text.

    char inputReadWords[101]; /// To simplify your program, you can assume that the longest word will not exceed 100 characters.

    puts( "Enter an input first the number of words in a text," );
    scanf("%d", &inputWordNumber ); /// takes as a input first the number of words in a text,

    for ( int i = 0 ; i < inputWordNumber ; i++)
    {
        scanf("%s", inputReadWords );  /// takes as a input all of the words in the text.

        printf("%s ",inputReadWords);

        int WordLength = 0 ; // Initialize the word length.

        while( inputReadWords[WordLength]!= '\0' )
        {
            WordLength++;
        }

        printf(" %d ",WordLength);


        if (WordLength > WordLengthMax )
        {
            WordLengthMax = WordLength ;
        }


    }

    printf(" Longest Word %d ",WordLengthMax);









    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;

    system("pause>null");

}
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n
