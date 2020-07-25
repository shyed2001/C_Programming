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
#include <direct.h>
#include <math.h>
#include <stdbool.h>


int main()
{
    char firstLetter;
    char secondLetter;

    printf( "Type in a single letter: " );
    firstLetter = getc( stdin );
    if ( isalpha(firstLetter) && tolower(firstLetter) != 'z' ) {
        secondLetter = firstLetter + 1;
        printf( "The letter after %c is %c\n", firstLetter, secondLetter );
    } else {
        printf( "Invalid letter\n" );
    }
    return 0;
}
