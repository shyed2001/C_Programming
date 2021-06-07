//#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{

    clock_t tStart = clock();



    puts( " Search for a number in a sorted list using bisection" );

    puts( " This algorithm needs a sorted list " );


    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
    int n = 10;
    int item;
    int ia, ib, mid, found;

    printf("Which number are you looking for? ");
    scanf("%d", &item);
    ia = 0;
    ib = n-1;
    found = 0;

    while (!found && (ia <= ib))
    {
        mid = (ia + ib)/2; // middle index
        if (item == list[mid])
        {
            found = 1;  // found item!
        }
        else if (item<list[mid])
        {
            ib = mid-1; // toss the top half
        }
        else
        {
            ia = mid + 1; // toss the bottom half
        }
    }

    if (!found)
    {
        printf("Number %d was not found in the array. \n", item);
    }
    else
    {
        printf("Number %d was found at index %d in the array.\n", item, mid);
    }



    puts( " Sort an array using bubble sort" );
    puts( " Sort an array using bubble sort" );


    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int n = 10;
    int i, j;
    int swap;

    printf("Unsorted list: \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", list[i]);
    }

    for (j=0; j<n-1; j++)
    {
        for (i=0; i<n-1; i++)
        {
            if (list[i] > list[i+1])
            {
                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
        }
    }

    printf("\nSorted list: \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", list[i]);
    }


    puts( " " );


    puts( "   \n \ " );


    puts( " " );


    puts( "   \n \ " );



    puts( " " );


    puts( "   \n \ " );


    /*

    The above code can also be executed by the following code
    #include <stdio.h>

    int main()
    {
    int expense;
    scanf("%d",&expense);
    int sumOfExpenses = 0;
    while (expense != -1)
    {
       sumOfExpenses = sumOfExpenses + expense;
       scanf("%d",&expense);
    }
    printf("%d\n",sumOfExpenses);

    return 0;
    }


    */





    /*

    IF-ELSE statement shortcut in C

    C has the following syntax for a shorthand IF-ELSE statement

    (integer == 5) ? (TRUE) : (FALSE);
    I often find myself requiring only one portion (TRUE or FALSE) of the statement and use this

    (integer == 5) ? (TRUE) : (0);
    I was just wondering if there was a way to not include the ELSE portion of the statement using this shorthand notation?

    The operator ?: must return a value. If you didn't have the "else" part, what would it return when the boolean
    expression is false? A sensible default in some other languages may be null, but probably not for C. If you just
    need to do the "if" and you don't need it to return a value, then typing if is a lot easier.
    Question is whether we can somehow write the following expression without both then and else parts

    (integer == 5) ? (THENEXPR) : (ELSEEXPR);
    If you only need the then part you can use &&:

    (integer == 5) && (THENEXPR)
    If you only need the else part use ||:

    (integer == 5) || (ELSEEXPR)

       */


    printf(" \n Time taken: %.5f s\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);




    return 0;
    system("pause>null");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}
