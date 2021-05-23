//#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include <stdbool.h>
int main(void)
{

    clock_t tStart = clock();


    puts ("  While-loops are perfect for when you want to execute an undetermined number of iterations. ");

    puts ("  Activity: compute budget using a while loop (External resource) ");

    puts ("  Much of the work of a university administration (in addition to managing \n \
           teachers, researchers, students, courses, etc.) is to ensure the proper \n \
          functioning of the university and in particular that the accounting job is well done. \n \
           Once a year, an annual report of expenditures must be made. \n \
           All expenses for the year have been recorded and classified in a multitude of \n \
           files and the sum of all these expenses must now be calculated. \n \
           But no one knows exactly how many different expenses have been made in the past year! \n \
           Your program will have to read a sequence of positive integers and display their sum. \n \
            We do not know how many integers there will be, but the sequence always ends with the value -1 \n \
            (which is not an expense, just an end marker). Example 1 Input 1000 2000 500 -1 Output 3500 \n \
           Example 2 Input -1  Output 0 Example 3 Input 150 250 350 4500 240 120 -1 Output 5610");



    double ExpenValue = 0 ;

    double ExpenSum = 0 ;

     while ( ExpenValue != -1)
     {
         puts("Please enter values of expenses and end with -1 as escape character");
         scanf("%lf", &ExpenValue );

         ExpenSum = ExpenSum + ExpenValue;

     }

     printf("%.0lf", ExpenSum+1);


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
