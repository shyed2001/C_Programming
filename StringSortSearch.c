#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define maxCount 500

int main(void)
{

    clock_t tStart = clock();


    puts( " " );

    puts( " " );

    puts( " " );


    //! showArray(word, cursors[i])

    char word[51]; //arrray of characters (string)

    printf("Please enter a word within 50 letters/characters Maximum : ");

    scanf("%s", word);

    printf("The word read is: %s.\n", word);

    printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);

    word[1] = 'a';

    printf("The new word is %s\n", word);




    puts( " Write a C-program that prints out a word as many times as specified. \n \
               The number of repetitions and the word should be given as input to the program. \n \
               You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!). " );

    puts( " Examples Input: \n \
                    2 Hello \n \
                    Output: \n \
                    Hello \n \
                    Hello \n \ " );

    puts( " Input: 4 thing \n \
                    Output: \n \
                    thing \n \
                    thing \n \
                    thing \n \
                    thing  \n \ " );

    puts( " This task offers 1 hint : Hint 1 : Use a for loop to repeat printing the scanned word as many times as necessary. " );



        int numberRepeat = 0 ;

        char TheWord[101];

         puts("Please first enter an integer as repetition number and enter a word within 100 letters/characters Maximum : ");

         scanf("%d", &numberRepeat);

         scanf("%s", TheWord);

         printf("The word read is: %s.\n", TheWord);

         for (int i = 0 ; i < numberRepeat ; i++ )
         {
            printf("%s\n", TheWord);
         }




    puts( " can we store a sentence??? " );
    puts( " can we store a sentence??? " );

    puts( " With %s format specifier, scanf will stop at first blank characters, so you can't read and store a sentence (with spaces) with it. \n \
     There are several ways to do it though, but they are not introduced in this course. \n \
     One solution is to use fgets function instead of scanf. " );

    puts( " Please enter a sentence with within 500 letters/characters Maximum : " );



char sen[maxCount];

fgets(sen, maxCount, stdin);

scanf("%[^\n]%*c", sen);

printf("%s",sen);





        puts( " " );

    puts( " " );

    puts( " Please input two word of less than 6 letters/characters" );

    char word1[7];
    char word2[8];
    scanf("%s%s", word1, word2);

    printf(" You entered %s %s\n", word1, word2);




        puts( " " );

    puts( " " );

    puts( " Replacing word1[3] = '\\0';  word2[2] = '\\0';" );


    puts( " Please input two word of less than 6 letters/characters" );

    word1[7];
    word2[7];
    scanf("%s%s", word1, word2);

    printf(" You entered %s %s\n", word1, word2);

    puts( " Replacing word1[3] = '\0';  word2[2] = '\0';" );
    word1[3] = '\0';
    word2[2] = '\0';
    printf(" You entered %s %s\n", word1, word2);







            puts( "  Your local public library keeps a record of all of its patrons, \n \
                 consisting of index cards that hold a person\'s last name followed by their first name \n \
                  (so that the cards can easily be sorted alphabetically by last name). \n \
                  Unfortunately a computer error led to incorrectly printed forms last month,\n \
                  resulting in a number of cards that list the patron's first name followed by their \n \
                  last name rather than the other way around. Your job is to read these pairs of first and \n \
                  last names and display them in the correct order (last name followed by first name).  \n \
                 You may assume that each first and last name has at most 100 characters and does not contain any spaces. \n \
                 Your program should first read the total number of names (an integer) in order to know how many index cards need to be processed altogether. \n \
                 Next,  for each index card, your program should read a patron\'s first name and last name and then display these names correctly, \n \
                 that is on one line, the last name followed by one space, followed by the first name.  \n \
                  Your program should print the reversed name immediately after reading the patron\'s names \n \
                  (ie, it should not wait until it has read all of the index cards to begin printing). \n \
                 Note that, for ease of viewing, the example below shows all of the inputs in one block and all \n \
                 of the outputs in another block, despite the fact that programmatically these will be interspersed. \n \
                  \n \
                 Example ,  Input: 4 Alan Turing  Ada Lovelace  Donald Knuth  Claude Shannon \n \
                 Output: Turing Alan Lovelace Ada Knuth Donald Shannon Claude    \n \ " );



                 int NumOfContributorNames = 0;

                 char FirstContributorName[101];
                 char LastContributorName[101];

     puts( " PLease enter an integer , for number of names to be entererd " );

     scannf ( "%d", &NumOfContributorNames);


     for ( i = 0; i < NumOfContributorNames; i++ )

     {
         puts( " Please enter a name " );

         scannf ( "%s %s", FirstContributorName, LastContributorName );

         printf("%s %s",LastContributorName, FirstContributorName);

     }





    puts( " " );

            puts( " " );

    puts( " " );








    printf(" \n Time taken: %.5f s\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);




    return 0;
    system("pause>null");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}


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
