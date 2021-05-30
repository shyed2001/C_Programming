//#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{

    clock_t tStart = clock();



    puts( " Activity: guess my number " );

    puts( " Activity: guess my number (External resource) " );



            puts( " please enter a secret number between 1 to 99 as a guess " );
            scanf("%d", &UserGuess);


          printf(" Number of tries needed:\n %d", NumTriesGuess);


          puts( " " );

          puts( " " );

          puts( " " );

          puts( " " );

          puts( " " );

          puts( " " );

          puts( " " );


          puts( " " );

          puts( " " );

          puts( " " );



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


          printf(" \n Time taken: %.5f s\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);




          return 0;
          system("pause>null");

          /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
          /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
          /// will cause the black dos window (where you see your output) to be paused untill you press any key.
          printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}

