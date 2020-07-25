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


/// This file only creates the function named int valid_triangle_check( x , y , z )


/// Have to delete the main function.

/// There should not be two main function ed linked in one file or in one project.


int valid_triangle_check( x , y , z )
/// or  bool valid_triangle_check( x , y , z ); can also be used
{

    if ( x <=0 || y <= 0 || z <= 0 )
    {
        printf(" Invalid Arm Length\n");
        //return A = 0 ;
        return false ;
    }

    else if ( x + y <z || y + z < x || z + x < y )

    {
        printf(" Invalid Triangle \n");
        //return A = 0 ;
        return false ;
    }

    else
    {
        printf(" Valid Triangle \n");
        //return A = 1 ;
        return true ;
    }

}

