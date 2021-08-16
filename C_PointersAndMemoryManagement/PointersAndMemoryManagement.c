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

int * allocateIntArray(int);
double findAverage(int *,int);



int main(int argc, char* argv[])

{
   clock_t tStart = clock();


     puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");

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

/* Pointer arithmetics and pointer to pointer  References
void setToZero(short ** t){
    **t = *(*t) = 0; //t[0][0]  OR  *(t[0] + 0)
    *((*t) + 1) = 0;//t[0][1]  OR *(t[0] + 1)
    *((*t) + 2) = 0;//t[0][2]  OR *(t[0] + 2)
    *(*(t+1)) = 0;//t[1][0]  OR *(t[1] + 0)
    *(*(t+1)+1) = 0;//t[1][1]  OR *(t[1] + 1)
}

*/
///Unit 4.2: Multidimensional arrays / Working with arrays and pointers

/// Activity: arrays and memory


/// Activity: arrays and memory (External resource)



/*
You are designing a new cookie recipe and are experimenting with different
amounts of wet (water, oil) and dry (flour, sugar, cocoa powder) ingredients
 in order to get the proportions just right. All of these amounts are
  initially read from the user input, and the code to do so, along with all
   variable declarations, had already been completed. You are interested in
    the total amount of wet and dry ingredients used in the recipe as well
     as the ratio of these two quantities.

     Example
Input
10.5 20.2
30.3 40.4 50.5
Output
Total amount of wet ingredients: 30.70 grams.
Total amount of dry ingredients: 121.20 grams.
Ratio of wet to dry ingredients: 3.95.
New water amount: 15.35 grams, new oil amount: 15.35 grams.
*/



    double totalWet, totalDry, ratio;

    double wet[2];
    double dry[3];
    double * cookie[2] = {wet,dry};

    scanf("%lf%lf", &wet[0], &wet[1]);
    scanf("%lf%lf%lf", &dry[0], &dry[1], &dry[2]);

    // Add one line here!
    /* The line you add should use the array cookie (and not the array wet) to
       find the sum of the wet ingredients of the cookie recipe and store that sum
       in the variable totalWet. Use only indexed notation to address the cookie
       array (that is, you need to use two pairs of brackets [..]).
    */

    totalWet = cookie[0][0] + cookie[0][1] ;

    printf("Total amount of wet ingredients: %.2lf grams.\n", totalWet);

    // Add one line here!
    /* The line you add should use the array cookie (and not the array dry) to
       find the sum of the dry ingredients of the cookie recipe and store that sum
       in the variable totalDry. This time, use only one pair of brackets [..] each
       time you address the cookie array.
    */

    totalDry = cookie [1] [0] + cookie [1] [1] + cookie [1] [2];

    printf("Total amount of dry ingredients: %.2lf grams.\n", totalDry);
    ratio = totalDry/totalWet;
    printf("Ratio of wet to dry ingredients: %.2lf.\n", ratio);

    // Add two lines here.
    /* The lines you add should use the array cookie (and not the array wet) to
       update the amounts of water and oil in your recipe.
       You believe that any cookie recipe should use equal amounts of water and oil.
       Without changing the total amount of wet ingredients, update the values for
       water and oil, using only the array cookie (and not the array wet) so that
       these amounts will be equal. The easiest way to do so is to assign the value
       totalWet/2 to both the water and the oil entry. When addressing the array cookie,
       do not use any brackets at all this time.
    */

    /// wet[0] = *(*cookie) = **cookie =cookie[0][0]

    *(*cookie) = totalWet/2;

   // wet[1] = cookie[0][1] = *(*(cookie) + 1)

   *(*cookie + 1) = totalWet/2;

    printf("New water amount: %.2lf grams, new oil amount: %.2lf grams.\n", wet[0], wet[1]);


/* Pointer arithmetics and pointer to pointer  References
void setToZero(short ** t){
    **t = *(*t) = 0; //t[0][0]  OR  *(t[0] + 0)
    *((*t) + 1) = 0;//t[0][1]  OR *(t[0] + 1)
    *((*t) + 2) = 0;//t[0][2]  OR *(t[0] + 2)
    *(*(t+1)) = 0;//t[1][0]  OR *(t[1] + 0)
    *(*(t+1)+1) = 0;//t[1][1]  OR *(t[1] + 1)
}

*/


/// Unit 4.2: Multidimensional arrays // Storing and manipulating strings in arrays

/// Store strings in arrays using pointers


 //! showMemory(cursors=[words[0], words[1], words[2]], start=65520)
    char a[4];
    char b[6];
    char c[9];
    char * words[3] = {a, b, c};
    printf("Please enter a word with at  most 3 letters: ");
    scanf("%s", a);
    printf("Please enter a word with at  most 5 letters: ");
    scanf("%s", b);
    printf("Please enter a word with at  most 8 letters: ");
    scanf("%s", c);
    printf("You entered: \n");
    printf("%s %s %s.\n", a, b, c);
    printf("%s %s %s.\n", words[0], words[1], words[2]);






/// Unit 4.2: Multidimensional arrays //Storing and manipulating strings in arrays
/// Store multiple strings in an array

/// array of arrays , multidimensional array



    char words[3][10];
    int i;
    printf("Please enter three words: ");
    for (i=0; i<3; i++) {
        scanf("%s", words[i]);
    }
    printf("You entered: \n");
    for (i=0; i<3; i++) {
        printf("%s ", words[i]);
    }
    printf("\nFirst letters: \n");
    for (i=0; i<3; i++) {
        printf("\"%s\" starts with the letter '%c'.\n", words[i], words[i][0]);
    }


///Unit 4.2: Multidimensional arrays///Storing and manipulating strings in arrays

/// Work with matrices


    //! showMemory(cursors=[matrix[0], matrix[1]], start=65520)
    //! matrix = showArray2D(matrix, rowCursors=[line], colCursors=[col])
    int matrix[2][3];
    int line, col;
    for(line = 0; line < 2; line++){
        for(col = 0; col < 3; col++){
            scanf("%d",&matrix[line][col]);
        }
    }
    printf("You entered: \n");
    for(line = 0; line < 2; line++){
        for(col = 0; col < 3; col++){
            printf("%d ", matrix[line][col]);
        }
        printf("\n");
    }



/// Activity: print text in reverse order
/// Activity: print text in reverse order (External resource)

/*
Your goal is to read a 68-word text from the input and then print it
to the screen backwards. Individual words do not have to be spelled backwards,
 but rather your program should print out the last word first, then the
 second-to-last word, etc. No word has more than 40 characters.

Example
Input
Science Computer on Papers Selected Knuth, Ervin Donald ― correct."
be will results the that reader a convince to and works algorithm an
 way the communicate to concepts, mathematical as well as forms literary
 and aesthetic traditional with works who essayist an ideally is programmer
 A clearly. them understand can beings human that so and quickly them
 perform can machines computing that so written are programs best "The


Output
"The best programs are written so that computing machines can perform
them quickly and so that human beings can understand them clearly.
 A programmer is ideally an essayist who works with traditional aesthetic
  and literary forms as well as mathematical concepts, to communicate the
   way an algorithm works and to convince a reader that the results will
    be correct." ― Donald Ervin Knuth, Selected Papers on Computer Science




    solution :-


    int main(void) {
	char text[68][41];
	int i;
	for(i = 0 ; i < 68 ; i ++){
		scanf("%s", text[i]);
	}
	for(i = 0 ; i<68 ; i++){
		printf("%s ", text[67-i]);
	}

*/


    char Words[68][41];
    int i;
    for (i=0; i<68; i++) {
        scanf("%s", Words[i]);
    }
    for (i=67; i>=0; i--) {
        printf("%s ", Words[i]);
    }

/*
Activity: malloc (External resource)
Activity: malloc (External resource)

/
Unit 4.3: Dynamic memory allocation
/
Allocating memory at runtime



    //! showMemory(start=272)
    int * intptr;
    double * doubleptr;
    intptr = (int *) malloc(sizeof(int)); // casting
    * intptr = 5;
    doubleptr = (double *) malloc(sizeof(double)); // casting
    * doubleptr = 9.0;

    free (intptr);
    free (doubleptr);

 /
Unit 4.3: Dynamic memory allocation
/
Freeing dynamically allocated memory

Deallocate memory in the heap using free

*/


    //! showMemory(start=438, cursors=[a,b,c])
    int *a, *b, *c;
    a = (int *) malloc(sizeof(int));
    *a = 1;
    printf("I stored %d at memory location %p.\n", *a, a);
    b = (int *) malloc(sizeof(int));
    *b = 2;
    free(a);
    c = (int *) malloc(sizeof(int));
    *c = 3;
    printf("Can I still access a?\n");
    printf("I stored %d at memory location %p.\n", *a, a);
    free(b);
    free(c);


///Unit 4.3: Dynamic memory allocation //Storing and addressing arrays in dynamically allocated

/// Allocate memory for arrays using malloc


    //! showMemory(start=272)
    int * array;
    array = (int *) malloc(5*sizeof(int));
    array[0] = 3;
    array[1] = 44;
    array[2] = 2;
    * (array + 3) = 7;
    * (array + 4) = -1;
    free(array);


    /// Learn from another example of array memory allocation

    /// Learn from another example of array memory allocation




    //! showMemory(start=272)
    int num, i;
    int * array;
    double average;
    printf("How many grades would you like to enter?");
    scanf("%d",&num);
    array = allocateIntArray(num);
    printf("Please enter %d grades: ",num);
    for(i=0;i<num;i++){
        scanf("%d",array+i);
    }
    average = findAverage(array,num);
    printf("The average grade is %.2f.\n",average);
    free(array);




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

int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}

double findAverage(int * array, int num){
    int i;
    double average = 0.0;
    for(i=0;i<num;i++){
        average += array[i];
    }
    average = average / num;
    return average;
}
