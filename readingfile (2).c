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
    char line[255];

    FILE *filepointer = fopen("executives.txt", "r"); /// "r" read or see at the file

     fgets(line, 255, filepointer);
        fgets(line, 255, filepointer);
        fgets(line, 255, filepointer);
        fgets(line, 255, filepointer);
     printf(" %s ", line);


      fclose(filepointer);  /// Must close the file while writing, reading or appending.
return 0;

}
