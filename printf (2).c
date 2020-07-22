#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{int favnum = 348888888; // should not go over one billion
 int favdoubleint = 333;
 char mychar='d';
     // % is a format specifier
  printf("%d\n", 500);
  printf("%i\n", 500);
  printf(" My favorite number is %d\n", 500);
  printf(" My favorite number is %i\n", 500);
  printf(" My favorite number is %f\n", 500.555);
  printf(" My favorite %s is %d\n","number", 500);
  printf(" My favorite number is %f\n", 00.07); // multiple format specifier.
  printf(" My favorite %s are %d and %f and %i \n","numbers", 500, 7.7, 5);
  printf(" My favorite %s are %d and %f and %i \n","numbers", favdoubleint, 7.7, favnum);
  printf(" My favorite %s are %d and %f and %i \n","numbers", favdoubleint, 7.7, favnum); // multiple format specifier.
  printf(" My favorite %s are %d \n","numbers", favdoubleint);
  printf(" The Char is %c\n ", mychar);
        return 0;
}

