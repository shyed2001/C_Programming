 /*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
#include <time.h>
//#include <unistd.h>
//#include <windows.h>
/////#include <threads.h>
//#include <conio.h>
//#include <dos.h>
//#include <direct.h>
//#include <math.h>
//#include<ctype.h>
//#include <cstdlib>
//#include <iostream>
//#include <cmath>
#include <string.h>
//#include <iomanip>


#define SHOW_SOURCE_CODE

#define SHOW_SOURCE_FILE_PATH

/// Above two lines are user defined Macros
/// using namespace std;



int main(int argc, char* argv[])
{


#ifdef SHOW_SOURCE_FILE_PATH



       /// Prints location of C this C code.

   printf("%s \n",__FILE__); /// __FILE__ holds the current file name




#endif


#ifdef SHOW_SOURCE_CODE
        /// We can append this code to any C program
    /// such that it prints its source code with line number.

unsigned long ln = 0;
 FILE *fp = fopen(__FILE__, "r");
int prev = '\n';
int cc;  // Use int here, not char
while((cc=getc(fp))!=EOF) {
  if (prev == '\n'){
    printf("%05lu ", ++ln);
  }
  putchar(cc);
  prev = cc;
}
if (prev != '\n') {
  putchar('\n');  /// print a \n for input that lacks a final \n
}
printf("lines num: %lu\n", ln);

    fclose(fp);
          /// We can append this code to any C program
    /// such that it prints its source code with line number.

#endif
///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");
   clock_t tStart = clock();

    FILE * filepointer = fopen("executives.txt", "w");  /// Create the file and write on it.

    fprintf(filepointer, " Writing"); ///  write on it.

      fclose(filepointer);

    /// "a"  For appending lines at the bottom of file.

   filepointer = fopen("executives.txt", "a");

    fprintf(filepointer, " \n Appending Writing");

    fclose(filepointer);

   filepointer = fopen("executives.txt", "r");
    char c;

    do
    {
        c = fgetc(filepointer); /// fgetc to read character by character.
        printf("%c", c); /// printing char by char

    }while (c != EOF); /// EOF is end of file assigned to c by system/compiler.

 fclose(filepointer);


    printf("\n Total Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

   clock_t tStart2 = clock();



   char line[255];

   filepointer = fopen("executives.txt", "w");  /// Create the file and write on it.

    fprintf(filepointer, " Writing"); ///  write on it.

    /// "a"  For appending lines at the bottom of file.

   /// FILE * filepointer = fopen("executives.txt", "a");

    fprintf(filepointer, " \n Writing");

    fclose(filepointer);

    filepointer = fopen("executives.txt", "r"); /// "r" read or see at the file

     fgets(line, 255, filepointer);
        fgets(line, 255, filepointer);
        fgets(line, 255, filepointer);
        fgets(line, 255, filepointer);
     printf(" %s \n", line);


      fclose(filepointer);  /// Must close the file while writing, reading or appending.

      FILE *ifile;
	int grade, newGrade;

    puts("please enter a integer number to append\n");

	scanf("%d", &newGrade);

	ifile = fopen("myGrades.txt", "r");

	while (fscanf(ifile, "%d", &grade) != EOF);
	fclose(ifile);

	if (grade!=newGrade) {
		ifile = fopen("myGrades.txt", "a");
		fprintf(ifile, " %d", newGrade);
		fclose(ifile);
	}
	ifile = fopen("myGrades.txt", "r");
        while (fscanf(ifile, "%d", &grade) != EOF){
                printf("%d ", grade);
        }
        fclose(ifile);


  printf("\nTime taken: %.5fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);


        FILE *ofile;  /* You can use any variable name here, just make sure you
                         include the '*'. */
        char filename[] = "myGrades.txt";
        int myavg[1000];
        int NUM, num, message;
        int i, done = 0;

        puts("please enter a integer number \n");
        scanf("%d", &NUM);

        ofile = fopen(filename, "r");

        while (!done)

        {
            message = fscanf(ofile, "%d", &num); /// fscanf returns an integer
            /// at end of file, fscanf will return EOF
            myavg[i] = num;
            i++;
            if (message == EOF)
            {
                done = 1; /// eof= end of file
            }
        }
               if (myavg[i-1] == NUM)
                {
                 fclose(ofile);
                }
                 else {
                 ofile = fopen(filename, "a");
                 fprintf(ofile, " %d", NUM);
                 fclose(ofile);
                      }

           num, message, done = 0;
           ofile = fopen(filename, "r");
            while (!done) {
            message = fscanf(ofile, "%d", &num); /// fscanf returns an integer
            /// at end of file, fscanf will return EOF
            if (message == EOF) done = 1; /// eof= end of file
            else {
                printf("%d ", num);

            }
        }

        fclose(ofile);


    getchar(); /// cin.get()/// all system /// C++ all system // platform

    return 0;

   ///  system("pause>null"); /// for windows only  /// For debugging only.

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
