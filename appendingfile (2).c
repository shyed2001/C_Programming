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
      FILE *filepointer = fopen("executives.txt", "a"); /// "a" append or write or add at the end of the file
        fprintf(filepointer, "\n Appending line 1");
        fprintf(filepointer, "\n Appending line 2");

            fclose(filepointer);  /// Must close the file while writing, reading or appending.

return 0;

}
