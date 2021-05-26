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

    puts("Please enter values of expenses and end with -1 as escape character");

    while ( ExpenValue != -1)
    {

        scanf("%lf", &ExpenValue );

        ExpenSum = ExpenSum + ExpenValue;

    }

    printf("%.0lf \n", ExpenSum+1);


    puts( " Write a program to determine - How many days are needed to get Required number of (from user input) signatures. \n \
         Initially there are n signatures (from user input), Each day every one with a new signature is required to get two other \n \
         signatures in the next day " );


    int signaturesNeeded = 0;

    int day = 0;

    int newSignatures = 0;

    int totalSignatures = 0;

    puts( " Please enter the number of Required signatures " );

    scanf(" %d", &signaturesNeeded  );

    puts( " Please enter the number of Initial signatures.  " );

    scanf(" %d", &newSignatures  );

    totalSignatures =  newSignatures ;

    while (totalSignatures < signaturesNeeded)
    {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }



    puts( " Activity: controlling an epidemic " );

    puts( " Activity: controlling an epidemic (External resource) " );



    puts(" In order to be able to better fight various epidemics in a region, the department of medicine of a major university \n \
          has launched a large study. Researchers are interested in how fast an epidemic spreads, and therefore the speed at which  \n \
           health measures must be put in place. Your program should first read an integer representing the total population of the area. \n \
            Knowing that a person was infected on day 1 and that each infected person contaminates two new people every day, \n \
            you must calculate the day at which the entire population of the area will be infected.    \n \
            Examples : For a total population of 3 inhabitants, on day 1 a single person is infected. The next day, \n \
            that person contaminates 2 new people so there are 3 infected people in total. This is the entire population, \n \
            so it takes 2 days to contaminate the entire population. \n \
            Input: 3 Output: 2 \n \
            For a total population of 10 inhabitants, on day 1 a single person is infected. \n \
             This is followed by 2 new people on the second day for a total of 3 infected people. \n \
             On the third day,  6 new people are infected for a total of 9 infected people. \n \
             On the fourth day the last of the 10 people is infected (though the epedemic had the potential to \n \
            infect 18 people on the fourth day) so your program should output '4'.   Input: 10 Output: 4   \n \  " );

   int CityPopulation = 0;

    int Day = 1;  /// initial contamination.

    int newInfections = 1;

    int totalInfections = 1;

    scanf(" %d", &CityPopulation  );

    // totalInfections =  newInfections ;

    while (totalInfections < CityPopulation )

    {

        newInfections = 2*totalInfections ;
        /// Be careful that each day, all infected people contaminate two more people, not only the newly infected ones.

        totalInfections = totalInfections + newInfections;
    /// Each day, all infected people contaminate two other ones, not only the newly infected ones.
        Day++;

    }


        printf("%d", Day);












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
