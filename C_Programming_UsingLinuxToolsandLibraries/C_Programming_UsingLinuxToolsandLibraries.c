/*
Petra lives in the United States, where temperature is measured in Fahrenheit, whereas Rémi lives in France, where one measures in Celsius. During their weekly meetings to discuss the preparation of this course, they often wonder who currently has the nicer weather.

To help with this important discussion, complete the below C program that converts temperature from Fahrenheit to Celsius or from Celsius to Fahrenheit, depending on the user's input. The user should enter an integer, followed by a space, followed by the letter 'F' (for Fahrenheit) or the letter 'C' (for Celsius) and the program then converts this temperature to the other unit and prints it out with one decimal place (see examples below).

Your job is to complete the given program by filling in the function prototypes, the function calls, and the printf() statements at the indicated locations (lines that start with //).
Examples
Input:

45 F

Output:

7.2 C


Input:

28 C

Output:

82.4 F

This task offers 1 hint :

Hint 1 :

You can use the format specifier %.1lf to print a double with one decimal point of accuracy.

*/

#include <stdio.h>
#include <math.h>   /// Use the math library
// insert prototype for function ftoc() here
double ftoc(int x);
// insert prototype for function ctof() here
double ctof(int x);

int main(void) {
    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C' || unit=='c' ){
        // insert function call here to convert usertemp
        // from Celsius to Fahrenheit and store the result in convertedtemp
        convertedtemp=ctof(usertemp);
        // complete this line to print out the conversion result
        printf("%.1lf F", convertedtemp);
    } else if (unit=='F' || unit=='f'){
        // insert function call here to convert usertemp
        // from Fahrenheit to Celsius and store the result in convertedtemp
        convertedtemp=ftoc(usertemp);
        // complete this line to print out the conversion result
        printf("%.1lf C", convertedtemp);
    }


    /// Use the math library
    /// Use the math library


     double a = 2.5;
    double asquared = pow(a,2);
    printf("%.2lf squared = %.2lf\n",a,asquared);
    return 0;






    return 0;
}

/* Function definitions below */

/* Conversion from Celsius to Fahrenheit: */
double ctof(int x){
    return((9.0/5)*x+32);
}

/* Conversion from Fahrenheit to Celsius: */
double ftoc(int x){
    return(5.0/9*(x-32));
}



