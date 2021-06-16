/**
 * C program to print Fibonacci series up to n terms
 */

#include <stdio.h>
#include <time.h>

int main()
{
    clock_t tStart = clock();
    int a, b, c, i, terms;

    /* Input number from user */
    /*     printf("Enter number of terms: ");
        scanf("%d", &terms); */
    terms = 777 ;
    /* Fibonacci magic initialization */
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    /* Iterate through n terms */
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term
    }
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
