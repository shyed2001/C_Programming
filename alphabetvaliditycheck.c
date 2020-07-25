/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdbool.h>
/**#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>

#include<ctype.h>**/

bool alphabet_validity_check (char c);


int main(void)

{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);


        if (alphabet_validity_check (c) == true)

        printf("%c is an alphabet.", c);

       else
           printf("%c is not an alphabet.", c);

        return false;


        return 0;
}



bool alphabet_validity_check (char c)

{

    /**char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    **/
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

        ///printf("%c is an alphabet.", c);

        return true;
    else
        /// printf("%c is not an alphabet.", c);

        return false;


}
