/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
/// #include <threads.h>
///#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include<ctype.h>
//#include <cstdlib>
//#include <iostream>
//#include <cmath>
//#include <string>
//#include <iomanip>
/// #define RUNS 1000000UL
#define RUNS 1000UL
int main(void)


{
    clock_t tStart = clock();










    printf( "   \n  \    \      \      \      \      \       \      \      \      \      \      " );


    puts( "    \       \      \      \      \      \      " );


    printf( "    \       \      \      \      \      \      " );

    return 0;
    system("pause>null");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.


    printf("Total Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

}
