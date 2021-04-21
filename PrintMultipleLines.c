/*author/owner == Shyed Shahriar Housaini
License == MIT + terms and conditions of author/owner
Copyright: author/owner*/
// Multiple lines were commented.

#include <stdio.h>
#include <stdlib.h>
// preprocessor directive

int main(void) // main function
{
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
        for(i = 0; i < 3; i++ ) {
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
    int X , Y , Z ;
    puts("Dear Procrastinator,\n");
    X=25-23;
    Y = (60 * 24 * X) ;
    Z = 60 * Y;
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", X, Y , Z);

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


    int balance;//DECLARATION
    int Balance;//DECLARATION 2  /// Variables are case sensitive
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


    free(i); free(variable);
    free(age);/// Free up memory
    free(X);
    free(Y); /// Free up memory
    free(Z);
    free(Balance); /// Free up memory
    free(balance); /// Free up memory

    // return statement
    return 0;
}
