/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>


int main(void)
{
    int age = 30;
    double gpa = 3.3;
    float roll = 43;
    char grade = 'A';

    printf(" age memory address : %p, \n gpa memory address: %p,\n roll memory address : %p,\n grade memory address: %p \n", &age, &gpa, &roll, &grade);



return 0;

}
