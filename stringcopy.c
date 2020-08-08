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
#include <strings.h>
**/
#include <string.h>

int main() {
   char str1[20] = "C programming";
   char str2[20];

   // copying str1 to str2
   strcpy(str2, str1);

   puts(str2); // C programming

   return 0;

   /**
   C strcpy()
In this tutorial, you will learn to use the strcpy() function in C programming to copy strings (with the help of an example).

C strcpy()
The function prototype of strcpy() is:

char* strcpy(char* destination, const char* source);
The strcpy() function copies the string pointed by source (including the null character) to the destination.
The strcpy() function also returns the copied string.
The strcpy() function is defined in the string.h header file.

Example: C strcpy()
#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "C programming";
   char str2[20];

   // copying str1 to str2
   strcpy(str2, str1);

   puts(str2); // C programming

   return 0;
}
Output

C programming
Note: When you use strcpy(), the size of the destination string should be large enough to store the copied string. Otherwise, it may result in undefined behavior.
   **/
}

