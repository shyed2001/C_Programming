#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf(" %i \n", 888888888);
    printf(" %d \n", 000000000);
    printf(" %f\n", 1111.000);
    ///printf(" %l\n", 1111.000); // This line of code does not show any output but shows empty spaces.
    ///printf(" %l\n", 1111000); // This line of code does not show any output but shows empty spaces.
    printf(" %i \n", 000000);
    printf(" %f \n", 8.9);
    printf(" %f \n", 0.9);
    printf(" %f \n", 000.000);
    printf(" %f \n", 88888888888888888888888.000000000000009); // will print incorrect value.
    printf(" %f \n", 8.9-12);
     printf(" %f \n", 120.0 / 12);
     printf(" %f \n", 9 * 12.0);
     printf(" %f \n", 9.0 * 12); // Either or both number have to be float.
     printf(" %f \n", 8.9 + 12);
     printf(" %i \n", 8 + 12);
     printf(" %d \n", 8 + 12);
     printf(" %d \n", 80/7); /// this does not show the decimal value after the .

     ///Always try to do math with floats.
    /// printf(" %d \n", 8.5 + 12); // This is incorrect code, will output 0 in result

    int num = 7;
    float num777 = 777.777;

    printf(" %d \n", num);
    printf(" %i \n", num);
    printf(" %f \n", num777);

    double dnum = 7777;
    printf(" %d \n", dnum);  /// Gives wrong answer.
    printf(" %f \n", dnum);
    printf(" %i \n", dnum);  /// Gives wrong answer.


    printf("%f \n", pow (2,3));


        return 0;
}


