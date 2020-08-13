/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>

/**
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
**/


int main(void)

{


printf (" ");

 printf(R"(    The code is

#include<stdio.h>
int main() {
   int a = 10;
   printf("Hello world! \n");
   printf("The value of a : %d",a);
   getchar();
   return 0;
   }

output is )");
  printf("\n\n");


   int a = 10;
   printf("Hello world! \n");
   printf("The value of a : %d",a);
   getchar();


    return 0;

}

/**
https://www.tutorialspoint.com/c_standard_library/c_function_getchar.htm

C library function - getchar()

Description
The C library function int getchar(void) gets a character (an unsigned char) from stdin. This is equivalent to getc with stdin as its argument.

Declaration
Following is the declaration for getchar() function.

int getchar(void)
Parameters
NA

Return Value
This function returns the character read as an unsigned char cast to an int or EOF on end of file or error.

Example
The following example shows the usage of getchar() function.

#include <stdio.h>

int main () {
   char c;

   printf("Enter character: ");
   c = getchar();

   printf("Character entered: ");
   putchar(c);

   return(0);
}
Let us compile and run the above program that will produce the following result −

Enter character: a
Character entered: a

**/

/**

C library function - putchar()
Description
The C library function int putchar(int char) writes a character (an unsigned char) specified by the argument char to stdout.

Declaration
Following is the declaration for putchar() function.

int putchar(int char)
Parameters
char − This is the character to be written. This is passed as its int promotion.

Return Value
This function returns the character written as an unsigned char cast to an int or EOF on error.

Example
The following example shows the usage of putchar() function.

#include <stdio.h>

int main () {
   char ch;

   for(ch = 'A' ; ch <= 'Z' ; ch++) {
      putchar(ch);
   }

   return(0);
}
Let us compile and run the above program that will produce the following result −

ABCDEFGHIJKLMNOPQRSTUVWXYZ



**/
