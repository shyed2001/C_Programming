// C program to create an Soft Link
// to the existing file
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
// Driver Code
int main(int argc, char* argv[])
{
    // Symlink function
    int sl = symlink(argv[1], argv[2]);

    // argv[1] is existing file name
    // argv[2] is soft link file name
    if (sl == 0) {
        printf("Soft Link created"
               " succuessfuly");
    }

    return 0;
}
