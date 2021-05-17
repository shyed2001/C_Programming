#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// preprocessor directive

#define RUNS 1000UL


int main(void)
{

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
       Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. \
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
        /// puts( "Enter number as input (in grams):   " );
        scanf("%d", &inputInGrams);

        arrayinputInGrams[CellNumber] = inputInGrams ;

        CellNumber += 1;

    }

    ///puts( "Enter an integer which represents an ingredient's ID number (between 0 and 9):   " );

    scanf("%d", &IDnumber);
    printf("\n%d\n", arrayinputInGrams[IDnumber]);

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    free(treeName[77]);
    free(arrayinputInGrams[10]);
    free(Secondarray[5]);

    return 0;

    system("pause>null");

}
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n
