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
    int index = 1;

    while( index <=5) /// First checks the condition in (), Executes the code in {} until this is/becomes false.
          {
            printf("\n index= %d \n", index);
            Sleep(1000);
            index +=1;  /// index++; = (index=1+index); index = (index +=1)
          }

   int index2 = 0;
    while( index2 <=5)
          {
            printf("\n index2 =%d \n", index2);

            Sleep(1000);  /// Sleep(1000) --> 1000 milliseconds = 1 second.

            index2++;
          }
          Sleep(3000); /// Sleep(3000) --> 3000 milliseconds = 3 seconds.
return 0;

}
