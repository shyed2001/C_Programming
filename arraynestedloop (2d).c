/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
/*@Shyed Shahriar Housaini
Copyright: @uthor*/



int main(void)
{


   printf("???  Variable is a container where \0 we can store single information. \n ");

    int luckyNumbers[] = {1, 3, 5, 7, 9, 11, 13, 15}; /// 1 is the first element in this array.

     /// 5 is the third element.   /// 1 or the first element is indexed 0. Last element is indexed n-1, if there is n elements in the array.

        printf(" Variable is a container where we can store single information. \n ");

        printf(" Arrays is a data structure and a container where we can store many information. \n\n");

                printf(" Arrays holds same data types at a container where we can store many information \n at continuous  memory locations. \n\n");

                                    printf(R"(Arrays data structure allows us to read [-3] or [101] element even it has elements from [0] to [100], this is segmentation error)");
   printf("\n");

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



    char string[] = "free code camp";

    char stringarray[] = "Array"; /// This is an array of char.

printf(R"(char stringarray[] = "Array"; /// This is an array of char.)");
      printf(" %s %s \n",string , stringarray );



      bool turthtable[3];   /// To use bool type array #include <stdbool.h>
/// Declaring an empty bool type array and printing randomly printed the first argument in the {} of an if statement.

    if (turthtable[0] != true)
      {
          printf("True \n");
      }
      else printf("False\n");

      if (turthtable[1] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable[2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable[3] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable[-2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");


      bool turthtable2[3] = {true, false, true};
      /// or bool turthtable2[] = {true, false, true};  this is same as above Array
      /// bool turthtable2[3] ;
      /// turthtable2[0] = true;
      /// turthtable2[1] = false;
      /// turthtable2[2] = true;
      ///  We can use any of the above to create the same array.

       if (turthtable2[0] != true)
      {
          printf("True \n");
      }
      else printf("False\n");

      if (turthtable2[1] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable2[2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable2[3] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable2[-2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

       /// This does not work   printf("turthtable2[2] is %c%c%c%c\n", turthtable2[2] );




    /// We can treat individual elements of an array as element but we can not treat the entire array as a variable themselves.
    /// In c we can not assign one array to another array using = or any assignment operators.
    /// we have to use loop to copy individual element of an array to another array.


/// Exercise creating array with a loop.


    int k;

    for ( k = 0; k <= 9; k+=1)  /// K++ or K+=1 are same.
    {
        int battleship[10];
         battleship[k] = k;

         printf (" \n %d \n" ,battleship[k]);

       /// printf (" \n %d \n" ,k );
    }


    printf(R"(   int flats[] = {1,2,3,4,5,6,7};       )");
  printf("\n\n");

  int flats[] = {1,2,3,4,5,6,7};
      printf(R"(      int rooms[];     )");
  printf("\n\n");

    int rooms[10];

      printf(R"(  in C     falts[] = rooms[]; /// this will not work.      )");
  printf("\n\n");

        printf(R"(   We have to copy individual elements each seperately in C .    )");
  printf("\n\n");

  /// falts[] = rooms[]; /// this will not work.


   for (int m = 0; m <= 7; m++ )
   {
       rooms[m] = flats[m];
       printf(" rooms[%d] = %d \n ", m, flats[m]);

   }






/// single character, integer type
    char letter = 'A'; // 65

    // string literal, stored as read-only data
    char *name1 = "Engineer Man";

    // character array initialized from string literal, copied to and stored on the stack
    char name2[] = "Engineer Man";

    // exact same as above
    char name3[] = { 'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', ' ', 'M', 'a', 'n', '\0'};

    // pointer to char, holds up to 128 elements, stored on the stack
    char name4[128];

    // copy string literal into name4, 12 bytes + 1 for null terminator
    strcpy(name4, "Engineer Man");
    printf("%s\n", name4); // Engineer Man
    strlen(name4); // 12

    // access elements -- arr[index] => *(arr + index)
    name4[0]; // E
    *(name4 + 0); // E
    0[name4]; // E
    *(0 + name4); // E

    // modify element
    name4[8] = '-';
    *(name4 + 8) = '-';
    8[name4] = '-';
    *(8 + name4) = '-';

    name4; // Engineer-Man

    // change boundary of string
    name4[8] = '\0';
    printf("%s\n", name4); // Engineer
    strlen(name4); // 8

        printf(" Variable is a container where we can store single information. \n ");

        printf(" Arrays is a data structure and a container where we can store many information. \n\n");

                printf(" Arrays holds same data types at a container where we can store many information \n at continuous  memory locations. \n\n");


///[3][3] number of elements in 2 dimensional array.
///[3][2] number of elements in 2 dimensional array.

int nums2[3][3] =     /// This is a 3 by 3 grid or matrix or table.
  {   { 11, 12, 7},  /// 1 is indexed [0][0].

        {13 , 14, 8},

        {  1 , 16 , 9}
    }; /// 2d array with undeclared elements. This is a 3 by 3 grid or matrix or table. , in memory this is an 9 element one dimentional array only.



    printf("%d \n", nums2[0][0]);  /// 0 index number first element  of the first array indexed 0.
    printf("%d \n", nums2[0][1]);
    printf("  %d \n", nums2[0][2]);
    printf("  %d \n", nums2[1][2]);
    printf("  %d \n", nums2[0][3]);
    printf("%d \n", nums2[1][0]);
    printf("%d \n", nums2[1][1]);
    printf("%d \n", nums2[1][2]);
    printf("%d \n", nums2[2][1]);

int nums[3][2] =
    {   { 1, 2},  /// 1 is indexed [0][0].

        {3 , 4},

        {  5 , 6 }
    };
    printf("%d \n", nums[0][0]);  /// 0 index number first element  of the first array indexed 0.
    printf("%d \n", nums[0][1]);
    printf(" Bug %d \n", nums[0][2]);
    printf(" Bug %d \n", nums[0][3]);
    printf("%d \n", nums[1][0]);
    printf("%d \n", nums[1][1]);

    int nums3[4][4];  /// Declare a 2d array with 4 elements row and column.

    nums3[1][0]=10; /// Assigning a variable element in the array.


    int i,j;

    int nums5[3][3] =
  {   { 11, 12, 7},  /// 1 is indexed [0][0].

        {13 , 14, 8},

        {  15 , 16 , 9}

  };

    for (i=0; i< 3; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            printf(" %d, ", nums5[i][j]);
        }
        printf("\n");
    }

        for (i=0; i< 4; i++)
    {
            for (j = 0 ; j < 4 ; j++)
            {
                printf(" %d, ", nums3[i][j]);
            }
        printf("\n");
    }

return 0;

}
