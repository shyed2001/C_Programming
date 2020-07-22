#include <stdio.h>
#include <stdlib.h>

int main()
{    ///The sizeof operator is the most common operator in C. It is a compile-time unary operator and used to compute the
    ///size of its operand. It returns the size of a variable. It can be applied to any data type, float type, pointer type
   /// variables. When sizeof() is used with the data types, it simply returns the amount of memory allocated to that data type.
    /// The output can be different on different machines like a 32-bit system can show different output while a 64-bit system
    /// can show different of same data types. Here is an example in C language.

    int a = 16;
    printf("When int a = 16; Size of variable a : %d\n",sizeof(a));
    printf("int:%ld\n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("double: %ld \n", sizeof(double));
    printf("char: %ld \n", sizeof(char));
    printf("long: %ld \n", sizeof(long));

    /// When the sizeof() is used with an expression, it returns the size of the expression. Here is an example.

   char A = 'S';
   double B = 4.65;
   printf("when    char A = 'S'; and double B = 4.65;\n");
   printf("Size of variable A : %d\n",sizeof(A));
   printf("Size of an expression : %d\n",sizeof(A+B));
   int s = (int)(A+B);
   printf(" int s = (int)(A+B); Size of explicitly converted expression : %d\n",sizeof(s));

   // Reference : https://www.tutorialspoint.com/sizeof-operator-in-c#:~:text=The%20sizeof%20operator%20is%20the,float%20type%2C%20pointer%20type%20variables.

   return 0;




}
