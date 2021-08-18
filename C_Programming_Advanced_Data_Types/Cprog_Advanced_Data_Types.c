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
//#include <cstdlib>
//#include <iostream>
//#include <cmath>
//#include <string>
//#include <iomanip>

struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

void readStudent(struct student *studptr);

void printStudent(struct student stud);

int main()

{
    clock_t tStart = clock();

/// Course // Unit 5.1: Structures // Define structures

/// Define and use structures

	//! showMemory(start=65520)
    struct student me = {"Petra", "Bonfert-Taylor", 1989, 3.5};
    struct student you = {"Remi", "Sharrock", 2005, 3.5};
    printf("Names: %s %s, %s %s\n", me.firstName, me.lastName, you.firstName, you.lastName);
    printf("Year of birth: %d\n", me.birthYear, you.birthYear );
    printf("Average grade: %.2lf\n", me.aveGrade, you.aveGrade);




    clock_t tStart2 = clock();


    /// Course // Unit 5.1: Structures // Access and modify structures

    /// Access and modify structure’s members with the dot operator



    //! showMemory(start=65520)
    struct student learner;
    printf("First name: ");
    scanf("%s", learner.firstName);
    printf("Last name: ");
    scanf("%s", learner.lastName);
    printf("Year of birth:");
    scanf("%d", &learner.birthYear);
    printf("Average grade: ");
    scanf("%lf", &learner.aveGrade);

    printf("Name: %s %s\n", learner.firstName, learner.lastName);
	printf("Year of birth: %d\n",learner.birthYear);
	printf("Average grade: %.2lf\n",learner.aveGrade);



	/// Course // Unit 5.1: Structures // Pass structures to functions

/// Pass structures to functions directly


/// pass struct to function using scanf and pointer


    readStudent(&me);  /// address needed for use with pointer and scanf input
    printStudent(me);

 /*

 You'd like to implement a date feature in the C programming language.
To this end you are provided with a structure definition, a main function, and two function prototypes:
"readDate()" and "printDate()". All that is left for you to do is to write these two functions.

Here are the exact specifications:

The function readDate() should read 3 integers from the user input. The first integer is the year
(a 4-digit number), the second integer is the month, and the third integer is the day of the date
being read. The function should store these three numbers in the appropriate parts of the structure
being passed into it.

The function printDate() should print the date stored in the variable passed into it in the
following format: mm/dd/yyyy with a new line afterwards. So the month should be printed with
two digits (01, 02, 03, ..., 11, 12), the day should be printed as two digits (01, 02, 03, ..., 30, 31),
and the year should be printed as a 4-digit number.
This task offers 3 hints :

Hint 1 :

You can print an integer with a width of 2 and leading zeros for items with less than two digits
using the format specifier %02d.

Hint 2 :

Make sure you dereference the structure's pointer before attempting to scan the date into elements
of the structure.

Hint 3 :

Don't forget the '&' when using scanf().

Example
Input:

2018 10 2

Output:

10/02/2018



 */
































































    printf("Time taken: %.5fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);


    printf("Total Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

     getchar(); /// cin.get(); /// all system /// C++ all system // platform

    return 0;

    system("pause>null"); /// for windows only  /// For debugging only.

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


void readStudent(struct student *studptr) {
    printf("\nEnter a new student record: \n");
    printf("First name: ");
    scanf("%s", (*studptr).firstName);
    printf("Last name: ");
    scanf("%s", (*studptr).lastName);
    printf("Birth year: ");
    scanf("%d", &(*studptr).birthYear);
    printf("Average grade: ");
    scanf("%lf", &(*studptr).aveGrade);
}

void printStudent(struct student stud){
    printf("Name: %s %s\n", stud.firstName, stud.lastName);
	printf("Year of birth: %d\n",stud.birthYear);
	printf("Average grade: %.2lf\n",stud.aveGrade);
}
