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
**/


void swap(int *pFirstVariable, int *pSecondVariable)
{
  int temp;

// using dereferenced pointers means the function is working with the values at the addresses that are passed in
  temp = *pFirstVariable;
  *pFirstVariable = *pSecondVariable;
  *pSecondVariable = temp;

  return;
}

int main(void)
{
  int a = 100;
  int b = 200;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call the function to swap values, using the 'address of' operator to pass in the address of each variable
  swap(&a, &b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  return 0;

}


/**

Pass by reference
Even though C always uses 'pass by value', it is possible simulate passing by reference by using dereferenced pointers as arguments in the function definition, and passing in the 'address of' operator & on the variables when calling the function.
What is passed in is a copy of the pointer, but what it points to is still the same address in memory as the original pointer, so this allows the function to change the value outside the function.
The arguments passed in and worked with inside the function are dereferenced pointers, which, from the programmer's perspective, is essentially the same thing as working with the values themselves.

Using the same structure as the swap function above, using pointers, the values outside the function will be swapped:
void swap(int *pFirstVariable, int *pSecondVariable)
{
  int temp;

// using dereferenced pointers means the function is working with the values at the addresses that are passed in
  temp = *pFirstVariable;
  *pFirstVariable = *pSecondVariable;
  *pSecondVariable = temp;

  return;
}

int main(void)
{
  int a = 100;
  int b = 200;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call the function to swap values, using the 'address of' operator to pass in the address of each variable
  swap(&a, &b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  return 0;

}

If the example above is run, the values will be swapped (outside the function) after swap() has been called.

Returning pointers from a function
Returning a pointer from a function is a particularly powerful. It allows you to return not just a single value, but a whole set of values (e.g. structures, covered later). There is a special syntax for declaring a function that returns a pointer:
int * myFunction()
{
  //your code
}
There are specific hazards relating to returning a pointer, so there are some best practices to follow.

use local variables to avoid interfering with the variable that the argument points to
Recap
use dereferenced pointers in the function definition:
void swap(int *pFirstVariable, int *pSecondVariable);

and use the 'address of' & operator and the variable name when invoking the function if you wish the changed values to be available outside of the function:
swap(&a, &b);

to return a pointer from a function, use an asterisk in front of the function name, and use with care.

**/
