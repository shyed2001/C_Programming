#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int age = 40; // integer.
    long year = 2019; // Long integer.

    float price = 56.09; // Decimal Number , floating point value.
    double gpa = 33333333.55555555; // Bigger Float.

    char grade = 'A'; // can only store one single character.
    printf("%i\n", age);
    printf("%d\n", age);
    printf("%i\n", year);
    // %i and &d both used for integer placeholders.
    printf("%d\n", year);

    printf("%f\n", price);
    printf("%f\n", gpa);

    // %l, %d, %i not acceptable for double or float data type gpa or price  .

}
