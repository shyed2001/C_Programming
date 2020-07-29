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

void swap(int firstVariable, int secondVariable);



int main(void)
{
    int tempVariable;
  int a = 100;
  int b = 200;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call function to swap values
  swap(a, b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  return 0;

}

void swap(int firstVariable, int secondVariable)
{
 int tempVariable;
  tempVariable = firstVariable;  /* temporarily save the value of the first variable */
  firstVariable = secondVariable;  /* swap the vale of the first variable with the value of the second variable */
  secondVariable = tempVariable;  /* put the value of the first variable into the second variable */

  return;
}



/**
Pass by value
C always uses 'pass by value' to pass arguments to functions (another term is 'call by value', which means the same thing), which means the code within a function cannot alter the arguments used to call the function, even if the values are changed inside the function.
Every other time you pass data to a function (besides scanf), the data outside the function is not modified - it's like a local variable inside the function - that is because C creates a copy of the data that the function uses.

An example of a 'swap' function to demonstrate the difference between pass by value and pass by reference is a simple function that swaps the values of two variables:
void swap(int fistVariable, int secondVariable)
{
  // create a temporary variable to hold one of the values to perform the swap
  int tempVariable;

  tempVariable = firstVariable;  // temporarily save the value of the first variable
  firstVariable = secondVariable;  // swap the vale of the first variable with the value of the second variable
  secondVariable = tempVariable;  // put the value of the first variable into the second variable

  return;
}

int main(void)
{
  int a = 100;
  int b = 200;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call function to swap values
  swap(a, b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  return 0;

}
If the code above is run, the values remain the same after the swap function is run. This is because, under the hood, C is passing in copies of the variables (a and b in this case), and they are modified within the function, but the originals remain unaffected.
**/

