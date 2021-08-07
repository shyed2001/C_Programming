/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// #include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include<ctype.h>
//#include <cstdlib>
//#include <iostream>
//#include <cmath>
//#include <string>
//#include <iomanip>


/// What you will learn in this unit

/// decompose a more complex programming task into functions
///create functions with arguments passed by value
///find a prototype for a given function
///write a function call for a given function
///explain the purpose and difference of function definition, function prototype and function call
///explain what happens in memory when a function is called recursively
///convert a program using a loop to one using recursion
///Differentiate parameters and arguments of a function
///Differentiate the prototype and the definition of a function

/// int sum(int x, int y);/// PARAMETERS, type defines /// Prototype

int sum(int, int); /// Prototype of sum function, types and name of the function.

/// PARAMETERS, type defines
/// When a function is called, values are copied into parameters.


void printLine(int nCols, char pattern);
void printTriangle(int nLines, char pattern);
void printRectangle(int nLines, int nCols, char pattern);

double ConvertLength (double userLengthInput);
double ConvertWeight (double userWeightInput);
double ConvertTempetature (double userTempInput);

int minimum (int Userinput, int minValue);

int factorial(int n);

int fibonacci(int);

int sum_of_digit(int Number);

int sumOfDigits(int n);

void doSomething(int h);

int funnyadd(int j, int i);


void swap(int a, int b);

void swapPointer(int * a, int * b);

void addThree(int a);

void addThreePointer(int * a);

//Write your function prototype here
void ageChange (int * age);



void reset1(int * ptr);

void reset2(int ptr[]);

void reset3(int * ptr);

void reverseArray(int * ARR);




int main(void)

{

    printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");

    clock_t tStart = clock();

    int a,b;
    int result;
    printf("Please enter two numbers: ");
    scanf("%d%d", &a, &b);
    clock_t tStart2 = clock();
    printf("You entered %d and %d.\n", a, b);
    result = sum(a, b); /// ARGUMENTS, Variable type defined before.
    /// When a function is called, values are copied into parameters.
    printf("Result of the sum = %d.\n", result);
    /// When a function is called, values are copied into parameters.

    printf("Time taken: %.5fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);



    clock_t tStart3 = clock();

    int nCols;
    int nLines;
    int i,j;

    printf("How many columns would you like? ");
    scanf("%d", &nCols);
    printf("How many lines would you like? ");
    scanf("%d", &nLines);
    for (i = 0; i < nCols; i++)
    {
        printf("X");
    }
    printf("\n");
    for (i = 0; i < nLines; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < nLines; i++)
    {
        for (j = 0; j < nCols; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("3rd  Time taken: %.5fs\n", (double)(clock() - tStart3)/CLOCKS_PER_SEC);




    printf("How many columns would you like? ");
    scanf("%d", &nCols);
    printLine(nCols, 'X');

    printf("How many lines would you like? ");
    scanf("%d", &nLines);
    printTriangle(nLines, '*');
    printf("\n");
    printRectangle(nLines, nCols, '#');


    /*
    Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.

    Here are the conversion rules to use:

    1 meter = 3.2808 feet;

    1 gram = 0.002205 pounds;

    temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

    On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).

    Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.

    You may use functions to complete this exercise, but that is not required. However, you will need to use a comparison operation with characters, for example:

    char letter = 'a';

    if(letter == 'a') {...}


    Example
    The following entry indicates that there are four values to be converted. The first is 10 meters, which, when converted, gives approximately 32.808 feet. The second is 1245.243 grams, or about 2.745761 pounds, the third is 37.2 degrees Celsius, or 98.96 degrees Farenheit, and the fourth is 23 grams, or 0.050715 pounds.

    Input
    4
    10 m
    1245.243 g
    37.2 c
    23 g


    Output
    32.808000 ft
    2.745761 lbs
    98.960000 f
    0.050715 lbs

    */



    /// Activity: program a smart unit converter
    /// Activity: function to help in conversion (External resource)
    int numberofValues;
    double length, weight, temp, InputValue;
    char m, g, c, Unit;
    numberofValues = length = weight = temp = InputValue = 0;



    puts("How many values would you like to convert? ");
    scanf("%d", &numberofValues);

    /// int i;
    for (i = 0; i < numberofValues; i++)
    {
        puts("Please enter the values to be converted in meters, grams or degrees Celsius ");
        puts(" with m or g or c respectively with a space between value and the unit letter ");

        scanf("%lf %c", &InputValue, &Unit );

        if (Unit == 'm')
        {
            ConvertLength(InputValue);
        }

        else if (Unit == 'g')
        {
            ConvertWeight(InputValue);
        }

        else if (Unit == 'c')
        {
            ConvertTempetature(InputValue);
        }

        else
            printf("\n %c Wrong Unit \n", Unit);

    }
    puts("\n");




/// Activity: find the smallest integer

/// Activity: function to find smallest integer (External resource)

    /*
    The goal of this problem is to find the smallest integer in a list of numbers.

    To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

    Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.

    Example
    Input
    10
    4 3 6 2 6 8 9 8 5 4
    Output
    2
    This task offers 1 hint :

    Hint 1 :

    Try reading the first two elements of the list outside of a loop, and then the rest inside of a loop that start with the index at 2.

    */


    int MinimumValue, numberofValuestoCompare, userinput, userinput1, userinput2, MinValue;

    numberofValuestoCompare = MinValue = userinput = userinput1 = userinput2 = MinimumValue = 0;

    //puts("How many values would you like to convert? ");
    scanf("%d", &numberofValuestoCompare);
    //printf("Please enter %d number of inputs seperately: ", numberofValuestoCompare );
    scanf("%d", &userinput1 );
    numberofValuestoCompare--;
    //printf("Please enter %d number of inputs seperately: ", numberofValuestoCompare );
    scanf("%d", &userinput2 );
    numberofValuestoCompare--;
    if (userinput1 < userinput2)
    {
        MinValue = userinput1;
    }
    else if (userinput1 == userinput2)
    {
        MinValue = userinput2;
    }

    else
    {
        MinValue = userinput2;
    }
    for (int i=0; i< numberofValuestoCompare; i++)
    {
        scanf("%d", &userinput );
        MinimumValue = minimum(userinput, MinValue);
        MinValue = MinimumValue;
    }
    printf("The minimum value is %d.\n", MinimumValue);



    /// Use recursion to make a function use itself: the factorial example

    /// Use recursion to make a function use itself: the factorial example


    /// 5! = 1*2*3*4*5
    /// n! = 1*2*3*...*(n-1)*n

    int n, facto;
    printf("Please enter a positive integer: ");
    scanf("%d",&n);
    facto = 1;
    for(i=1 ; i<=n ; i++)
    {
        facto = i*facto;
    }
    if( n < 0 )
    {
        printf("%d is negative! Aborting..\n", n);
    }
    else
    {
        printf("%d! = %d.\n", n, facto);
    }

// 5! = 1*2*3*4*5
// n! = 1*2*3*...*(n-1)*n
//recursion : one function calls itself


        /// int n, facto;
        printf("Please enter a positive integer: ");
        scanf("%d",&n);
        if(n<0)
        {
            printf("%d is negative! Aborting..\n", n);
        }
        else
        {
            facto = factorial(n);
            printf("%d! = %d.\n", n, facto);
        }



        ///Use recursion to make a function use itself: the Fibonacci example
        /// Use recursion to make a function use itself: the Fibonacci example

/// Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...



    //! showMemory(start=65520)
    int N, fib;
    printf("Which Fibonacci number would you like: ");
    scanf("%d", &N);
    if (N<=0) {
        printf("%d is not positive. Aborting!\n", N);
    } else {
        fib = fibonacci(N);
        printf("The %dth Fibonacci number is %d.\n", N, fib);
    }



    /*

    Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits
     of a number. To do so, your main function should first read an integer number as input
     and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum,
      at which point the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6

Examples
Input
47253
Output
21


Input
643
Output
13

This task offers 2 hints :

Hint 1 :

To isolate the value of each digit, sumOfDigits() can utilize the modulus operator (%)

Hint 2 :

sumOfDigits() should check whether it is examining the last digit by determining if the value of the number passed in is less than 10.

    */

/* C Program to Find Sum of Digits of a Number using Recursion */



int Number1, Sum1 = 0;

  printf("\nPlease Enter any number\n");
  scanf("%d", &Number1);

  Sum1 = sumOfDigits(Number1);

  printf("\nSum of the digits of Given Number = %d", Sum1);


// Recursive C program to find sum of digits
// of a number



// Function to check sum of digit using recursion


// Driven Program to check above





    int Number, Sum = 0;
    printf("\nPlease Enter any number\n");
    scanf("%d", &Number);

    Sum = sum_of_digit(Number);
    printf("Sum of digits in %d is %d\n", Number, Sum);







    ///  Memory and the scope of variables Introducing memory organization.
    /// You will better understand how a computer is organized and where the memory processes take place in the computer.

    /*
    At the end of the unit, you will be able to:

Identify components of the Von Neumann architecture model
Recall how computer memory is organized and addressed
Use the sizeof() function to find out how much space a variable of a certain type uses up in memory on a given computer system
Recognize overflow and roundoff errors and their causes
Identify the scope of a variable within a C program including blocks and functions


    */


    /// Get and print the size of basic typesGet and print the size of basic types
    /// Get and print the size of basic types

    /// printf("Memory Size of bool is: %ld byte \n", sizeof(bool));   /// This line causes error.
    printf("Memory Size of char is: %ld byte\n", sizeof(char));
    printf("Memory Size of int is: %ld byte\n", sizeof(int));
    printf("Memory Size of float is: %ld byte\n", sizeof(float));
    printf("Memory Size of long is: %ld byte\n", sizeof(long));
    printf("Memory Size of long long is: %ld byte\n", sizeof(long long));
    printf("Memory Size of double is: %ld byte\n", sizeof(double));
    printf("Memory Size of long double is: %ld byte\n", sizeof(long double));
    printf("Memory Size of string is: ?????? byte\n");

    /// space used in memory to store a variable might vary.
    ///To figure out how much space is used, you will learn how to manipulate sizeof.


   ///  char c;
    /// int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));

    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(i));
    printf("%zu\n", sizeof(d));


    printf("%zu\n", sizeof(listChar));
    printf("%zu\n", sizeof(listInt));
    printf("%zu\n", sizeof(listDouble));

/// Activity: compute space
/// Activity: compute space (External resource)


/*

A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. These codes consist of either all integers, all decimal numbers, or all characters. The chief technology officer has warned you that the database is old and has limited space, so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process.

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.

Examples
Input:
3
10 i
7 c
12 d
Output:
143 bytes


Input:
2
3 c
20 d
Output:
163 bytes

Input:
4
5 i
2 d
10 a
3 c
Output:
Invalid tracking code type


*/


   int numberofTrackingCode = 0;
   char CodeDataType;
   int TotalDatatTypeMemorySize = 0;
    int CodeDigitValue = 0 ;
    int intDatatTypeMemorySize, doubleDatatTypeMemorySize, charDatatTypeMemorySize ;

    intDatatTypeMemorySize = doubleDatatTypeMemorySize = charDatatTypeMemorySize = 0 ;


    puts("How many tracking code would you like to enter, please enter a positive number? ");
    scanf("%d", &numberofTrackingCode);

    /// int i;
    for (int j = 0; j < numberofTrackingCode; j++)
    {
        puts("Please enter the code number followed by a space and then the type of code ");
        puts(" ('i' for integer, 'd' for decimal, or 'c' for character).");

        scanf("%d %c", &CodeDigitValue, &CodeDataType );

        if (CodeDataType == 'i')
        {
            intDatatTypeMemorySize = sizeof(int)* CodeDigitValue;
            TotalDatatTypeMemorySize = TotalDatatTypeMemorySize  + intDatatTypeMemorySize ;
        }

        else if (CodeDataType == 'd')
        {
            doubleDatatTypeMemorySize = sizeof(double)* CodeDigitValue ;
            TotalDatatTypeMemorySize = TotalDatatTypeMemorySize + doubleDatatTypeMemorySize;
        }

        else if (CodeDataType == 'c')
        {
            charDatatTypeMemorySize = sizeof(char)* CodeDigitValue ;
            TotalDatatTypeMemorySize = TotalDatatTypeMemorySize + charDatatTypeMemorySize;
        }

        else
        {
            puts("Invalid tracking code type");
            printf("\n %c Invalid tracking code type \n", CodeDataType);
        }


    }
    puts("\n");
    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDatatTypeMemorySize );




 /// What is the largest integer that you could store in the system?
 /// What is the largest integer that you could store in the system?
 /// Be aware of the largest possible value for an integer!
 /// Be aware of the largest possible value for an integer!


    //! showMemory(start=65520)
    int num = 2147483645;
    /// int i;

    for (i=0; i<8; i++) {
        printf("%d\n", num);
        num = num+1;
    }
/*
    num = 0;
    do {
    printf("value of num: %d\n", num);
    num = num+1;
    }while( num > 0 );

*/



  /// Round off numbers and circumvent errors
  /// Round off numbers and circumvent errors




        double dnum1 = 0.25;

    printf("double dnum1 = 0.25; the number is %lf\n", dnum1);

    printf("double dnum1 = 0.25; the number is %.20lf\n", dnum1);

    printf(" double dnum1 = 0.25;the number is %.40lf\n", dnum1);


    double dnum2 = 0.3;

        printf(" double dnum2 = 0.3 the number is %lf\n", dnum2);

    printf(" double dnum2 = 0.3 the number is %.20lf\n", dnum2);

    printf(" double dnum2 = 0.3 the number is %.40lf\n", dnum2);



        long double ldnum1 = 0.25;

    printf("long double ldnum1 = 0.25; the number is %Lf\n", ldnum1);

    printf("long double ldnum1 = 0.25; the number is %.20Lf\n", ldnum1);

    printf(" long double ldnum1 = 0.25;the number is %.40Lf\n", ldnum1);



    long double ldnum2 = 0.3;

        printf(" long double ldnum2 = 0.3 the number is %Lf\n", ldnum2);

    printf(" long double ldnum2 = 0.3 the number is %.20Lf\n", ldnum2);

    printf(" long double ldnum2 = 0.3 the number is %.40Lf\n", ldnum2);



             long long llnum1 = 0.25;

    printf("long long llnum1 = 0.25; the number is %lld\n", llnum1);

    printf("long long llnum1 = 0.25; the number is %.20lld\n", llnum1);

    printf(" long long llnum1 = 0.25; the number is %.40lld\n", llnum1);



    long long llnum2 = 0.3;

        printf(" long long llnum2 = 0.3 the number is %lld\n", llnum2);

    printf(" long long llnum2 = 0.3 the number is %.20lld\n", llnum2);

    printf(" long long llnum2 = 0.3 the number is %.40lld\n", llnum2);



        long long llnum3 = 4;

        printf(" long long llnum3 =4 the number is %lld\n", llnum3);

    printf(" long long llnum3 = 4 the number is %.20lld\n", llnum3);

    printf(" long long llnum3 = 4 the number is %.40lld\n", llnum3);


    float fnum1 = 0.10;

    printf(" float fnum1 = 0.10 the number is %f\n", fnum1  );

    printf("float fnum1 = 0.10 the number is %.20f\n", fnum1 );

    printf(" float fnum1 = 0.10 the number is %.40f\n", fnum1 );



       float fnum2 = 0.25;

    printf(" float fnum2  = 0.25 the number is %f\n", fnum2  );

    printf("float fnum2  = 0.25 the number is %.20f\n", fnum2  );

    printf(" float fnum2  = 0.25 the number is %.40f\n", fnum2  );



    float fnum3 = 0.30;

    printf(" float fnum3  = 0.30 the number is %f\n", fnum3  );

    printf("float fnum3  = 0.30 the number is %.20f\n", fnum3  );

    printf(" float fnum3  = 0.30 the number is %.40f\n", fnum3  );




    /*

    You are programming a toaster! The toaster does not have a lot of memory, so you need to be careful about the data types you use (remember that different data types use different amounts of memory). To make this easier, you'd like an easy way to track how much memory your variables are going to use.

Your job is to write a program that shows, in human-readable form (see below for specifics), how much memory a set of variables of a certain type will use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). Next it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such a way that it would also perform correctly on other computers. In other words, rather than hard-coding specific sizes for the different variable types, your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. You need to make sure you provide this output in a form that is easy to read for humans. The following examples illustrate what this means:

Examples
If the user input were:

i 36794
then the amount of space needed (if we assume that an integer uses 4 bytes in memory) would be 4*36794 = 147176 bytes. This corresponds to 147 kilobytes and 176 bytes, so the output should be:

147 KB and 176 B


Input:
d 654250
Output:
5 MB and 234 KB and 0 B


Input:
d 35
Output:
280 B


    */

/// Activity: memory usage displayed

/// Activity: memory usage displayed (External resource)

/// convert bits to bytes to KiloBytes KB to Megabytes MB to BigaBytes GB




   char VariableDataType;
   int TotalDataTypeMemorySizeofVariables= 0;
    int NumberofthatVariable = 0 ;
    int intDataTypeMemorySize, doubleDataTypeMemorySize, charDataTypeMemorySize, shortDataTypeMemorySize, longDataTypeMemorySize  ;


        puts("Firstly enter the character that identifies the data type (i for int, s for short, c for char, d for double, l for long). ");
        puts("Please enter the Variable number followed by a space after the type of variable ");

        scanf("%c%d", &VariableDataType, &NumberofthatVariable );

        if (VariableDataType == 'i')
        {
            intDataTypeMemorySize = sizeof(int)* NumberofthatVariable;
            TotalDataTypeMemorySizeofVariables =  intDataTypeMemorySize ;
        }

        else if (VariableDataType == 'd')
        {
            doubleDataTypeMemorySize = sizeof(double)* NumberofthatVariable ;
            TotalDataTypeMemorySizeofVariables =  doubleDataTypeMemorySize;
        }

        else if (VariableDataType == 'c')
        {
            charDataTypeMemorySize = sizeof(char)* NumberofthatVariable ;
            TotalDataTypeMemorySizeofVariables =  charDataTypeMemorySize;
        }

        else if (VariableDataType == 's')
        {
            charDataTypeMemorySize = sizeof(short)* NumberofthatVariable ;
            TotalDataTypeMemorySizeofVariables =  charDataTypeMemorySize;
        }

        else if (VariableDataType == 'l')
        {
            charDataTypeMemorySize = sizeof(long)* NumberofthatVariable ;
            TotalDataTypeMemorySizeofVariables =  charDataTypeMemorySize;
        }

        else
        {
            puts("Invalid tracking code type");
            printf("\n %c Invalid tracking code type \n", VariableDataType);
            return 0;
        }

    puts("\n");

    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDataTypeMemorySizeofVariables );
     printf("Your VariableDataType is  %c\n", VariableDataType );



    //getch();
   //system("cls");   //For windows

    /// system("clear"); //For Linux

    /*local variable definition*/

/*
        puts("Firstly enter the character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). ");
        puts("Please enter the Variable number followed by a space avter the type of variable ");

        scanf("%c%d", &VariableDataType, &NumberofthatVariable );
printf("Your VariableDataType & NumberofthatVariable  is  %c %d\n", VariableDataType, NumberofthatVariable   );

   switch(VariableDataType) {
      case 'd' :
            doubleDataTypeMemorySize = sizeof(double)* NumberofthatVariable ;
             TotalDataTypeMemorySizeofVariables =  doubleDataTypeMemorySize;
                puts("\n");

    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDataTypeMemorySizeofVariables );
         break;
      case 'i' :
            intDataTypeMemorySize = sizeof(int)* NumberofthatVariable;
            TotalDataTypeMemorySizeofVariables =  intDataTypeMemorySize ;
               puts("\n");

    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDataTypeMemorySizeofVariables );
            break;
      case 'c' :
            charDataTypeMemorySize = sizeof(char)* NumberofthatVariable ;
            TotalDataTypeMemorySizeofVariables =  charDataTypeMemorySize;
               puts("\n");

    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDataTypeMemorySizeofVariables );
            break;
      case 's' :
            shortDataTypeMemorySize = sizeof(short)* NumberofthatVariable ;
            TotalDataTypeMemorySizeofVariables =  shortDataTypeMemorySize;
               puts("\n");

    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDataTypeMemorySizeofVariables );
            break;
      case 'l' :
            longDataTypeMemorySize = sizeof(long)* NumberofthatVariable ;
            TotalDataTypeMemorySizeofVariables =  longDataTypeMemorySize;
               puts("\n");

    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDataTypeMemorySizeofVariables );
            break;
      default :
            puts("Invalid tracking code type");
            printf("\n %c Invalid tracking code type \n", VariableDataType);
   }

   printf("Your VariableDataType is  %c\n", VariableDataType );

*/
    int TB, GB, MB, KB, MemorySize = 0;


  if (TotalDataTypeMemorySizeofVariables < 1000 )
        {
            MemorySize = TotalDataTypeMemorySizeofVariables;
             printf (" Total memory Size Required for Code Data storage is %d B bytes  \n", TotalDataTypeMemorySizeofVariables );
        }

  else /// ( TotalDataTypeMemorySizeofVariables >= 1000 )
        {
            KB = TotalDataTypeMemorySizeofVariables / 1000 ;
            MemorySize = TotalDataTypeMemorySizeofVariables % 1000 ;

                if ( KB < 1000)
            {
                printf ("%d KB and %d B", KB , MemorySize);
            }

                else /// (KB >= 1000)
            {
                MB = KB / 1000;
                KB = KB % 1000;

                    if ( MB < 1000)
                        printf ("%d MB and %d KB and %d B", MB, KB , MemorySize);


                     else
                     {
                         GB = MB / 1000;
                         MB = MB % 1000;
                         printf ("%d GB %d MB and %d KB and %d B", GB, MB, KB , MemorySize);
                     }

            }
        }


        /// Scope and blocks in C: scope of variables when using blocks
        ///Scope and blocks in C: scope of variables when using blocks


          a = 10;
        b = 11;
    {
        int c = 12;
        int d = 13;
        int e = a + c;
        c = b + d;
        printf("c: %d\n", c);
        printf("e: %d\n", e);
    }
    int f = 14;
    int gg = 15;
    /// int h = c + f ;   /// this will give error   c memory reused and values changed
    /// int l = d + e ;    /// this will give error // d & e memory reused and values changed
    printf("f: %d\n",f);
    printf("gg: %d", gg);



/// Scope and functions in C: scope of variables when using functions
/// Scope and functions in C: scope of variables when using functions



     a = 10;
    b = 11;
     f = 14;
    gg = 15;
    doSomething(b);
    printf("f: %d\n",f);


/// Activity: scope of variables
// Activity: scope of variables

 i = 5;
       j = 7;
      i = funnyadd(i,j);
      printf("%d", i);
      return(0);




      /*

      At the end of the unit, you will be able to:

visualize in memory the concept of a pointer
use pointers to pass variables by reference to functions
perform simple pointer arithmetic
demonstrate that an array name is a pointer by performing pointer arithmetic
create functions to which arrays can be passed and that can modify arrays

      */




    /// Get and print the address of a variable using pointers

     a = 42;
     d = 58.394;
     c = 'r';
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    double * addressOfD = &d;
    printf("address of d: %p\n", addressOfD);
    char * addressOfC = &c;
    printf("address of c: %p\n", addressOfC);


    /// Dereference a pointer: get the value stored at a specific address
    /// Dereference a pointer: get the value stored at a specific address


       double aa= 42.98;
    double * addressOfAA = &aa;
    printf("At the address %p there is the value %.2lf\n",addressOfAA,* addressOfAA);
     c = 'm';
    char * addressOfCc = &c;
    char dd = * addressOfCc;
    * addressOfAA = 32;
    * addressOfAA = * addressOfAA + 1;
    printf("At the address %p there is the value %.2lf\n",addressOfAA,* addressOfAA);


/// Activity: use pointers to create elixir
/// Activity: use pointers to create elixir


    int age;

     // add a line here that declares an integer pointer named "ageptr"

    int * ageptr ;



    scanf("%d", &age);

     // add a line here that stores the address of age in ageptr

    ageptr =  &age ;

    puts("The secret address is... ");

    // add a line here that prints out the address stored in ageptr

    printf("%p \n", ageptr );


    printf("Now take three drops of the magic elixir. \n");

   * ageptr = * ageptr -5 ;

   // add a line that uses only ageptr to lower the age by 5 years

    printf("Did the elixir work? You are %d years old!", age);


///Swap two integer variable values
/// Swap two integer variable values

      a = 9;
      b = 1;
     int tmp = a;
     a = b;
     b = tmp;
     printf("%d %d\n",a,b);



     ///Swap two integer variable values using functions
/// Swap two integer variable values using functions

     /// void swap(int a, int b)
     a = 9;
      b = 1;
     swap(a,b);
     printf("%d %d\n",a,b);



///Swap two integer variable values using functions and pointers
/// Swap two integer variable values using functions and pointers


      a = 9;
      b = 1;
     swapPointer(&a,&b);
     printf("%d %d\n",a,b);



     ///Modify an integer variable value using a function
     /// Modify an integer variable value using a function


          a = 5;
    addThree(a);
    printf("inside main, value of a: %d\n",a);




    /// Modify an integer variable value using a function with pointers
    /// Modify an integer variable value using a function with pointers



         a = 5;
    addThreePointer(&a);
    printf("inside main, value of a: %d\n",a);

/// Activity: use pointers to improve elixir
/// Activity: use pointers to improve elixir





	age;

	int *ageAddr = &age;

    puts("Please enter your age");

	/*
	int *ageAddr = &age; So ageAddr contains address of variable age. *ageAddr doesnt mean address of ageAddr.
	 *ageAddr will point value at address of the age. so you should pass the address to the scanf function either
	 you should give &age or ageAddr (which contain address of age )
	*/
	scanf("%d", ageAddr);

	printf("Your current age is %d.\n", age);

	//Write your function call here

    ageChange(&age);

	printf("Your new age will be %d!\n", age);




	/// Introduction to pointer arithmetic: arrays, addresses and pointers
	/// Introduction to pointer arithmetic: arrays, addresses and pointers


	    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;
    * ptr = 2; // * arr   0R  arr[0]
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]

    /// * ptr + 1 = 3 will not work, dereferencing and pointer arithmetic.



/// pointer arithmetics

int arry[3] = {15, 16, 17};
    printf("%p\n",arry);
    printf("%d\n",arry[0]);
    printf("%d\n",arry[1]);
    printf("%d\n",arry[2]);
    int * ptrx = arry;
    * ptrx = 2; // * arry   0R  arr[0]
    * (ptrx + 1) = 3; // * (arry + 1)   OR  arry[1]
    * (ptrx + 2) = 5;// * (arry + 2)   OR arry[2]

    printf("%d\n",arry[0]);
    printf("%d\n",arry[1]);
    printf("%d\n",arry[2]);

    /// * ptr + 1 = 3 will not work, dereferencing and pointer arithmetic.


int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};

    printf("%p\n",array); /// address of first element
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);

int *ptr1, *ptr2;
ptr1 = array+2;  /// by adding 2 address go to the address of third element.
ptr2 = &ptr1[5]; /// go to 5th index element considering ptr1 is 0 index

    printf("%d\n",*(ptr1+1)); /// add 1 element address, 4 bytes in memory..
    printf("%d\n",*(ptr2-3)); /// subtract 3 elements , 12 bytes in memory.



///  Pointers / Passing arrays to functions


///  Pointers / Passing arrays to functions



        reset1(arr);

            printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

            reset2(arr);

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

                reset3(arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);



    /// Activity: arrays and functions

    /// Swap by pointer

    /// Activity: passing array to function to swap (External resource)



   int ARRAY[6];
    puts (" Please enter 6 array integer elements with spaces");

     int value = 0;
    for (int i = 0; i < 6; i++)
    {

        scanf("%d",&value);
        ARRAY[i] = value;

    }

  //printf("%d %d",ARRAY[0],ARRAY[5]);
  //printf("%d %d",ARRAY[1],ARRAY[4]);
  //printf("%d %d",ARRAY[2],ARRAY[4]);


    reverseArray(ARRAY);

       for (int i = 0; i < 6; i++)
    {

        printf("%d ",ARRAY[i]);

    }































        printf("Total  Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
        return 0;
        // cin.get()/// C++ all system // platform
        system("pause>nul"); /// for windows only

    }



/// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
/// command in DOS/Windows. Run the pause command in a command shell to see what it does.
/// will cause the black dos window (where you see your output) to be paused until you press any key.
/// printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n

    //getch();
   //system("cls");   //For windows

    /// system("clear"); //For Linux

/*
You can use the OS commands to clear the contents of the console.

#include<stdlib.h>
int main(){

system("cls");   //For windows
system("clear"); //For Linux

}

This is actually a quite simple problem. All you have to do is use printf. You don't even need printf or any headers, for that matter.

printf("\e[1;1H\e[2J");
The \e[1;1H sets the screen to the 1st row and 1st column. the 2J overwrites all characters currently on the screen.

You can also use this:

write(0,"\e[1;1H\e[2J",12);
Then you don't need stdio.h.


*/
/// Functions
/// Function Definitions


/// Definition of sum function
    int sum(int x, int y) /// PARAMETERS, type defines /// When a function is called, values are copied into parameters.
    {
        int compute;
        printf("Starting the computation!\n");
        compute = x+y;
        printf("Finished the computation successfully!\n");
        return compute;
    }


    void printLine(int nCols, char pattern)
    {
        int i;
        for (i = 0; i < nCols; i++)
        {
            printf("%c", pattern);
        }
        printf("\n");
    }

    void printTriangle(int nLines, char pattern)
    {
        int line, cols;
        for (line = 0; line < nLines; line++)
        {
            cols = line + 1;
            printLine(cols, pattern);
        }
    }

    void printRectangle(int nLines, int nCols, char pattern)
    {
        int i;
        for (i = 0; i < nLines; i++)
        {
            printLine(nCols, pattern);
        }
    }


    double ConvertLength (double userLengthInput)
    {
        double length;
        length = userLengthInput * 3.2808 ;
        printf("\n %.6lf ft \n", length );
        return length;
        /// 1 meter = 3.2808 feet;
    }


    double ConvertWeight (double userWeightInput)
    {
        double weight;
        weight = userWeightInput * 0.002205 ;
        printf("\n %.6lf lbs \n", weight );
        return weight;

        /// 1 gram = 0.002205 pounds;
    }
    double ConvertTempetature (double userTempInput)
    {
        double temp;
        temp = 32 + 1.8 * userTempInput ;
        printf("\n %.6lf f \n", temp );
        /// temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
        return temp;
    }


    int minimum (int Userinput, int minValue)
        {

        if ( Userinput < minValue)
            {
            minValue = Userinput ;
            }

        return minValue;

        }




    int factorial(int n)

    {
        int result;

        if(n==0)
         {
            result=1;
         }
        else
         {
            result = n * factorial(n-1);
         }

      return result;

    }


    int fibonacci(int n) {
    if (n==1) {
        return 0;
    } else if (n==2) {
        return 1;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int sumOfDigits(int Number)
{
  static int Reminder, Sum=0;

  if(Number > 0)
  {
    Reminder = Number % 10;
    Sum=Sum+ Reminder;
    sumOfDigits(Number / 10);
    return Sum;
  }
 else
   return 0;
}


int sum_of_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}

void doSomething(int h)
{
        int a = 20;

        int c = 12;
        int d = 13;
        int e = a + c;
        c = h + d;
        printf("c: %d\n",c);
        printf("e: %d\n",e);
}

int funnyadd(int j, int i)
{
      int a = 2;
      return(a*j+i);
}

void swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

void swapPointer(int * a, int * b){
    int tmp = * a;
    * a = * b;
    * b = tmp;
}

void addThree(int a){
    a = a + 3;
    printf("inside addThree, value of a: %d\n",a);
}

void addThreePointer(int * a){
    *a = *a + 3;
    printf("inside addThree, value of a: %d\n",*a);
}

void ageChange (int * age)
{

    if (*age <= 20)
    {
        *age = (*age) * 2 ;
    }

    else
    {
        *age = (*age) - 10 ;
    }

}

void reset1(int * ptr){
    *    ptr  = 0;
    *(ptr +1) = 0;
    *(ptr +2) = 0;
}

void reset2(int ptr[]){
    *(ptr + 0) = 1;
    *(ptr +1) = 2;
    *(ptr +2) = 3;
}

void reset3(int * ptr){
    *(ptr + 0) = 3;
    *(ptr +1) = 3;
    *(ptr +2) = 3;
}


void reverseArray(int * ARR)

{

swapPointer(&ARR[0],&ARR[5]);
swapPointer(&ARR[1],&ARR[4]);
swapPointer(&ARR[2],&ARR[3]);

}

