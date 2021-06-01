#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define maxCount 500

int main(void)
{

    clock_t tStart = clock();


    puts( " " );

    puts( " " );

    puts( " " );


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



    char wordName[50];
    int iName = 0;
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

    puts( " " );

    puts( " " );

    puts( " " );

    puts( " " );

    puts( " " );

    puts( " " );

    puts( " " );

    puts( " " );




    printf(" \n Time taken: %.5f s\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);




    return 0;
    system("pause>null");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}


/*

The above code can also be executed by the following code
#include <stdio.h>

int main()
{
int expense;
scanf("%d",&expense);
int sumOfExpenses = 0;
while (expense != -1)
{
   sumOfExpenses = sumOfExpenses + expense;
   scanf("%d",&expense);
}
printf("%d\n",sumOfExpenses);

return 0;
}


*/





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
