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
    int index = 6;


         do {
            printf("\n index= %d \n", index);
            Sleep(1000);
            index = index+1;
          }  /// First executes the code in the do {} then checks the condition in while argument.
          while( index <=5);  /// Until this is false.

   int index2 = 0;

          do {
            printf("\n index2 =%d \n", index2);

            Sleep(1000);  /// Sleep(1000) --> 1000 milliseconds = 1 second.

            index2++;
          } /// First executes the code in the do {} then checks the condition in while argument.
          while( index2 <=5);

          Sleep(3000); /// Sleep(3000) --> 3000 milliseconds = 3 seconds.


return 0;

}

