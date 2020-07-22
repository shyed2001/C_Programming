/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>



int main()
{
    int secret_number = 5;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outOfGuesses = 0;
    int outofrange = 0;

    while (guess != secret_number && outOfGuesses == 0)
    {
        if(guesscount<guesslimit)
        {
        printf("\n Do not enter letter character.  Enter a number between 0 to 10 :   ");
        scanf("%d", &guess);

            if ( 0 > guess || guess > 10)
            {
            outofrange = 1;
            break; /// breaks out of if condition and while loop .
            }
            else
            {
            guesscount++;
            }
        }
        else
        {
            outOfGuesses = 1;
        }


    }
    if( outofrange == 1)
    {
      printf(" \n You lost \n ");
    }
    else if ( outOfGuesses==1 )
    printf(" \n out of guesses \n ");

    else if (guess == secret_number)
    {
            printf("You Win");
    }
    else {
        return;
         }
return 0;

}
