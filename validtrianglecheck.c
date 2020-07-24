#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include "cs50.h"
#include <stdbool.h>

int x, y, z, A, B;

int valid_triangle_check( x , y , z );

int main()
{

printf (" Please enter the first arm length of triangle :  ");

scanf(" %d", &x);

printf (" Please enter the second arm length of triangle :  ");

scanf(" %d", &y);


printf (" Please enter the third arm length of triangle :  ");

scanf(" %d", &z);

//A = valid_triangle_check( x , y , z );

  if ( valid_triangle_check( x , y , z ) == true )

  {
      printf (" valid triangle\n");
  }

  else ///( valid_triangle_check( x , y , z ) == false )

  {
      printf (" Invalid triangle\n");
  }



return 0;

}


int valid_triangle_check( x , y , z )

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
