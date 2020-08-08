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

int main(void)

{





printf (" ");

return 0;

}


/**

https://www.geeksforgeeks.org/cc-program-shutdown-system/?ref=rp

C/C++ program to shutdown a system
23-12-2016
How to shutdown your computer in Linux and/or Windows?

The idea is to use system() in C. This function is used to invoke operating system commands from C program.

Linux OS:

filter_none
edit
play_arrow

brightness_4
// C program to shutdown in Linux
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Running Linux OS command using system
   system("shutdown -P now");

   return 0;
}

Windows OS:

Shutdown/ Log off/ Restart a Windows OS




We will make use of system() from < stdlib.h > to perform a system operation with the help of a C program.To perform any of the afore-mentioned system operation we will code as:

filter_none
edit
play_arrow

brightness_4
#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("c:\\windows\\system32\\shutdown /i");
  return 0;
}
The argument to the system function is the path to OS and /i is one of the entity from the vast options available to us.To view the options, we run cmd and type:

C:\Users\User>shutdown
The shutdown command presents us with a list of options available for us.These are :

To perform different operations, we just replace the last “/path” in system() argument.The common operations are:

Shutdown

system("c:\\windows\\system32\\shutdown /s");
Restart

system("c:\\windows\\system32\\shutdown /r");
Logoff

system("c:\\windows\\system32\\shutdown /l");
This article is contributed by Sahil Chhabra and Amartya Ranjan Saikia. If you like GeeksforGeeks and would like to contribute, you can also write an article using contribute.geeksforgeeks.org or mail your article to contribute@geeksforgeeks.org. See your article appearing on the GeeksforGeeks main page and help other Geeks.

Please write comments if you find anything incorrect, or you want to share more information about the topic discussed above.




**/
