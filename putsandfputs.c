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
    printf(R"(    The code is

    #include<stdio.h>

   int main()
   {
  puts("\n puts() dose not support Raw string ");

   puts("This is a demo.");
   fputs("Line.", stdout);
   puts(" Welcome!");
   getchar();
   return 0;
   }

output is )");

puts("  ");

puts("\n puts() autometically puts a \\n newlinw at the end of string, \\n is not printed");
  puts("\n puts() dose not support Raw string ");
   puts("This is a demo.");
   fputs("Line.", stdout);
   puts(" Welcome!");


  puts(" using puts - Geek%sforGeek%s");
       // % is intentionally put here to show side effects of using printf(str)
    printf("  using printf - Geek%sforGeek%s");



   getchar();
   return 0;

/**

https://www.tutorialspoint.com/puts-vs-printf-for-printing-a-string-in-c-language

puts() vs printf() for printing a string in C language

The function puts() and printf() are declared in stdio.h header file and are used to send the text to the output stream. Both have different usages and syntax.

puts()
The function puts() is used to print the string on the output stream with the additional new line character ‘\n’. It moves the cursor to the next line. Implementation of puts() is easier than printf(). and if the string has formatting characters like ‘%’, then printf() would give unexpected results.

Here is the syntax of puts() in C language,

puts(“string”);
If you do not want the cursor to be moved to the new line, use the following syntax.

fputs("string", stdout);

Here is an example of puts() in C language,

Example

#include<stdio.h>
int main() {
   puts("This is a demo.");
   fputs("No new Line.", stdout);
   puts(" Welcome!");
   getchar();
   return 0;
}
Output
This is a demo.
No new Line. Welcome!

**/
}
