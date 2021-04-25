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
    int i, x,y,z;
        x=0;
        y=1;
    for(i=0; i==x ; i++)  /// give no range for infinite loop
        ///i==x  /// while(1){} can also be used for infinite loop
    {
        ///x=0;
        ///y=1;
        do
        {
            printf("FBN = %d\n", x);
            Sleep(277);
            printf("i=%d\n", i);
            Sleep(277);
            printf("x = %d\n", x);
            Sleep(277);
            printf("y = %d\n", y);
            Sleep(277);
            printf("z = %d\n",z);
            Sleep(277);
            z=x+y;
            x=y;
            y=z;
            /// break;
        } while(x<255);
        printf("\n Out of do while. \n");
    }   Sleep(777);
printf("\n Out of while. \n");

return 0;

}
