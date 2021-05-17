/*@Shyed Shahriar Housaini
Copyright: @uthor*/
/// Read comments below.
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

#ifdef _WIN32
    system("dir");
#else
    system("ls");
#endif

return 0;

}


/**

Writing OS Independent Code in C/C++
Last Updated: 29-05-2017
How to write a utility program that lists all contents of directory irrespective of Operating System.

Most of the C/C++ compilers, define macros which can be used to detect operating system. For example, in GCC, following are common macros.

_WIN32 : Defined for both 32 bit and 64 bit windows OS.
_WIN64 : Defined for 64 bit windows OS.

unix, __unix, __unix__ : Defined in UNIX OS

__APPLE__, __MACH__ : Defined in Mac OS


Source : StackOverflow
In Windows, we us dir call to list all directories and in most of the other Operating Systems �ls� is used. Below is simple C++ implementation to list directories of folder irrespective of OS.

filter_none
edit
play_arrow

brightness_4
// C++ program to list all directories.
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifdef _WIN32
    system("dir");
#else
    system("ls");
#endif
    return 0;
}
The above OS independent code is totally different from Java�s platform independence. In Java, there is intermediate byte code that is very clean way of handling platform dependencies. Here we have to remember compiler specific macros and write code in using clumsy #ifdef and #else, and the most important, we need to recompile the code for every OS.

**/
