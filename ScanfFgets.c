/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
printf(" \n In C \n \n"); /// %s is used for printing string

int age;

printf("Enter your age:  \n");
scanf(" %d", &age);  /// & is a pointer.
printf("your age: %d \n", age);

double gpa;

printf("Enter your gpa:   \n");
scanf(" %lf", &gpa);  /// & is a pointer.
printf("your gpa: %f\n", gpa);

char grade;

printf("Enter your grade:   \n");
scanf(" %c", &grade);  /// & is a pointer.
printf("your grade: %c\n", grade);

char name[19];
///[19] is used to limit the input char number.
printf("Enter your name:   \n");

scanf(" %s", name); ///[19] is not needed. For string does not need pointers &
printf("your name: %s\n", name);
printf("but scanf will not take string value after first space.");
printf("So we have to use fgets for only strings, fgets dont get values like int floar double etc.");

;

printf("Enter your name:   \n");

char name22[19];

fgets(name22, 19,  stdin); ///19 is not needed to limit the input buffer overflow.
///stdin for standard input.
printf("your name: %s named.\n", name22);
/// above code works separately .

return 0;

}
