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
#include<ctype.h>
#include <string.h>
#include <strings.h>

int main(void)

{


printf (" ");

return 0;

}


/**

How to clear console in C language?
21-02-2018
It is one of the basic need a program may required i.e clear the console during execution time.

There is function named clrscr() which is included in conio.h and is a nonstandard function and is present in conio.h header file which is mostly used by MS-DOS compilers like Turbo C. It is not part of the C standard library or ISO C, nor is it defined by POSIX.

So what should we use there?
There are two more ways to clear console:

By Using system(“clear”)
By using a regex “\e[1;1H\e[2J”
Now question arises which should we use and why:
Using regex is a better way.The reason is its faster execution. By using regex we can perform clear screen operation very fastly in comparison to using system(“clear”).
Below c program will demonstrate how fast regex is then the system(“clear”)
The system(“clear”) is included in stdlib.h and also work only in linux system to use this in window use system(“cls”).

filter_none
edit
play_arrow

brightness_4
// C program for clearing console and
// comparing two different methods
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i = 0;
    double time_taken;
    clock_t t1, t2;

    // a loop for showing geeks for geeks
    // repeating by clearing console using
    // system("clear")

    // Noting start time
    t1 = clock();
    for (i; i < 10000; i++)
    {
        system("clear");
        printf("geeks for geeks %d\n", i);
    }

    // Calculating total time taken by
    // system("clear")
    t1 = clock() - t1;

    // Noting start time of regex
    t2 = clock();
    for (i; i < 10000; i++)
    {
        printf("\e[1;1H\e[2J");
        printf("geeks for geeks %d\n", i);
    }

    // calculating total time taken by regex
    t2 = clock() - t2;

    // printing taken by both
    printf("Time taken by system\(\"clear\") %f\n",
                       ((double)t1)/CLOCKS_PER_SEC);
    printf("Time taken regex %f",
                 ((double)t2)/CLOCKS_PER_SEC);

    return 0;
}
Output

geeks for geeks 9999
Time taken by system("clear") 0.934388
Time taken by regex 0.000001
NOTE:The output time may differ but the difference in both time will always be large.And also run this program only in your system’s console not here.


**/
