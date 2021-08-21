/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int * ARR);
int main(void)
{

	    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    int * ptr = arr;
    * ptr = 2; // * arr   0R  arr[0]
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

    /// * ptr + 1 = 3 will not work, dereferencing and pointer arithmetic.


int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};

    printf("%p\n",array); /// address of first element
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);

int *ptr1, *ptr2;
ptr1 = array+2;  /// by adding 2 address go to the address of third element.
ptr2 = &ptr1[5]; /// go to 5th index element considering ptr1 is 0 index

    printf("%d\n",*(ptr1+1)); /// add 1 element address, 4 bytes in memory..
    printf("%d\n",*(ptr2-3)); /// subtract 3 elements , 12 bytes in memory.



        reset1(arr);

            printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

            reset2(arr);

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

                reset3(arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);



/*Within this program, we will pass an array with 6 integers to a function, have the function swap the first and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers.

The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.

Examples
Input:
1 2 3 4 5 6
Output:
6 5 4 3 2 1


Input:
9 12 3 25 11 5
Output:
5 11 25 3 12 9


Note:
You may submit as many solutions as you wish. Only your highest score will be kept.


 */
   int ARRAY[6];
    puts (" Please enter 6 array integer elements with spaces");


    for ( int i = 0; i < 6; i++)
    {
        int value = 0;
        scanf("%d",&value);
        ARRAY[i] = value;

    }

    reverseArray(ARRAY);

       for (int i = 0; i < 6; i++)
    {

        printf("%d",ARRAY[i]);


    }


  return 0;
}
void reset1(int * ptr){
    *    ptr  = 0;
    *(ptr +1) = 0;
    *(ptr +2) = 0;
}

void reset2(int ptr[]){
    *(ptr + 0) = 1;
    *(ptr +1) = 2;
    *(ptr +2) = 3;
}

void reset3(int * ptr){
    *(ptr + 0) = 3;
    *(ptr +1) = 3;
    *(ptr +2) = 3;
}



