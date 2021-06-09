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



    puts( " Sort strings alphabetically " );

    puts( " Organize reorganize rearrange Sort strings words alphabetically " );


    char word1[50];
    char word2[50];
    int i = 0;

    printf("Please enter a word: ");
    scanf("%s", word1);
    printf("And another: ");
    scanf("%s", word2);
    // Find first letter in which words differ
    while (word1[i]!='\0' && word2[i]!= '\0' && word1[i] == word2[i])
        i++;
    if (word1[i] < word2[i])  /// Words are stored as ASCII code numbers. In ASCII Uppercase letters comes first.
        printf("%s comes before %s in the alphabet.\n", word1, word2);
    else if (word1[i]>word2[i])
        printf("%s comes after %s in the alphabet.\n", word1, word2);
    else printf("You entered the same word, %s, twice.\n", word1);

    /// In ASCII table \0 NULL character has the value of Zero 0.



    puts( " Search for a number in an array using linear search " );

    puts( " Strings, sort and search algorithms / Sorting strings" );
    puts( "Search for a number in an array using linear search " );


    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};  /// Array or a list of numbers
    int n = 10; /// Number of member of that array.
    int item, found;

    printf("Which number are you looking for? ");
    scanf("%d", &item);
    found = 0;
    i = 0;
    while (!found && i<n) /// !found == 0 ; which is true.
    {
        if (item == list[i])
        {
            found = 1;
        }
        else
        {
            i++;
        }
    }

    if (!found)
    {
        printf("%d is not a member of this list. \n", item);
    }
    else
    {
        printf("I found %d at index %d in the list. \n", item, i);
    }






    puts( " Activity: is there a 't' in this word? " );

    puts( " Activity: searching for letter in word (External resource)" );




    puts( " You are conducting a linguistic study and are interested in \n \
          finding words that contain the letter 't' or 'T' in the first half \n \
         of the word (including the middle letter if there is one). Specifically, \n \
         if the first half of the word does contain a 't' or a 'T', your program should output a 1. \n \
            If the first half does not contain the letter 't' or 'T', but the second half does, \n \
          then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, \n \
          your program's output should be -1. You may assume that the word entered does not have more than 50 letters. \n \
          Examples Input: apple Output: -1 , Input: raincoat , Output: 2, Input: enter , Output: 1 , Input: Taylor, Output: 1  " );

    puts( " This task offers 1 hint : Hint 1 : Travel through the word, keeping track of whether or not \n \
         you have passed the halfway point, and compare the current letter to the desired one ('T' or 't'). \n \
         Use the results of this search to produce the required output. " );

    /*

    #include <stdio.h>
int main(void)
{
	char word[51];
	int length = 0;
	int i,found, maxindex;

	scanf("%s", word);

	while (word[length]!='\0')
	    length++;
	if (length%2==0)
	    maxindex = length/2-1;
	else
	    maxindex = length/2;

	i = 0;
	found = 0;
	while (!found && i < length) {
		if (word[i]=='t' || word[i]=='T') found++;
		else i++;
	}

	if (!found)
	    printf("-1");
	else if (i <= maxindex) printf("1");
	else printf("2");

	return 0;
}

    */


    puts( " \n \ " );


    i = 0 ;
    char TwordName[51]; /// Initialize the word for 50 chars, with one extra for NULL place terminator.
    int TName = 0; /// Initialize the word length
    printf("Please enter a word: ");

    scanf("%s", TwordName);



    while (TwordName[TName]!='\0')
        TName++;


    printf("%s has word length %d.\n", TwordName,TName);


    found = 0;

    while (!found && i < TName )
    {
        if ( TName % 2 == 0)
        {
            for (int i = 0 ; i < (TName/2) ; i++)
            {
                if (TwordName[i]== 'T' || TwordName[i]=='t')
                {
                    puts( "1" );
                    found = 1;
                }

            }

            for (i = (TName/2) ; i < TName; i++)
            {
                if (TwordName[i]=='T' || TwordName[i]=='t')
                {
                    puts( "2" );
                    found = 1;
                }

            }

        }


        else /// if ( TName % 2 == 1)
        {

            for (i = 0 ; i < ((TName/2)+1); i++)
            {
                if (TwordName[i]=='T' || TwordName[i]=='t')
                {
                    puts( "1" );
                    found = 1;
                }

            }

            for (i = ((TName/2)+1) ; i < TName; i++)
            {
                if (TwordName[i]=='T' || TwordName[i]=='t')
                {
                    puts( "2" );
                    found = 1;
                }

            }

        }

    }


    if (!found)
    {
        puts( "-1" );
    }




          puts( " " );

          puts( " " );

              puts( " Search for a number in a sorted list using bisection" );

    puts( " This algorithm needs a sorted list " );


    int List[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted List */
    n = 10;
    int Item;
    int ia, ib, mid, Found;

    printf("Which number are you looking for? ");
    scanf("%d", &Item);
    ia = 0;
    ib = n-1;
    Found = 0;

    while (!Found && (ia <= ib))
    {
        mid = (ia + ib)/2; // middle index
        if (Item == List[mid])
        {
            Found = 1;  // Found Item!
        }
        else if (Item<List[mid])
        {
            ib = mid-1; // toss the top half
        }
        else
        {
            ia = mid + 1; // toss the bottom half
        }
    }

    if (!Found)
    {
        printf("Number %d was not Found in the array. \n", Item);
    }
    else
    {
        printf("Number %d was Found at index %d in the array.\n", Item, mid);
    }



    puts( " Sort an array using bubble sort" );
    puts( " Sort an array using bubble sort" );


    int LIST[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted LIST */
    n = 10;
    int  j;
    int swap;

    printf("Unsorted LIST: \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", LIST[i]);
    }

    for (j=0; j<n-1; j++)
    {
        for (i=0; i<n-1; i++)
        {
            if (LIST[i] > LIST[i+1])
            {
                swap = LIST[i];
                LIST[i] = LIST[i+1];
                LIST[i+1] = swap;
            }
        }
    }

    printf("\nSorted LIST: \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", LIST[i]);
    }


    puts( " " );

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
