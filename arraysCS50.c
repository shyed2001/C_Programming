/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int luckyNumbers[] = {1, 3, 5, 7, 9, 11, 13, 15}; /// 1 is the first element in this array.

     /// 5 is the third element.

        printf(" Variable is a container where we can store single information. \n ");

        printf(" Arrays is a data structure and a container where we can store many information. \n\n");

        printf(" %d \n \n", luckyNumbers [3] ); /// 3 is the index position of 7 in this array.

        printf(" %d \n \n", luckyNumbers[0] );  /// 0 is the index position of 1 in this array.

        printf(" %d \n \n", luckyNumbers[1] ); /// 1 is the index position of 3 in this array.

       luckyNumbers[1] = 100; /// 1 is the index position of 3 in this array that is changed to 100.

       printf(" %d \n \n", luckyNumbers[1] );


    int luckynumbers2[11];  /// Declaring an empty array. This array can only hold 11 elements / items.

          luckynumbers2 [0] = 99;  /// Giving index 0 element a value of 99.
          luckynumbers2 [1] = 55;  /// Giving index 1 element a value of 55.

            printf(" %d \n %d \n",luckynumbers2[0] , luckynumbers2[1] );

            printf(" %d \n %d \n",luckynumbers2[10] , luckynumbers2[11] ); ///

            printf(" %d \n %d \n",luckynumbers2[2] , luckynumbers2[12] );



    char string[] = " free code camp";

    char stringarray[] = " Array"; /// This is an array of char.


      printf(" %s %s \n",string , stringarray );


