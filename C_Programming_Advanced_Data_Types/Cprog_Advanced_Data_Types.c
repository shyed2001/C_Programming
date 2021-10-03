/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/
/// Structs and Unions

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

typedef struct {
int x;
float y;
char z;
} mystr;

typedef union {
int x;
float y;
char z;
} myunion;



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
struct digit * append(struct digit * end, struct digit * newDigitptr);
struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

struct student {
      char name[50];
      int age;
      struct student *next;
};
void copyStr(char *source, char *target);
struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
/* add other prototypes here if needed */

void printStudents(struct student *start);

struct digit {
    int num;
    struct digit *next;
};
/// Activity: check divisibility (External resource)
// Write your prototypes here
struct digit *createDigit(int dig) ;
struct digit * append(struct digit * end, struct digit * newDigptr) ;
void printNumber(struct digit *start);
void freeNumber(struct digit *start) ;
struct digit *readNumber(void) ;
struct digit *divisibleByThree(struct digit *numberptr);
struct digit * searchNumber(struct digit * start, int number);



int main()

{
    clock_t tStart = clock();

printf("struct size: *lu\n", sizeof(mystr));
printf("union size: &lu\n", sizeof(myunion));



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
    printf("We are storing the digit %d and the pointer %p at memory \
           location %p.\n", numberptr->num, numberptr->next, numberptr);
    free(numberptr);



/*

You would like to store student data (for each student, their name and age) in a linked list of students.
You are given the following structure to store each student's information. Please do not modify this structure:

struct student {
      char name[50];
      int age;
      struct student *next;
};
Your first task is to write a function createStudent() that takes as inputs a string (namely a student's name)
and an integer (their age) and that returns a pointer to a struct student which stores this information.
 Your function should dynamically allocate the memory required for this struct student and then write
  the student's name and age into this newly allocated memory.

You are given the createStudent() function prototype and a main() function to test your code, please do not modify these:

struct student *createStudent(char studentName[], int studentAge);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}
Examples
Input:
Petra 25
Output:
New student created: Petra is 25 years old.
Input:
Remi 18
Output:
New student created: Remi is 18 years old.
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be kept.

This task offers 1 hint :

Hint 1 :

It may be useful to create a function copyStr() which copies one string to another string.


solution :-

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
void copyStr(char *source, char *target);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student *createStudent(char studentName[], int studentAge) {
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    copyStr(studentName, ptr->name);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}
/// write a function to convert array of shar into a string in c
void copyStr(char *source, char *target) {
    int i = 0;
    while (source[i]!='\0') {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}

*/

    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;


/// Unit 5.3: Linked lists//Linking nodes
/// Append a node to a linked list
///Append a node to a linked list


 //! stack=showMemory(start=65520,cursors=[start,newDigitptr,end,tmp])
    struct digit *start, *newDigitptr, *end, *tmp;
    int first = 5;
    int second = 3;
    int third = 7;
    start = createDigit(first);
    end = start;
    newDigitptr = createDigit(second);
    end = append(end, newDigitptr);
    newDigitptr = createDigit(third);
    end = append(end, newDigitptr);
    ///Unit 5.3: Linked lists//Printing a linked list
     printNumber(start);
/// Unit 5.3: Linked lists//Free an entire linked list

/// Free all space allocated for a linked list

///freeNumber(start);
    // free needs to be added  here
    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);




/// Activity: append a node with student data

///Activity: append a node with student data (External resource)


/*
In this task you will continue working on the linked list of students in which
 you would like to store, for each student, their name and age. As before you
 are provided with some code that you should not modify:

    A structure definition for the storage of each student's information.
    A main() function to test your code.
    Prototypes for the functions createStudent() (from the previous task) and
     append() (from the current task).

You will need the function definition (from the previous task) for createStudent(),
 as well as any other functions you added, such as copyStr() for example. If you were
 unable to solve the previous task you have the option to be given the code for the
  createStudent() function (see the quiz preceding this task) so that you can work on
  the current task.

Your new task is to write a function append() which takes as input two pointers: the
first pointer holds the address of the current end of the linked list of students, the
second pointer points to a newly created student. Your function should append this new
student to the linked list and return the address (a struct student *) of the new end of the list.

Provided code

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
 add other prototypes here if needed *

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}

Place your function definitions here. Be sure to include the definition for
   createStudent() and any other functions you created for the previous task.

Example
Input:

25 18 32

Output:

Petra is 25 years old.
Remi is 18 years old.
Mike is 32 years old.


Update the *next pointer of the current end to point to your new end, and make sure that your new end points to NULL.

solution:

struct student *createStudent(char studentName[], int studentAge) {
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    copyStr(studentName, ptr->name);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}

void copyStr(char *source, char *target) {
    int i = 0;
    while (source[i]!='\0') {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}

struct student * append(struct student * end, struct student * newStudptr) {
    end->next = newStudptr;
    return(end->next);
}

*/



 struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    /// Unit 5.3: Linked lists
///Printing a linked list Activity: print a linked list of student data (External resource)
/*
Your new task is to write a function printStudents() which takes as input a pointer that holds
 the address of the start of a linked list of students. Your function should then print this list
  of students to the screen as specified in the example below. Your function should not return anything.


*/
printStudents(start);




/// free for 3 elements
    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

  freeStudents(start); /// free all element nodes pointers heap memory




///Unit 5.3: Linked lists//Printing a linked list
/// printNumber(start);



/// Activity: free a linked list of students (External resource)
/// Activity: free a linked list of students (External resource)


/*
Your current task is to write a function freeStudents() which takes as input
 a pointer that holds the address of the start of a linked list of students.
  Your function should then free the space allocated for each student in this
  list of students. Your function should not return anything.

  This task offers 1 hint :

Hint 1 :

Make sure to store the next pointer before freeing the one you're on! Otherwise,
 you run the risk of losing that pointer when you free the space storing it.


/// Unit 5.3: Linked lists//Free an entire linked list

/// Free all space allocated for a linked list

void freeStudents(struct student *start) {
    //! heap=showMemory(start=277, cursors=[ptr,start,tmp])
    struct student * ptr = start;
    struct student * tmp;
    while (ptr!='\0') {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *start);
struct digit * readNumber();

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start;
    printf("Please enter a number: ");
    start = readNumber();
    printNumber(start);
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber() {
    //! heap=showMemory(start=309, cursors=[start, end, newptr])
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start==NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

*/


/// Create a linked list of digits from user input

/*



*/


    printf("Please enter a number: ");
    start = readNumber();




///Activity: check divisibility (External resource)

/// Activity: check divisibility (External resource)




    /*

    In this task you will work with the linked list of digits we have created in the lessons up to this point. As before you are provided with some code that you should not modify:

    A structure definition for the storage of each digit's information.
    A main() function to test your code.
    The functions createDigit(), append(), printNumber(), freeNumber() and readNumber() which we have written in the lectures.

Your task is to write a new function divisibleByThree() which takes as input a pointer that holds the address of the start of a linked list of digits. Your function should then check whether the number stored in this linked list of digits is divisible by three. The function should return the value 1 if indeed the number is divisible by three and it should return the value 0 otherwise.
Provided code

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

// Write your prototypes here

int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

// Write your divisibleByThree() function here

Examples
Input:

234

Output:

The number 234
is divisible by 3.

Input:

74658

Output:

The number 74658
is divisible by 3.

Input:

245

Output:

The number 245
is not divisible by 3.

solution:
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void);
int divisibleByThree(struct digit * start);

int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

    */


 struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    if (divisibleByThree(start))
        printf("is divisible by 3.\n");
    else
        printf("is not divisible by 3.\n");
    freeNumber(start);




    ///Linked lists // Searching a linked list
///Linked lists // Searching a linked list

int searchNum = 5;

    ptr = searchNumber(start, searchNum);
    if (ptr!=NULL) {
        printf("Found digit %d at location %p.\n", searchNum, ptr);
    } else {
        printf("Digit %d not found.\n", searchNum);
    }



/*

This problem or code is / was not added to the source code.
In this task you will work with the linked list of digits we have created in the lessons up to this point. As before you are provided with some code that you should not modify:

    A structure definition for the storage of each digit's information.
    A main() function to test your code.
    The functions createDigit(), append(), printNumber(), freeNumber(), readNumber() and divisibleByThree() (although you may not need to use all of these).

Your task is to write a new function changeThrees() which takes as input a pointer that holds the address of the start of a linked list of digits. Your function should change all of those digits in this linked list that equal 3 to the digit 9, and count how many replacements were made. The function should return this number of replacements.
Provided code

This problem or code is / was not added to the source code.
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int dig);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
int divisibleByThree(struct digit * start);
struct digit * readNumber(void);
//Add your own function prototypes here
int changeThrees(struct digit * start)
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("was modified in %d places.\n", changeThrees(start));

    printf("The new number is ");
    printNumber(start);
    freeNumber(start);

    return 0;
}

struct digit * createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

// Write your changeThrees() function here

int changeThrees(struct digit * start)
{
  struct digit * ptr = start;
  int ThreeCount = 0;
  while (ptr!=NULL) {
    if (ptr->num ==3){
        ptr->num = 9 ;
     ThreeCount++;
    }
    else {
         ptr = ptr->next;
    }
}
 return ThreeCount;

}


Examples
Input:

234345632

Output:

The number 234345632
was modified in 3 places.
The new number is 294945692


Input:

4393293

Output:

The number 4393293
was modified in 3 places.
The new number is 4999299


Input:

475692

Output:

The number 475692
was modified in 0 places.
The new number is 475692


This problem or code is / was not added to the source code.

*/


/// Integer number of arbitrary list

/// Unit 5.3: Linked lists/// Sorting a linked list using Insertion Sort

/// Unit 5.3: Linked lists/// Sorting a linked list using Insertion Sort

/// Insert a new node at the start of a linked list

/// Print number backwards

/*
This problem or code is / was not added to the source code.
#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *start);
struct digit * readNumber();
struct digit * searchNumber(struct digit * start, int number);
struct digit * reverseNumber(struct digit * start);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start, *ptr, *backwards;
    printf("Please enter a number: ");
    start = readNumber();
    printNumber(start);
    backwards = reverseNumber(start);
    printNumber(backwards);
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber() {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start==NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

struct digit * searchNumber(struct digit * start, int number) {
    //! heap=showMemory(start=348, cursors=[ptr,start])
    struct digit * ptr = start;
    while ((ptr!=NULL) && (ptr->num!=number)) {
        ptr = ptr->next;
    }
    return(ptr);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    //! heap=showMemory(start=348, cursors=[newptr,start])
    newptr->next = start;
    return(newptr);
}

struct digit * reverseNumber(struct digit * start) {
    //! heap=showMemory(start=336, cursors=[ptr,start,bstart,newdigit])
    struct digit *ptr = start;
    struct digit *bstart = NULL;
    struct digit *newdigit;

    if (start!=NULL) {
        bstart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr != NULL) {
        newdigit = createDigit(ptr->num);
        bstart = insertAtFront(bstart, newdigit);
        ptr = ptr->next;
    }
    return(bstart);
}

This problem or code is / was not added to the source code.
*/



///Unit 5.3: Linked lists/Sorting a linked list using Insertion Sort
///Create a sorted copy of a linked list
/// Create a sorted copy of a linked list


/*
This problem or code is / was not added to the source code.

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit * readNumber(void);
struct digit * searchNumber(struct digit * start, int number);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);
struct digit * reverseNumber(struct digit * start);
struct digit * sortedCopy(struct digit * start);
struct digit * insertIntoSorted(struct digit *start, struct digit *newDig);

int main(void) {
    //! showMemory(start=65520)
    struct digit *start, *backwards, *sorted;
    printf("Please enter a number: ");
    start = readNumber();
    printf("You entered: ");
    printNumber(start);
    printf("Backwards: ");
    backwards = reverseNumber(start);
    printNumber(backwards);
    printf("Sorted by digit:");
    sorted = sortedCopy(start);
    printNumber(sorted);
    freeNumber(start);
    freeNumber(backwards);
    freeNumber(sorted);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

struct digit * searchNumber(struct digit * start, int number) {
    struct digit * ptr = start;
    while ((ptr!=NULL) && (ptr->num!=number)) {
        ptr = ptr->next;
    }
    return(ptr);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    newptr->next = start;
    return(newptr);
}

struct digit * reverseNumber(struct digit * start) {
    struct digit *ptr = start;
    struct digit *bstart = start;
    struct digit *newdigit;

    if (start!=NULL) {
        bstart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr != NULL) {
        newdigit = createDigit(ptr->num);
        bstart = insertAtFront(bstart, newdigit);
        ptr = ptr->next;
    }
    return(bstart);
}

struct digit * insertIntoSorted(struct digit *start, struct digit *newDig) {
    struct digit *ptr = start;
    struct digit *prev = NULL;
    while ((ptr!=NULL) && (ptr->num < newDig->num)) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev == NULL) {
        start = insertAtFront(start, newDig);
    } else {
        prev->next = newDig;
        newDig->next = ptr;
    }
    return(start);
}

struct digit * sortedCopy(struct digit * start) {
    //! heap1=showMemory(start=348, cursors=[start, ptr, sortedStart, newDigit])
    //! heap2=showMemory(start=519, cursors=[start, newDigit, ptr, prev])
    struct digit *ptr = start;
    struct digit *sortedStart = NULL;
    struct digit *newDigit;

    if (start!=NULL) {
        sortedStart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr!=NULL) {
        newDigit = createDigit(ptr->num);
        sortedStart = insertIntoSorted(sortedStart, newDigit);
        ptr = ptr->next;
    }
    return(sortedStart);
}


This problem or code is / was not added to the source code.
*/


/*
This problem or code is / was not added to the source code.
/// Activity: count redundancies in number (External resource)
///Activity: count redundancies in number (External resource)

In this task you will again work with the linked list of digits we created during the lessons up to this point.

You are provided with (but are not required to use) the functions and prototypes we have written so far. You are also provided with a main() function to test your code. Please do not modify this main() function.

Your task is to write a new function countRedun() which takes as input a pointer that holds the address of the start of a linked list of digits. Your function should count how many redundancies can be observed in the number stored in this list and return this count of redundancies. A redundancy is a digit which has previously already occurred in the number. For example, in the number 39534, the second '3' is a redundancy.
Provided code

#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};


// Add a prototype for countRedun() here
struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void);
int divisibleByThree(struct digit * start);
int changeThrees(struct digit * start);


// Do not modify this main() function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));

    freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int sum = 0;
    while (ptr!=NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return(sum);
}

// Write your countRedun() function here


Examples
Input:

5243

Output:

The number 5243
contains 0 redundancies.

Input:

5256202

Output:

The number 5256202
contains 3 redundancies.

Input:

7777

Output:

The number 7777
contains 3 redundancies.










This task offers 2 hints :

Hint 1 :

One way to solve this problem is to create a sorted copy of the linked list and count redundancies in this copy - it's easier in a sorted list. Just remember to free your sorted copy after its use.

Hint 2 :

In a sorted linked list of digits, a redundancy occurrs for each digit that equals the previous digit.


This problem or code is / was not added to the source code.

#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit * readNumber(void);
struct digit * searchNumber(struct digit * start, int number);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);
struct digit * insertIntoSorted(struct digit *start, struct digit *newDig);
struct digit * sortedCopy(struct digit *);
int countRedun(struct digit * start);

int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    newptr->next = start;
    return(newptr);
}

struct digit * insertIntoSorted(struct digit *start, struct digit *newDig){
    struct digit * ptr = start;
    struct digit * prev = NULL;
    while ((ptr!=NULL) && (ptr->num < newDig->num)) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev==NULL) {
        start = insertAtFront(start, newDig);
    } else {
        prev->next = newDig;
        newDig->next = ptr;
    }
    return(start);
}

struct digit * sortedCopy(struct digit * start){
    struct digit *ptr = start;
    struct digit *sortedStart=NULL;
    struct digit *newDigit;

    if (start!=NULL) {
        sortedStart = createDigit(start->num);
        ptr = start->next;
    }
    while (ptr != NULL) {
        newDigit = createDigit(ptr->num);
        sortedStart = insertIntoSorted(sortedStart, newDigit);
        ptr = ptr->next;
    }
    return(sortedStart);
}

int countRedun(struct digit * start) {
    struct digit *sorted = sortedCopy(start);
    struct digit *ptr = sorted;
    int redun = 0;
    int prev = -1;

    while (ptr != NULL) {
        if (ptr->num == prev)
            redun++;
        else
            prev = ptr->num;
        ptr = ptr->next;
    }
    freeNumber(sorted);
    return redun;
}


This problem or code is / was not added to the source code.


#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};


// Add a prototype for countRedun() here
struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void);
int divisibleByThree(struct digit * start);
int changeThrees(struct digit * start);
int countRedun(struct digit* head);

// Do not modify this main() function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));

    freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int sum = 0;
    while (ptr!=NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return(sum);
}

// Write your countRedun() function here


// The function removes duplicates from a sorted list
int countRedun(struct digit * head)
{
    int count = 0;

    while (head->next != NULL) {

        // Starting from the next node
        struct digit *ptr = head->next;
        while (ptr != NULL) {

            // If some duplicate node is found
            if (head->num == ptr->num) {
                count++;
                break;
            }
            ptr = ptr->next;
        }

        head = head->next;
    }

    // Return the count of duplicate nodes
    return count;
}




This problem or code is / was not added to the source code.
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

// Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge)
{
    int i = 0;
    struct student *CreateStudent;
    char StudentName[50];
    CreateStudent = (struct student *) malloc(sizeof(struct student));
    while(studentName[i]!= NULL) /// or (studentName[i]!= '0') /// https://overiq.com/c-programming-101/array-of-pointers-to-strings-in-c/
    { CreateStudent->name[i]=studentName[i]; i=i+1; } /// write a function to convert array of shar into a string in c

/// As you can see not all strings are long enough to fill all the rows of the array, that's why compiler fills these empty spaces (highlighted using light grey color) with the null characters ('\0').
    CreateStudent->age = studentAge;

    return CreateStudent;
}

/// write a function to convert array of Char into a string in c

void copyStr(char *source, char *target) {
    int i = 0;
    while (source[i]!='\0') /// https://overiq.com/c-programming-101/array-of-pointers-to-strings-in-c/
    /// As you can see not all strings are long enough to fill all the rows of the array, that's why compiler fills these empty spaces (highlighted using light grey color) with the null characters ('\0').
        {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}


struct digit * append(struct digit * end, struct digit * newDigitptr) {
    //! heap=showMemory(start=260, cursors=[end,newDigitptr])
    end->next = newDigitptr;
    end = newDigitptr;
    return(end);
}


/* Place your function definitions here. Be sure to include the definition for
   createStudent() and any other functions you created for the previous task.


 Write your createStudent function here (and any other functions you see fit)
struct student *createStudent(char studentName[], int studentAge)
{
    int i = 0;
    struct student *CreateStudent;

    CreateStudent = (struct student *) malloc(sizeof(struct student));
    while(studentName[i]!= '\0')
    { CreateStudent->name[i]=studentName[i]; i=i+1; } /// write a function to convert array of shar into a string in c

/// As you can see not all strings are long enough to fill all the rows of the array, that's why compiler fills these empty spaces (highlighted using light grey color) with the null characters ('\0').
    CreateStudent->age = studentAge;
    CreateStudent->next = NULL;
    return CreateStudent;
}
*/

struct student *append(struct student * end, struct student * newStudptr) {
    //! heap=showMemory(start=260, cursors=[end,newDigitptr])
    end->next = newStudptr;
    end = newStudptr;
    return(end);
}


///Unit 5.3: Linked lists//Printing a linked list

void printNumber(struct digit *start){
    //! heap=showMemory(start=277, cursors=[ptr,start])
    struct digit * ptr = start;
    while (ptr!=NULL) {   /// (ptr!='0')
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

///Activity: print a linked list of student data (External resource)
void printStudents(struct student *start)
{
        struct student * ptr = start;
        while (ptr!=NULL) {
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
    printf("\n");
}

/// Unit 5.3: Linked lists//Free an entire linked list

/// Free all space allocated for a linked list





void freeNumber(struct digit *start) {
    //! heap=showMemory(start=277, cursors=[ptr,start,tmp])
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }


/// Unit 5.3: Linked lists//Free an entire linked list

/// Free all space allocated for a linked list

void freeStudents(struct student *start) {
    //! heap=showMemory(start=277, cursors=[ptr,start,tmp])
    struct student * ptr = start;
    struct student * tmp;
    while (ptr!='\0') {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }/// free all element nodes pointers heap memory
}


/// Create a linked list of digits from user input

struct digit * readNumber() {
    //! heap=showMemory(start=309, cursors=[start, end, newptr])
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start==NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

/// Activity: check divisibility (External resource)
struct digit *divisibleByThree(struct digit *numberptr)
{
    ///https://www.geeksforgeeks.org/check-large-number-divisible-3-not/
    /// A number is divisible by 3 if sum of its digits is divisible by 3.
    int i, digitSum = 0;
    struct digit * ptr = numberptr;
    while (ptr!=NULL) {

    digitSum = 10 * digitSum + ptr->num;
    ptr = ptr->next;
    }
    // Check if sum of digits is divisible by 3.
    if (digitSum % 3 == 0)
    {
    return 1;
    }
    else
    return 0;
}

///Linked lists // Searching a linked list
struct digit * searchNumber(struct digit * start, int number) {
//! heap=showMemory(start=348, cursors=[ptr,start])
    struct digit * ptr = start;
    while ((ptr!=NULL) && (ptr->num!=number)) {
        ptr = ptr->next;
    }
    return(ptr);
}



