/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

struct Student
{

    char name[50];
    char major[50];
    int age;
    double gpa;

};


int main()
{

    struct Student rollno1;
    rollno1.age = 22;
    rollno1.gpa = 3.5;
    strcpy(rollno1.name, " Rohim");
    strcpy(rollno1.major, " science");

    printf(" \n %i \n", rollno1.age);
    printf("%d \n", rollno1.age);
    printf("%d \n", rollno1.gpa);
    printf("%f \n", rollno1.gpa);
    printf("%s \n", rollno1.name);

    struct Student rollno2;
    rollno2.age = 32;
    rollno2.gpa = 3.0;
    strcpy(rollno2.name, " Korim");
    strcpy(rollno2.major, " Political science");

    printf("\n %i \n", rollno2.age);
    printf("%d \n", rollno2.age);
    printf("%d \n", rollno2.gpa);
    printf("%f \n", rollno2.gpa);
    printf("%s \n", rollno2.name);

return 0;

}