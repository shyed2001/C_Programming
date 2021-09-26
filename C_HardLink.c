// C program to create an Hard Link
// to the existing file
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Driver Code
int main(int argc, char* argv[])
{
    // Link function
    int l = link(argv[1], argv[2]);

    // argv[1] is existing file name
    // argv[2] is link file name
    if (l == 0) {
        printf("Hard Link created"
               " succuessfuly");
    }

    return 0;
}
