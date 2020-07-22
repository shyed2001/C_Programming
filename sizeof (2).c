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
int main(void)
{
    printf("The amount of storage required for each of these types varies by platform.\\n");
    printf("\n C has a built-in sizeof operator that gives the memory requirements for a particular data type.\n");

  printf("int: %ld \n", sizeof(int));
  printf("float: %ld \n", sizeof(float));
  printf("double: %ld \n", sizeof(double));
  printf("char: %ld \n", sizeof(char));

return 0;

}
