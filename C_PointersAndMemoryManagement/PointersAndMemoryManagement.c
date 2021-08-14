/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include<ctype.h>
///#include <cstdlib>
/// #include <iostream>
/// #include <cmath>
/// #include <string>
/// #include <iomanip>

double myFunction(int, double, char);

int main(int argc, char* argv[])

{
   clock_t tStart = clock();

  /// Unit 4.1: Memory and pointers / Defining and dereferencing pointer
 /// The stack: visualize what happens in memory

  //! showMemory(start=65520)
    int i;
    double a,b;
    char c;
    int ar[3];
    a = 1.0;
    c = 'p';
    for (i=0; i<3; i++) {
        ar[i] = i*i+1;
        b = myFunction(i, a*i, c);
    }



   clock_t tStart2 = clock();






    printf("Time taken: %.5fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);


    printf("Total Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    getchar();

    /// for C++  cin.get();  // or for C getchar()

    /// system("pause>null"); /// for windows only // Debugging only use

    return 0;

}
    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused until you press any key.
    ///printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n

/*
You can use the OS commands to clear the contents of the console.

#include<stdlib.h>
int main(){

system("cls");   //For windows
system("clear"); //For Linux

}

This is actually a quite simple problem. All you have to do is use printf. You don't even need printf or any headers, for that matter.

printf("\e[1;1H\e[2J");
The \e[1;1H sets the screen to the 1st row and 1st column. the 2J overwrites all characters currently on the screen.

You can also use this:

write(0,"\e[1;1H\e[2J",12);
Then you don't need stdio.h.


*/


/*
system("pause");
is wrong because it's part of Windows API and so it won't work in other
operation systems.

You should try to use just objects from C++ standard library.
A better solution will be to write:

cin.get(); ///  cin.get();  // or getchar()
return 0;
But it will also cause problems if you have other cins in your code.
 Because after each cin, you'll tap an Enter or \n which is a white space character. cin ignores this character and leaves it in the buffer zone but cin.get(), gets this remained character. So the control of the program reaches the line return 0 and the console gets closed before letting you see the results.
To solve this, we write the code as follows:
cin.ignore();
cin.get();
return 0;

You can use std::cin.get() from iostream:

#include <iostream> // std::cout, std::cin
using namespace std;

int main() {
   do {
     cout << '\n' << "Press the Enter key to continue.";
   } while (cin.get() != '\n');

   return 0;
}

 cin.get();  // or getchar()

Similarly, in C language, getchar() can be used to pause
 the program without printing the message “Press any key to continue…”.

*/




double myFunction(int j, double d, char l) {
    printf("Function received %d, %lf and %c.\n", j, d, l);
    j++;
    d = j*d;
    l = 'b';
    printf("In function: changed values to %d, %lf, %c.\n", j, d, l);
    return d;
}

