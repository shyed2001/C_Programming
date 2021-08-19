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

struct date {
        int year;
        int month;
        int day;
    };

void ReadDate(struct date *);
void Print_Date(struct date);

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);


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
"ReadDate()" and "Print_Date()". All that is left for you to do is to write these two functions.

Here are the exact specifications:

The function ReadDate() should read 3 integers from the user input. The first integer is the year
(a 4-digit number), the second integer is the month, and the third integer is the day of the date
being read. The function should store these three numbers in the appropriate parts of the structure
being passed into it.

The function Print_Date() should print the date stored in the variable passed into it in the
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


	struct date today;
	ReadDate(&today);
	Print_Date(today);



///Unit 5.1: Structures/Work with structures
/// Access and modify structure’s members with the arrow operator

     struct student *studptr;

    printf("\nEnter a new student record: \n");
    printf("First name: ");
    scanf("%s", studptr->firstName);
    printf("Last name: ");
    scanf("%s", studptr->lastName);
    printf("Birth year: ");
    scanf("%d", &studptr->birthYear);  /// & get executed last, -> has higher order of precedence.
    printf("Average grade: ");
    scanf("%lf", &studptr->aveGrade);






/// Get the size of a structure in memory
/// Get the size of a structure in memory


	/// struct student me;
    printf("Size of struct student is %zu.\n", sizeof(struct student));
    printf("Size of struct student is %zu.\n", sizeof(me));
    printf("Size of firstName is %zu.\n", sizeof(me.firstName));
    printf("Size of lastName is %zu.\n", sizeof(me.lastName));
    printf("Size of birthYear is %zu.\n", sizeof(me.birthYear));
    printf("Size of aveGrade is %zu.\n", sizeof(me.aveGrade));




/// Activity: manipulate structures with functions


/// Activity: manipulate structures with functions (External resource)


/*
In this problem you will continue developing the data feature which you started implementing in the previous problem. You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day. You do not have to take into account leap years (although you may if you wish to). That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as the function prototypes for the readDate(), printDate(), and advanceDate() functions. Do not modify any of the given code. Simply add your function definitions underneath the main() function. For the readDate() and printDate() functions you may simply copy and paste the code you developed in the previous task.



Examples
Input:
2018 10 2
Output:
10/02/2018

10/03/2018


Input:
2018 10 31
Output:
10/31/2018

11/01/2018


Input:
2018 11 30
Output:
11/30/2018

12/01/2018


Input:
2018 12 31
Output:
12/31/2018

01/01/2019



#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

// function prototypes
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// function definitions
void readDate(struct date *nowptr) {
    scanf("%d%d%d", &((*nowptr).year), &((*nowptr).month), &((*nowptr).day));
}

void printDate(struct date now) {
    printf("%02d/%02d/%4d\n", now.month, now.day, now.year);
}

struct date advanceDay(struct date today) {
    int d = today.day;
    int m = today.month;
    int y = today.year;
    int days;
    struct date tomorrow;
    if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)) {
        days = 31;
    } else if (m==2) {
        if (y%4==0) {
            if (y%100 == 0) {
                if (y%400 ==0) {
                    days = 29;
                } else {
                    days = 28;
                }
            } else {
                days = 29;
            }
        } else {
            days = 28;
        }
    } else {
        days = 30;
    }
    if (d<days) d++;
    else {
        d=1;
        if (m==12) {
            m = 1;
            y++;
        } else m++;
    }
    tomorrow.year = y;
    tomorrow.month = m;
    tomorrow.day = d;
    return(tomorrow);
}
*/



	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);




















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


void ReadDate(struct date *dateptr)
{
    //printf("\nEnter a new student record: \n");
    printf("Enter Year: ");
    scanf("%d", &(*dateptr).year);
    printf("Enter Day: ");
    scanf("%d", &(*dateptr).day);
    printf("Enter month: ");
    scanf("%d", &(*dateptr).month);
   // printf("Average grade: ");
    //scanf("%lf", &(*dateptr).aveGrade);
}

void Print_Date(struct date ddyymm)

{
    //printf("Enter Date: ");
    //printf("Enter Date: ");
    //printf("Enter month: ");
    printf("%02d/%02d/%d \n", ddyymm.day, ddyymm.month, ddyymm.year);
}

void readDate(struct date *dateptr)
{
    //printf("\nEnter a new student record: \n");
    ///printf("Enter Year: ");
    scanf("%d", &(*dateptr).year);
    ///printf("Enter month: ");
    scanf("%d", &(*dateptr).month);
    ///printf("Enter Day: ");
    scanf("%d", &(*dateptr).day);
   // printf("Average grade: ");
    //scanf("%lf", &(*dateptr).aveGrade);
}


void printDate(struct date ddyymm)

{
    printf("%02d/%02d/%d \n", ddyymm.month, ddyymm.day, ddyymm.year);
}



struct date advanceDay(struct date nextDay)
{
     int year, month, day;
  // set year, month, day in some fashion

  year  = nextDay.year;
  month = nextDay.month;
  day   = nextDay.day;

  day++;  // tomorrow
  //printf("%02d/%02d/%d \n", day, month, year);
  int days_per_month = 31;
  if (month == 4 || month == 6 || month == 9 || month == 11) {
    days_per_month = 30;
  } else if (month == 2) {
    days_per_month = 28;
    if (year % 4 == 0) {
      days_per_month = 29;
      if (year % 100 == 0) {
        days_per_month = 28;
        if (year % 400 == 0) {
          days_per_month = 29;
        }
      }
    }
  }
  if (day > days_per_month) {
    day = 1;
    month++;
    if (month > 12) {
      month = 1;
      year++;
    }
  }
    //printf("%02d/%02d/%d \n", day, month, year);
      nextDay.year =  year;
      nextDay.month = month;
      nextDay.day = day;
    return nextDay;
}
