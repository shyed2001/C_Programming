/*@Shyed Shahriar Housaini
Copyright: @uthor*/

/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <unistd.h>
/// #include <windows.h>
///#include <threads.h>
///#include <conio.h>
//#include <dos.h>
///#include <direct.h>
//#include <math.h>


#define  N 3

#define KK 33

const int D = 7;

const double F = 10;  /// Good to use all capital letter const names.

const double  A = 7;   /// Good to use all capital letter const names.

int main(void)

{


   int sum1 = 30;
   int sum2 = 20;
   int sum = 10;


       printf(" a header #define KK 33 \
              will show/printf KK = %d \n", KK);

        printf("Average %d \n", (sum + sum1 + sum2)/N);


        printf(" ? N=d  %d \n", N);

        printf(" int D =d  %d  \n", D);

        printf(" double F =if  %lf  \n", F);

        printf(" double A =d  %d  \n", A);

        printf(" double A =f  %f  \n", A);

        printf("when constant N is declared as #define ? N 3, then N=  %d all over the program. \n", N);

        printf("when constant D is declared as const int D = 7; then D =  %d all over the program. \n", D);

        printf("when constant F is declared as const double F = 9; then F =  %d all over the program. \n", F);

        printf("when constant A is declared as const double A = 7; then A =  %f all over the program. \n", A);

        printf(" (i/?) D/N = (d) %d  \n", (D/N));

        printf(" (i/?) D/N = (lf) %lf  \n", (D/N));

        printf(" (f/?) F/N =  (ld) %ld  \n", (F/N));

        printf(" (f/?) F/N =  (f) %f  \n", (F/N));

        printf(" (f/?) F/N =  (lf) %lf  \n", (F/N));

        printf(" (d/?) A/N = (d) %d  \n", (A/N));

        printf(" (d/?) A/N = (lf) %lf  \n", (A/N));

        printf(" (d/?) A/N = (f) %f  \n", (A/N));

        printf(R"(More reading material at - https://www.geeksforgeeks.org/const-qualifier-in-c/;)");
         /// Raw string.

 return 0;
}


/*
C Language: #define Directive (macro definition)
This C tutorial explains how to use the #define preprocessor directive in the C language.

Description
In the C Programming Language, the #define directive allows the definition of macros within your source code. These macro definitions allow constant values to be declared for use throughout your code.

Macro definitions are not variables and cannot be changed by your program code like variables. You generally use this syntax when creating constants that represent numbers, strings or expressions.

Syntax
The syntax for creating a constant using #define in the C language is:

#define CNAME value
OR

#define CNAME (expression)
CNAME
The name of the constant. Most C programmers define their constant names in uppercase, but it is not a requirement of the C Language.
value
The value of the constant.
expression
Expression whose value is assigned to the constant. The expression must be enclosed in parentheses if it contains operators.
Note
Do NOT put a semicolon character at the end of #define statements. This is a common mistake.
Example
Let's look at how to use #define directives with numbers, strings, and expressions.

Number
The following is an example of how you use the #define directive to define a numeric constant:

#define AGE 10
In this example, the constant named AGE would contain the value of 10.

String
You can use the #define directive to define a string constant.

For example:

#define NAME "TechOnTheNet.com"
In this example, the constant called NAME would contain the value of "TechOnTheNet.com".

Below is an example C program where we define these two constants:

#include <stdio.h>

#define NAME "TechOnTheNet.com"
#define AGE 10

int main()
{
   printf("%s is over %d years old.\n", NAME, AGE);
   return 0;
}
This C program would print the following:

TechOnTheNet.com is over 10 years old.
Expression
You can use the #define directive to define a constant using an expression.

For example:

#define AGE (20 / 2)
In this example, the constant named AGE would also contain the value of 10.

Below is an example C program where we use an expression to define the constant:

#include <stdio.h>

#define AGE (20 / 2)

int main()
{
   printf("TechOnTheNet.com is over %d years old.\n", AGE);
   return 0;
}
This C program would also print the following:

TechOnTheNet.com is over 10 years old.

 */
