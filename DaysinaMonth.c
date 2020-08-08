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
#include<ctype.h>
#include <string.h>
#include <strings.h>

int main(void)

{


printf (" ");

return 0;

}


/**

https://www.geeksforgeeks.org/c-program-to-print-number-of-days-in-a-month/?ref=rp

C program to print number of days in a month
28-07-2020
Given a number N, the task is to find the number of days corresponding to each month where 1 is January, 2 is February, 3 is March, and so on.

Examples:

Input: N = 12
Output: 31 Days

Input: N = 2
Output: 28/29 Days

Method – 1: using If Else:




Get the input month as a number N.
If N is one of these value 1, 3, 5, 7, 8, 10, 12, then print “31 Days.”.
If N is one of these value 4, 6, 9, 11, then print “30 Days.”.
If N is 2, then print “28/29 Days.”.
Else print “Invalid Month”.
Below is the implementation of the above approach:

filter_none
edit
play_arrow

brightness_4
// C program for the above approach
#include <stdio.h>

// Function to find the number of Days
// in month input by user
void printNumberOfDays(int N)
{

    // Check for 31 Days
    if (N == 1 || N == 3 || N == 5
        || N == 7 || N == 8 || N == 10
        || N == 12) {
        printf("31 Days.");
    }

    // Check for 30 Days
    else if (N == 4 || N == 6
             || N == 9 || N == 11) {
        printf("30 Days.");
    }

    // Check for 28/29 Days
    else if (N == 2) {
        printf("28/29 Days.");
    }

    // Else Invalid Input
    else {
        printf("Invalid Month.");
    }
}

// Driver Code
int main()
{
    // Input Month
    int N = 4;

    // Function Call
    printNumberOfDays(N);

    return 0;
}
Output:
30 Days.
Time Complexity: O(1)
Auxiliary Space: O(1)

Method – 2: using Switch Statements:

Get the input month as a number N.
Using switch statement when value of N is one of 1, 3, 5, 7, 8, 10, 12, then print “31 Days.” corresponding to switch case.
If N is one of these value 4, 6, 9, 11, then print “30 Days.” corresponding to switch case.
If N is 2, then print “28/29 Days.” corresponding to switch case.
Else the default condition for the switch case will print “Invalid Month”.
Below is the implementation of the above approach:

filter_none
edit
play_arrow

brightness_4
// C program for the above approach
#include <stdio.h>

// Function to find the number of Days
// in month input by user usingwwww
// switch statement
void printNumberOfDays(int N)
{

    switch (N) {
    // Cases for 31 Days
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days.");
        break;

    // Cases for 30 Days
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days.");
        break;

    // Case for 28/29 Days
    case 2:
        printf("28/29 Days.");
        break;

    default:
        printf("Invalid Month.");
        break;
    }
}

// Driver Code
int main()
{
    // Input Month
    int N = 4;

    // Function Call
    printNumberOfDays(N);

    return 0;
}
Output:
30 Days.
Time Complexity: O(1)
Auxiliary Space: O(1)

Method – 3: using Arrays:




Store the value of days corresponding to each month in an array as:
arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }

Print the corresponding day to each month from the above array.
Below is the implementation of the above approach:

filter_none
edit
play_arrow

brightness_4
// C program to find the number of days
// in a month using arrays
#include <stdio.h>

// Driver Code
int main()
{
    // Store the day in array arr[]
    int arr[12] = { 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31 };

    // Input Month
    int N = 4;

    // Print the number of days in
    // month 4
    printf("%d Days.", arr[N - 1]);

    return 0;
}
Output:
30 Days.
Time Complexity: O(1)
Auxiliary Space: O(1)

Method – 4: using Pointers:

Store the value of days corresponding to each month in an array as:
arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }

Print the corresponding day to each month from the above array using pointers as:
printf(“%d Days.”, *(arr + (*N – 1)))

Below is the implementation of the above approach:

filter_none
edit
play_arrow

brightness_4
// C program to find the number of days
// in a month using pointers
#include <stdio.h>

// Function to print number of Days
void printNumberOfDays(int* arr, int* N)
{
    // Print the number of days for Nth
    // month using *(arr+(*N - 1))
    printf("%d Days.", *(arr + (*N - 1)));
}

// Driver Code
int main()
{
    // Store the day in array arr[]
    int arr[12] = { 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31 };

    // Input Month
    int N = 4;

    // Print the number of days in
    // month 4
    printNumberOfDays(arr, &N);

    return 0;
}
Output:
30 Days.
Time Complexity: O(1)
Auxiliary Space: O(1)


**/
