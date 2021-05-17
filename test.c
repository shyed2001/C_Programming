//#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include <stdbool.h>
int main(void)
{

    clock_t tStart = clock();











          printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

          return 0;
          system("pause>null");

          /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
          /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
          /// will cause the black dos window (where you see your output) to be paused untill you press any key.
          printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}
