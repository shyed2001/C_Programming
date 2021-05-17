//#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include <stdbool.h>
int main(void)
{

    clock_t tStart = clock();



     printf("Branch program flow using floating point numbers");


     // + - * / % : arithmetic operations
    // <  >  <=  >=  !=  ==  :  comparison operations
    double a = 5.0;
    double b = 2.0;
    int result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }


printf("// Double data types have precisions of 15 digits after decimal points,\n")

    double a = 5.0000000000000000001; /// Double data types have precisions of 15 digits after decimal points,
    double b = 5.0000000000000000000;
    int result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }

    printf("// double data types have precisions of 15 digits after decimal points,\n")


    double a = 5.00000001; // Double data types have precisions of 15 digits after decimal points,
    double b = 5.00000000;
    int result;
    printf("Check: Is a == b ?\n");
    result = a == b;
    printf("result is %d\n", result);
    if(result){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }






    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0;
    system("pause>null");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}
