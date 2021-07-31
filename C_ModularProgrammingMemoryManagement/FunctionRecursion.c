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

int main(void)

{
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







        printf("Total  Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
        return 0;
        // cin.get()/// C++ all system // platform
        system("pause>nul"); /// for windows only

    }

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

/// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
/// command in DOS/Windows. Run the pause command in a command shell to see what it does.
/// will cause the black dos window (where you see your output) to be paused until you press any key.
/// printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n
