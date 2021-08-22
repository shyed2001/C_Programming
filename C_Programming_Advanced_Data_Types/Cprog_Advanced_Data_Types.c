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
/// struct date advanceDay(struct date);
struct date advanceDay(struct date nextDay);

struct point{
    int x;
    int y;
};
void printPoint(struct point pt);
void readPoint(struct point * ptr);

void printTriangle(struct point *ptr);

void printPoly(struct point *ptr, int vertices);

struct POINT{
    int x;
    int y;
    struct POINT * next;
};

struct point2{
    int x;
    int y;
    struct point2 * next;
};
void printPoints(struct point2 *start);
struct point * createPoint(int x, int y) ;
void append (struct point * end, struct point * newpt);

struct point * append (struct point * end, struct point * newpt);
void freePoints(struct point * start);

struct digit {
    int num;
    struct digit * next;
};
struct digit * createDigit(int dig);



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


    readStudent(&me);  /// address needed for use with pointer and scanf input or modify
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
	ReadDate(&today);  /// to modify the struct we need &
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
    scanf("%lf", &(studptr->aveGrade));
    /// scanf("%lf", &(studptr).aveGrade);


/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> "

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
/// Remember! pentagon[4].y == (pentagon+4)->y.

/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing

/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> "



	struct date Today, tomorrow;

	readDate(&Today);  /// & is needed to be able to modify struct
	printDate(Today);
	tomorrow = advanceDay(Today);
	printDate(tomorrow);


///Unit 5.2: Structures and pointers/Create a structure to store the coordinates of a point/// /Unit 5.2: Structures and pointers
///Create a structure to store the coordinates of a point

/// Create structures from user input


    //! showMemory(start=65520)
    struct point z;
    readPoint(&z); /// & is needed to be able to modify struct
    printPoint(z);


/// Unit 5.2: Structures and pointers//Create a structure to store the coordinates of a point

/// Use an array of structures without loop


    //! showMemory(start=65520)
    struct point triangle[3];
    readPoint(&triangle[0]);
    readPoint(&triangle[1]);
    readPoint(&triangle[2]);



/// Unit 5.2: Structures and pointers//Create a structure to store the coordinates of a point

/// Use an array of structures with loop


    //! showMemory(start=65520)
    /// struct point triangle[3];

    int i;
    for (i=0; i<3; i++){
        readPoint(&triangle[i]);
    }
    printTriangle(triangle);

/// Remember! pentagon[4].y == (pentagon+4)->y.

/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing

/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> "


///Create a structure to store the coordinates of a point

/// Create structures from user input

///Unit 5.2: Structures and pointers ///Allocate memory for structures

/// Allocate memory for structures


    //! showMemory(start=65520)
    struct point * polygon;
    int i, num;
    printf("How many vertices does your polygon have? ");
    scanf("%d", &num);
    polygon = (struct point *) malloc(num * sizeof(struct point)); // casting pointer to a memory
    for (i=0; i<num; i++){
        readPoint(&polygon[i]);
    }
    printPoly(polygon, num);
    free(polyg


/// Activity: allocate memory for structures

/// Activity: allocate memory for polygon structures (External resource)


/*


In this task, we will continue to work with polygons.
You are provided with the following:
- A familiar structure definition for a 2-dimensional point.
- Two familiar functions and their prototypes, "printPoint()"
and "printPoly()".
- A prototype for "initializePoly()", a function that you must write.

- An empty main function which you must complete.


Please do not alter the provided code (except to fill in the main function
and add your initializePoly() function).

initializePoly() should receive as input a pointer to the first structure
in an array of structures as well as in integer, indicating how many points
can be stored in the array. Your job is to initialize these points in the
following way: Using a for loop with i starting at 0, initialize the
x-coordinate of the point at index i as -i, and the y-coordinate as i*i.


Your main function should read the number of vertices to store in the array
of points from the user, then allocate the appropriate amount of memory,
initialize the array with the function initializePoly, and finally print
the vertices of the polygon using the function printPoly().

Use a loop in your initializePoly() function, where the index of the loop
corresponds to the index of the array.


Example
Input:
4
Output:
(0, 0)
(-1, 1)
(-2, 4)
(-3, 9)


Provided code
#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {

    // Fill in your main function here

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here



*/


/// Hint, refrain from using a loop in the main and find a way to traverse
/// the array starting from index zero, using array indexing or Pointer
///arithmetic maybe ;-) Remember! pentagon[4].y == (pentagon+4)->y.
///Good luck! :-)

/*
#include <stdio.h>
#include <stdlib.h>
struct point
{
	int x;
	int y;
};
void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);
int main(void)
{
   //! showMemory(start=65520)
/// Fill in your main function here
/// Your main function should read the number of vertices to store in the array \
of points from the user,
/// then allocate the appropriate amount of memory,
/// initialize the array with the function initializePoly,
/// and finally print the vertices of the polygon using the function printPoly().

    struct point * POLYGON;
    int NUM;
    printf("How many vertices does your polygon have ? \n ");
    scanf("%d", &NUM);

    POLYGON = (struct point *) malloc(NUM * sizeof(struct point)); // casting pointer to a memory

    initializePoly(POLYGON, NUM);
    printPoly(POLYGON, NUM);
    free(POLYGON);

    return 0;

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here

void initializePoly(struct point *Poly, int NUMofvertices)
{
 /*  initializePoly() should receive as input a pointer to the first structure
in an array of structures as well as in integer, indicating how many points
can be stored in the array.

Your job is to initialize these points in the following way:
Using a for loop with i starting at 0, initialize the x-coordinate of the point
at index i as -i,
and the y-coordinate as i*i.

Use a loop in your initializePoly() function, where the index of the loop
corresponds to the index of the array.
*/
     /// struct point  Poly->x = -i;
      /// struct point  Poly->y = i*i;


      int i=0;
    for (i=0; i<NUMofvertices; i++)
    {

      Poly[i].x = -i;
      Poly[i].y = i*i;
    }
    /// here Poly is a pointer to a struct address
    /// printf("\nEnter a new point: \n");
   /// printf("x-coordinate: ");
    ///scanf("%d", &Poly[i]->x); ///first the dereferencing -> works then the & works
    ///printf("y-coordinate: ");
    ///scanf("%d", &Poly[i]->y);
}


/// Remember! pentagon[4].y == (pentagon+4)->y.

/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing

/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing




/// Unit 5.2: Structures and pointers /// Get to know the concept of a linked list

/// Link structures together in a linked list

/// linked list

    //! showMemory(start=65520)
    struct POINT  pt1 = {1, 2, NULL};
    struct POINT pt2 = {-2, 3, NULL};
    struct POINT pt3 = {5, -4, NULL};
    struct POINT * start, * PTR;

    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;

    PTR = start;
    while (PTR!=NULL) {
        printf("(%d, %d)\n", PTR->x, PTR->y);
        PTR = PTR->next;
    }

/// Remember! pentagon[4].y == (pentagon+4)->y.
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing

/// Link structures together in a linked list

/// linked list
/// Print a linked list . With a function


    //! showMemory(start=65520)
    struct point2 pt1 = {1, 2, NULL};
    struct point2 * start;
    struct point2 pt2 = {-2, 3, NULL};
    struct point2 pt3 = {5, -4, NULL};

    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;

    printPoints(start);

/// Remember! pentagon[4].y == (pentagon+4)->y.
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing



/// Append new nodes to a linked list

/// Append new nodes to a linked list



    start = &pt1;
    append(&pt1, &pt2);
    append(&pt2, &pt3);

    printPoints(start);



/// Append new nodes to a linked list

/// Append new nodes to a linked list


   //! showMemory(start=65520)
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point * start, * end;

    start = end = &pt1;
    end = append(end, &pt2);
    end = append(end, &pt3);

    printPoints(start);


/// Delete a linked list
/// Delete a linked list




    //! showMemory(start=65520)
    struct point * start, * end, * newpt;
    int num, i;
    int x, y;

    printf("How many points? ");
    scanf("%d", &num);
    for (i=0; i<num; i++) {
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
        newpt = createPoint(x,y);
        if (i==0) {
            start = end = newpt;
        } else {
            end = append(end,newpt);
        }
    }
    printf("You entered: ");
    printPoints(start);
    freePoints(start);



    ///Unit 5.3: Linked lists///Creating a single node

    /// Create a node of a linked list


    //! stack=showMemory(start=65520, showcursor[numberptr])
    struct digit * numberptr;
    int digitToStore = 5;
    numberptr = createDigit(digitToStore);
    printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberptr->num, numberptr->next, numberptr);
    free(numberptr);
















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
///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");
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
void readPoint(struct point * ptr) { /// here ptr is a pointer to a struct address
    printf("\nEnter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d", &ptr->x); ///first the dereferencing -> works then the & works
    printf("y-coordinate: ");
    scanf("%d", &ptr->y);
}
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> "
void printPoint(struct point pt){  /// pt is the struct inself
    printf("(%d, %d)\n", pt.x, pt.y);
}


void printTriangle(struct point *ptr) {
    int i;
    for (i=0; i<3; i++) {
        printPoint(ptr[i]);
    }
}

/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing

void printPoly(struct point *ptr, int vertices) {
    int i;
    for (i=0; i<vertices; i++) {
        printPoint(ptr[i]);
    }
}

void printPoints(struct point2 *start) {
    //! showMemory(start = 65520, cursors=[ptr])
    struct point2 * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}
/// Remember! pentagon[4].y == (pentagon+4)->y.
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing
/// Remember : t[4] equal to *(t+4), , and  " (* ). " equal to "-> " Dereferencing


void append (struct point * end, struct point * newpt) {
    end->next = newpt;
}


struct point * append (struct point * end, struct point * newpt) {
    end->next = newpt;
    return(end->next);
}

struct point * createPoint(int x, int y) {
    struct point *ptr;
    ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;
    return(ptr);
}

void freePoints(struct point * start) {
    struct point * ptr = start;
    while (ptr!=NULL) {
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}

struct digit * createDigit(int dig) {
    //! heap=showMemory(start=330, cursors=[ptr])
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}



