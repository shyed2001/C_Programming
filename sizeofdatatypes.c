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

int main(void)
{
    printf("The amount of storage required for each of these types varies by platform.\\n");
    printf("\n C has a built-in sizeof operator that gives the memory requirements for a particular data type.\n");

    printf("Memory Size of bool is: %ld byte \n", sizeof(bool));
    printf("Memory Size of char is: %ld byte\n", sizeof(char));
    printf("Memory Size of int is: %ld byte\n", sizeof(int));
    printf("Memory Size of float is: %ld byte\n", sizeof(float));
    printf("Memory Size of long is: %ld byte\n", sizeof(long));
    printf("Memory Size of long long is: %ld byte\n", sizeof(long long));
    printf("Memory Size of double is: %ld byte\n", sizeof(double));
    printf("sizeof(long double) = %d\n", sizeof(long double));
     printf("Memory Size of string is: ?????? byte\n");
       return 0;
}
