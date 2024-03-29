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
    printf("The amount of storage required for each of these types varies by platform.\\n");
    printf("\n C has a built-in sizeof operator that gives the memory requirements for a particular data type.\n");

  printf("int: %ld \n", sizeof(int));
  printf("float: %ld \n", sizeof(float));
  printf("double: %ld \n", sizeof(double));
  printf("char: %ld \n", sizeof(char));

    int age = 30;
    int * pAge = &age;  /// *pAge stores the memory address of variable age. & is pointer sign.
    double gpa = 3.3;
    double *pGpa = &gpa;  /// Use the data type of the variable type.
    float roll = 43.0;
    float *pRoll = &roll;
    char grade = 'A';
    char *pGrade = &grade;
    char grades [] = "Bill Gates";
    char *pGrades = &grades;

    printf(" \n Pointer is a type of data that stores the physical memory address of a variable \n");

    printf("\n age memory address : %p, \n gpa memory address: %p,\n roll memory address : %p,\n grade memory address: %p, \n grades memory address; %p \n", &age, &gpa, &roll, &grade, &grades);

    printf("\n print out all the memory addresses from pointer variables.\n");
    printf("\n %p \n " , pAge);
    printf("\n %p \n " , pGpa);
    printf("\n %p \n " , pRoll);
    printf("\n %p \n " , pGrade);
    printf("\n %p \n " , pGrades);
return 0;

}
