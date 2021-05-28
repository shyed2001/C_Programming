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



          }


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
