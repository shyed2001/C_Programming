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

/**
 * C program to find range of data type
 In C programming data types play a major role, so is their size and range. The sizeof() operator gives you bytes required to store value of some type in memory. However, in programming you must be aware of range of a type to avoid overflow and underflow errors.

The size of a data type is compiler dependent and so is its range. So, you must not hardcode size and range values in your program.
There are two ways to find minimum and maximum range of a type. You can use any of the approach to get range of a type.

Find range of data types manually without C library
The minimum and maximum range of a signed type is given by -
-(2N-1) to 2N-1 - 1 (Where N is sizeof(type) * 8 i.e. total number of bits used by the type)

The minimum and maximum range of an unsigned type is given by -
0 to (2N-1) + (2N-1 - 1)
 */



void printUnsignedRange(int bytes)
{
    int bits = 8 * bytes;

    unsigned long long to = (1LLU << (bits - 1)) + ((1LL << (bits - 1)) - 1);;

    printf(" 0 to %llu\n\n", to);
}

void printSignedRange(int bytes)
{
    int bits = 8 * bytes;

    long long from  = -(1LL << (bits - 1));
    long long to    =  (1LL << (bits - 1)) - 1;

    printf(" %lld to %lld\n\n", from, to);
}

int main()
{
    printf("Range of char =");
    printSignedRange(sizeof(char));

    printf("Range of unsigned char =");
    printUnsignedRange(sizeof(unsigned char));

    printf("Range of short =");
    printSignedRange(sizeof(short));

    printf("Range of unsigned short =");
    printUnsignedRange(sizeof(unsigned short));

    printf("Range of int =");
    printSignedRange(sizeof(int));

    printf("Range of unsigned int =");
    printUnsignedRange(sizeof(unsigned int));

    printf("Range of long =");
    printSignedRange(sizeof(long));

    printf("Range of unsigned long =");
    printUnsignedRange(sizeof(unsigned long));

    printf("Range of long long =");
    printSignedRange(sizeof(long long));

    printf("Range of unsigned long long =");
    printUnsignedRange(sizeof(unsigned long long));

    return 0;
}
