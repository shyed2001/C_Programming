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

    puts( " Activity: find repeat letters in a word " );


    puts( "  Activity: sorting and searching repetitive letters (External resource) \n \ " );

    puts( " You are still conducting linguistic research! This time, \n \
          you'd like to write a program to find out how many letters occur multiple times in a given word. \n \
          Your program should read a word from the input and then sort the letters of the word alphabetically  \n \
          (by their ASCII codes). Next, your program should iterate through the letters of the word and \n \
          compare each letter with the one following it. If these equal each other, you increase a counter by 1,  \n \
          making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. \n \
          You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.  \n \
          \n \
          Examples Input: apple, Output: 1 \n \
          Input: keeper, Output: 1 \n \
          Input: erroneousnesses Output: 5 \n \
          Input: taylor ,  Output: 0 \n \
          \n \ \n \ " );

    char SortWordChar[51];
    char LetterSortWordChar[51];
    int CharCount = 0 ;
    int RepeatCharCount = 0 ;

    int i, j, k ;
    i = j = k = 0;
    puts( " Please enter a word with repeating Letters in lowercase within 50 characters " );

    scanf("%s", SortWordChar);

    while ( SortWordChar[i] != '\0' && CharCount < 51)
    {
        printf(" \n CharCount = %d \n  ", CharCount);
        printf(" \n i = %d \n  ", i);

        LetterSortWordChar[i] = SortWordChar[i] ;

        printf(" SortWordChar[i] = %c \n", SortWordChar[i] );
        printf(" SortWordChar = %s \n", SortWordChar);
        printf(" LetterSortWordChar[i] =  %c   ", LetterSortWordChar[i] );
        printf(" \n LetterSortWordChar = %s \n  ", LetterSortWordChar);
        printf(" ASCII of SortWordChar[i] as decimal =  %d   ", SortWordChar[i] );
        printf(" \n ASCII of SortWordChar as decimal = %d \n  ", SortWordChar);
        printf(" ASCII of LetterSortWordChar[i] as decimal =  %d   ", LetterSortWordChar[i] );
        printf(" \n ASCII of LetterSortWordChar as decimal = %d \n  ", LetterSortWordChar);

        i++; /// Word Char index
        CharCount++ ;  /// Word char Counter
    }

    printf(" \n CharCount = %d \n  ", CharCount);

    printf(" \n i = %d \n  ", i);

    printf(" \n CharCount = %d \n  ", CharCount);
    printf(" \n i = %d \n  ", i);

    LetterSortWordChar[i] = SortWordChar[i] ;

    printf(" SortWordChar[i] = %c \n", SortWordChar[i] );
    printf(" SortWordChar = %s \n", SortWordChar);
    printf(" LetterSortWordChar[i] =  %c   ", LetterSortWordChar[i] );
    printf(" \n LetterSortWordChar = %s \n  ", LetterSortWordChar);

    printf(" ASCII of SortWordChar[i] as decimal =  %d   ", SortWordChar[i] );
    printf(" \n ASCII of SortWordChar as decimal = %d \n  ", SortWordChar);
    printf(" ASCII of LetterSortWordChar[i] as decimal =  %d   ", LetterSortWordChar[i] );
    printf(" \n ASCII of LetterSortWordChar as decimal = %d \n  ", LetterSortWordChar);

    char swap;
    for (j=0; j<CharCount-1; j++)
    {
        for (i=0; i<CharCount-1; i++)
        {
            if (SortWordChar[i] > SortWordChar[i+1])
            {
                swap = SortWordChar[i];
                SortWordChar[i] = SortWordChar[i+1];
                SortWordChar[i+1] = swap;
            }
        }
    }

    printf("\nSorted LIST: \n");
    for (i=0; i<CharCount; i++)
    {
       /// printf("%d ", SortWordChar[i]);
        printf("%c ", SortWordChar[i]);
    }











    SortWordChar[51];
    LetterSortWordChar[51];
    CharCount = 0 ;
    RepeatCharCount = 0 ;
    int count = 0;
    int Totalcount =0;


    i = j = k = 0;
    /// puts( " Please enter a word with repeating Letters in lowercase within 50 characters " );

    scanf("%s", SortWordChar);

    while ( SortWordChar[i] != '\0' && CharCount < 51)
    {
        LetterSortWordChar[i] = SortWordChar[i] ;
        i++; /// Word Char index
        CharCount++ ;  /// Word char Counter
    }

    //Counts each character present in the string
    for(int i = 0; i < CharCount; i++) {
        count = 1;
        for(int j = i+1; j < CharCount; j++) {
            if(SortWordChar[i] == SortWordChar[j] && SortWordChar[i] != ' ')

            {
                count++;
                //Set string[j] to 0 to avoid printing visited character
                SortWordChar[j] = '0';
            }
        }
        //A character is considered as duplicate if count is greater than 1
        if(count > 1 && SortWordChar[i] != '0')
        {
           ///  printf("%c\n", SortWordChar[i]);
            Totalcount++;

        }
    }
  /// printf("Totalcount = %d ", Totalcount);
   printf("%d", Totalcount);


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
