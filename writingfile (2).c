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
int main(void)
{

    FILE * filepointer = fopen("executives.txt", "w");  /// Create the file and write on it.

    fprintf(filepointer, " Writing"); ///  write on it.

    /// "a"  For appending lines at the bottom of file.

   /// FILE * filepointer = fopen("executives.txt", "a");

    fprintf(filepointer, " \n Writing");

    fclose(filepointer);


return 0;

}
