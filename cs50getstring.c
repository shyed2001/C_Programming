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
#include "cs50.h"
#include "cs50.c"


int main(void)

{


printf (" ");
string s = get_string("Enter string: ");

    // ensure string was read
    if (s == NULL)
    {
        return 1;
    }

    string next = get_string("You just entered %s. Enter a new string: ", s);

    if (next == NULL)
    {
        return 1;
    }

    printf("Your first string was %s\n", s);
    printf("Your last string was %s\n", next);
return 0;

}
