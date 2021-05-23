//#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include <stdbool.h>
int main(void)
{

    clock_t tStart = clock();





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

    int nbThrows = 0; /// Start counting at Zero at first throw, have to modify and add one to output
    int diceValue;
    puts("Please enter value of 6 to get out of this while loop");
    scanf("%d", &diceValue);
    /// notSix = diceValue != 6;
    while (diceValue != 6) {
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

















    /*

    IF-ELSE statement shortcut in C

    C has the following syntax for a shorthand IF-ELSE statement

    (integer == 5) ? (TRUE) : (FALSE);
    I often find myself requiring only one portion (TRUE or FALSE) of the statement and use this

    (integer == 5) ? (TRUE) : (0);
    I was just wondering if there was a way to not include the ELSE portion of the statement using this shorthand notation?

    The operator ?: must return a value. If you didn't have the "else" part, what would it return when the boolean
    expression is false? A sensible default in some other languages may be null, but probably not for C. If you just
    need to do the "if" and you don't need it to return a value, then typing if is a lot easier.
    Question is whether we can somehow write the following expression without both then and else parts

    (integer == 5) ? (THENEXPR) : (ELSEEXPR);
    If you only need the then part you can use &&:

    (integer == 5) && (THENEXPR)
    If you only need the else part use ||:

    (integer == 5) || (ELSEEXPR)

       */


    printf(" \n Time taken: %.5f s\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);




    return 0;
    system("pause>null");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}
