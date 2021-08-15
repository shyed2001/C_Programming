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

void myFunction(int *, double *, char *);

void timesTwo(int * numptr)

void myFunction(int j);

void add(int x, int y, int *resultptr);

void swap (char *x, char *y);

void myFunction(int *p, int *q);

void myFunction(int *p, int *q);

void printArray(int *, int);
void squareArray(int *, int);

void behind(int * pointerArry, int numberofPlayers );

void setToZero(short ** t);

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


  /// Find the address of a variable

  /// Find the address of a variable


  //! showMemory(start=65520)
    int i = 42;
    int *iAdr = &i;
    double a = 3.14;
    double * aAdr = &a;
    char c = 'p';
    char * cAdr;
    cAdr = &c;
    printf("i = %d and its address is %p.\n", i, iAdr);
    printf("a = %lf and its address is %p.\n", a, aAdr);
    printf("c = %c and its address is %p.\n", c, cAdr);
    myFunction(iAdr, aAdr, cAdr);




    /// Unit 4.1: Memory and pointers / Defining and dereferencing pointers

    /// Dereference a pointer


    //! showMemory(start=65520)
    int i = 42;
    int * iAdr;
    double a = 3.14;
    double * aAdr = &a;
    char c = 'p';
    char * cAdr = &c;
    iAdr = &i; // alternatively int * iAdr = &i;
    printf("Address of i is %p and i = %d.\n", iAdr, *iAdr);
    printf("Address of a is %p and a = %lf.\n", aAdr, *aAdr);
    printf("Address of c is %p and c = %c.\n", cAdr, *cAdr);
    *iAdr = 50;
    printf("Address of i is %p and i = %d.\n", iAdr, i);
    *aAdr = 2.1718;
    printf("Address of a is %p and a = %lf.\n", aAdr, a);
    *cAdr = 'B';
    printf("Address of c is %p and c = %c.\n", cAdr, c);


/// Activity: use pointers
/// Activity: use pointers

        int i;
    int *iAdr = &i;

    *iAdr = 10;

    printf(" i = %d\n", i);
    printf(" *iAdr = %d\n", *iAdr);

    *iAdr = *iAdr - 2;
    printf(" i = %d\n", i);
    printf(" *iAdr = %d\n", *iAdr);

    (*iAdr) += 1;
    printf(" i = %d\n", i);
    printf(" *iAdr = %d\n", *iAdr);


/// What is printed to the screen by the following program?


/// What is printed to the screen by the following program?


  int i = 10;
  myFunction(i);
  printf("%d", i);


/// Unit 4.1: Memory and pointers / Using pointers with functions


/// Pass pointers to functions

    //! showMemory(start=65520)
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("In main: You entered %d.\n", n);
    timesTwo(&n);
    printf("In main: The value of n is %d.\n", n);



    /// Pass variables to functions by reference
    /// Pass variables to functions by reference


        //! showMemory(start=65520)
	int a, b, sum;
	printf("Please enter two integers: ");
	scanf("%d%d", &a, &b);
	add(a, b, &sum);
	printf("%d + %d = %d\n", a, b, sum);


/// What is the output of the following program:
/// What is the output of the following program:
    char c = 'P';
    char d = 'T';
    printf("%c%c ", c, d);
    swap(&c, &d);
    printf("%c%c", c, d);



/// What is the output of the following program: Activity: pointers and functions
/// What is the output of the following program: Activity: pointers and functions


    int i = 1;
    int j = 2;
    myFunction(&i, &j);
    printf("%d %d \n", i, j);
    myFunction(&i, &j);
    printf("%d %d \n", i, j);
    myFunction(&i, &j);
    printf("%d %d \n", i, j);


/// Pointer arithmetic
///Unit 4.1: Memory and pointers / Working with pointer arithmetic


    //! showMemory(start=65520)
    int array[] = {6, 2, -4, 8, 5, 1};
    int *ptr, *ptr2;

    printf("Array contains %d, %d, ... , %d\n", array[0], array[1], array[5]);
    printf("These are stored at %p, %p, ..., %p\n", &array[0], &array[1], &array[5]);
    // array equals &array[0]
    ptr = array;
    ptr2 = &array[0];

    *ptr = 10;
    *(ptr + 1) = 5;
    *(ptr + 2) = -1;

    *array = 3;
    *(array + 1) = 10;
    *(array + 2) = 99;

    ptr++;
    *ptr = 7;

    ptr += 3;
    *ptr = 8;



    printf("Array contains %d, %d, %d , %d, %d, %d\n", array[0], array[1], array[2],array[3], array[4], array[5]);
    printf("These are stored at %p, %p, %p, %p, %p, %p\n", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5]);




/// Pass arrays to functions
/// Pass arrays to functions



    //! showMemory(start=65520)
    int array[] = {6, 2, -4, 8, 5, 1};
    int N = 6;
    printArray(array, 6);
    squareArray(array, 6);
    printArray(array, 6);




/// Activity: arrays and functions

/// Activity: passing array to function to find score (External resource)


/*

You are participating in a game in which players collect points for various solved puzzles.
In the end, the player with the highest score wins. You would like to know how far behind the
 highest-scoring person everyone else is in order to know whether you still have a chance at winning.

Please write a C program that uses a function "behind()" (which you also have to write) in order to
 help with this task. Your program should first read, from the user input, the number of players
 participating in the game. There are never more than 10 players in the game. Next, your program
 should read the current scores of each player and store them in an array. Then you should call the
 function behind(), to which you pass as a first argument, the array holding the player's scores,
  and as a second argument the number of players in the game. The function behind should replace
  the scores stored in the array with the number of points by which each individual player is behind
  the top-scoring player.

To help you out, the main function of the program has already been written, so your job is simply
 to write the function behind(), whose protype is also given to you.

 Example
Input
5
8 12 7 15 11
Output
7
3
8
0
4

*/
    int array[10];
    int N, i;

    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }






 /// Unit 4.2: Multidimensional arrays / Working with arrays and pointers

   ///  Define and work with arrays of pointers and use multiple ways for dereferencing



         //! showMemory(cursors=[a, arrays[0], b, arrays[1], c, arrays[2]], start=65520)
    short a[3] = {234,655, 843};
    short b[2] = {12, 62};
    short c[4] = {3456, 3467, 23, 276};
    short * arrays[3] = {a, b, c};
    * arrays[0] = 5;
    arrays[0][0] = 0; /// same as above.

    * (arrays[0] + 1) = 6;
    arrays[0][1] = 0; /// same as above.

    * (arrays[0] + 2) = 7;
    arrays[0][2] = 0; /// same as above.

    * arrays[1] = 3;
    arrays[1][0] = 0; /// same as above.

    * (arrays[1] + 1) = 4;
    arrays[1][1] = 0; /// same as above.



///Unit 4.2: Multidimensional arrays/Working with arrays and pointers

/// Use pointers to pointers and dereference

/// double pointers and double dereferencing


     //! showMemory(cursors=[t, t[0], t[1]],start=65520)
    short a[3] = {1245, 1924, 234};
    short b[2] = {24, 256};
    short * t[2] = {a,b};
    setToZero(t);











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

void myFunction(int *iptr, double * aptr, char * cptr) {
    printf("Function receied addresses %p, %p and %p.\n", iptr, aptr, cptr);
}

void myFunction(int j) {
    j = 20;
}

void timesTwo(int * numptr) {
    printf("In the function: the number is %d.\n", *numptr);
    *numptr = *numptr * 2;
    printf("In the function: the new number is %d.\n", *numptr);
}

void add(int x, int y, int *resultptr) {
    int z;
    z = x+y;
    printf("Added numbers in the function!\n");
    *resultptr = z;
    printf("Updated variable with pointer in function.\n");
}

void swap (char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void myFunction(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp + *q;
}

void myFunction(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp + *q;
}

void squareArray(int * ptr, int size) {
    int i;
    for (i=0; i<size; i++) {
        ptr[i] = ptr[i]*ptr[i];
        // *(ptr+i) = (*(ptr+i))*(*(ptr+i));
    }
}

void printArray(int * ptr, int size) {
    int i;
    for (i=0; i<size; i++) {
        // printf("%d ", *(ptr+i));
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

///  Write your function behind() here:
void behind(int * pointerArry, int numberofPlayers )

{
    int ArrayMax = *pointerArry;
    int i=0;

   for(i=0; i<numberofPlayers; i++)

   {
       if (ArrayMax < pointerArry[i])
       {
           ArrayMax = pointerArry[i];
       }
   }

   for(i=0; i<numberofPlayers; i++)
    {
         pointerArry[i] = ArrayMax - pointerArry[i];
    }


}

void setToZero(short ** t){
    *(*t) = 0; //t[0][0]  OR  *(t[0] + 0)
    t[0][0] = 1;
    *(t[0] + 0) = 2;
    *((*t) + 1) = 0;//t[0][1]  OR *(t[0] + 1)
    *((*t) + 2) = 0;//t[0][2]  OR *(t[0] + 2)
    *(*(t+1)) = 0;//t[1][0]  OR *(t[1] + 0)
    *(*(t+1)+1) = 0;//t[1][1]  OR *(t[1] + 1)
}
