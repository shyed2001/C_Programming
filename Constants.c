/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#define NUM33 25
int main(void)
{

int num = 5;

printf("%d \n", num);

num = 8;

printf("%d \n", num);

///*Variables can be declared as constant using the const keyword or the #define preprocessor directive. Details about these are given as follows. The const keyword: Variables can be declared as constants by using the “const” keyword before the data-type of the variable. The constant variables can be initialized once only. The default value of constant variables are zero. A program that demonstrates the declaration of constant variables in C using const keyword is given as follows.*///

char *pset777 = " Variables can be declared as constant using the const keyword \n or the #define preprocessor directive. Details about these are given as follows. The const keyword:\n Variables can be declared as constants by using the “const” keyword before the data-type of the variable.\n The constant variables can be initialized once only. The default value of constant variables are zero.\n A program that demonstrates the declaration of constant variables in C using const keyword is given as follows \n puts(pset)  or printf[\" In C %s \" , pset777]; %s is used for format specifier printing string.";

printf(" \n In C %s \n \n" , pset777); /// %s is used for printing string

const int NUM = 7;
float const FAV_NUM = 77.77;
printf(" When const int NUM = 7; and float const FAV_NUM = 77.77; " );
   printf("The default value of variable NUM : %d", NUM);
   printf("\nThe value of variable FAV_NUM : %f", FAV_NUM);


///* The #define preprocessor directive Variables can be declared as constants by using the #define preprocessor directive as it declares an alias for any value. A program that demonstrates the declaration of constant variables in C using #define preprocessor directive is given as follows.   and #include <stdio.h>  #define NUM33 25 *///

char *pset = "The define preprocessor directive Variables can be \ndeclared as constants by using the #define preprocessor directive as it declares an alias for any value. \n A program that demonstrates the declaration of constant variables.\n In C using #define preprocessor directive is given as follows #include <stdio.h> #define num 25";

  puts(pset);

   printf("\n The value of num is: %d", NUM33);

return 0;

}
