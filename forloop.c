/*author/owner == Shyed Shahriar Housaini
Lisence == MIT + terms and conditions of author/owner
Copyright: author/owner*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>


int main()
{
    printf(" \n Anything that can be done with while loop can also be done with for loop");
    float i; /// double i;    int i
    for(i = 0.0; -5 <= i ; i-- )
    {
       printf(" i = %f  \n", i);  /// or int i, print with %i or %d
       Sleep(100);                /// double i, print with %f only.
    }


    for(i = 0.0; i <= 5 ; i++ )
    {
       printf(" i = %f  \n", i);  /// or int i, print with %i or %d
       Sleep(100);                /// double i, print with %f only.
    }
        int j;

        int luckynumbers[] = {1,3,5,7,9,11};  /// Array
        printf(" luckynumbers = %i  \n", luckynumbers[0]);
        printf(" luckynumbers = %i  \n", luckynumbers[1]);
        printf(" luckynumbers = %i  \n", luckynumbers[2]);


        for(j = 0.0; j < 6 ; j++ )
        {
           printf(" luckynumbers = %i  \n", luckynumbers[j]);  /// or int j, print with %i or %d
           Sleep(100);
        }

return 0;

}
