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

int valid_key(char *s);
char plaintext[7];
int x;
int main (int argc, char* argv[])

{
    int key;

    int atoi();

///     if (argc!=2 || !valid_key(argv[1]))

    if (argc!=2 )   /// Check validity of the key.
    {
            printf(" argv[0] = %s\n", argv[0]);
            printf(" \n" );
            printf(" argv[1] = %s\n", argv[1]);
        printf("Usage: ./caesar key. Please enter an valid integer key in command line argument.\n");  /// Error message
        return 1; /// Error return
    }

    ///else if (!valid_key(argv[1]))
         else if ( x == 0 )
    ///else if (valid_key(argv[1]) != true)
    {
            printf(" argv[0] = %s\n", argv[0]);
            printf(" \n" );
            printf(" argv[1] = %s\n", argv[1]);
        puts("Usage: ./caesar key.\n");  /// Error message
        /// return 1; /// Error return
    }
    else
    {
        puts(" Valid key Integer input");
        printf("%i\n", key );

        key = atoi(argv[1]);  /// Converting command line string output to integer.
        printf(" %i\n", key );
        //string plaintext = get_string("Plaintext :  ");
        char plaintext[7];
        scanf("%s", plaintext);

        printf("Ciphertext: ");

        for (int i =0, len = strlen(plaintext); i < len; i++)

        {
            char j = plaintext[i];

            if (isalpha(j))
            {
                puts(" isalpha(j) = true\n");
                char s = 'A';
                if ( islower(j) )
                {

                    s = 'a';

                    printf(" %c", (j - s + key) % 26 + s );
                }
            }

            else
                printf(" j= %c", j);

        }

        printf(" \n" );
   }
   printf("key = %d\n", key );

    //return 0;
}


int valid_key(char *s)

{
    int len, i;

    char plaintext[7];

      for ( i =0, len = strlen(plaintext); i < len; i++)
     {
        if(!isdigit(s[i]))
        {
         x=0;
        }
        else
           x=1;
     }

     /// return true; /// Ok
     return x; /// Ok
}

