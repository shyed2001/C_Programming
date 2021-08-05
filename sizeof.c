/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
/// #include <dos.h>
#include <direct.h>
int main(void)
{
    printf("The amount of storage required for each of these types varies by platform.\\n");
    printf("\n C has a built-in sizeof operator that gives the memory requirements for a particular data type.\n");

    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    printf(" Memory Size of char is: %zu\n", sizeof(char));
    printf(" Memory Size of int is: %zu\n", sizeof(int));
    printf(" Memory Size of double is: %zu\n", sizeof(double));

    printf(" Memory Size of char is:  %zu\n", sizeof(c));
    printf(" Memory Size of int is: %zu\n", sizeof(i));
    printf("Memory Size of double is: %zu\n", sizeof(d));


    /// printf("Memory Size of bool is: %ld byte \n", sizeof(bool));   /// This line causes error.
    printf("Memory Size of char is: %ld byte\n", sizeof(char));
    printf("Memory Size of int is: %ld byte\n", sizeof(int));
    printf("Memory Size of float is: %ld byte\n", sizeof(float));
    printf("Memory Size of long is: %ld byte\n", sizeof(long));
    printf("Memory Size of long long is: %ld byte\n", sizeof(long long));
    printf("Memory Size of double is: %ld byte\n", sizeof(double));
    printf("Memory Size of long double is: %ld byte\n", sizeof(long double));
    printf("Memory Size of string is: ?????? byte\n");

         return 0;
}


/*
Every programming language has in-built types to differentiate between the nature of various data (input or output or intermediate). Integer is a common data type which is widely use in general programming and in scientific computing.

Integer is defined as a number which has no fractional component. Numbers which have a fractional component is known floating point numbers. Despite the fact that floating point numbers can represent numbers accurately, integers have their own place in the world of computing due to:

Integers consumes significantly less space than Floating point numbers
Calculations using integers are much faster (over 2 times) due to hardware architecture
In C programming language, integer data is represented by its own datatype known as int. It has several variants which differs based on memory consumption includes:

int
long
short
long long
Usage
In C, one can define an integer variable as:


int main()
{
   int a = 1;
   short b = 1;
   long c = 1;
   long long d = 1;
}CCopy
Signed and Unsigned version
As the range of numbers determined by a datatype like int is limited and both negative and positive numbers are required, we have two options:

signed integers: range is equally divided among negative and positive numbers (including 0)
unsigned integers: range starts from 0 to the upper positive number limit
Hence, unsigned integers are used when:

negative numbers are not required
increase the range of positive number by double
One can defined an unsigned integer by placing the keyword unsigned before the usual declaration/ initialization like:

int main()
{
   unsigned int a = 1;
   unsigned long b = 1;
}CCopy
The default declaration is the signed version signed.


Hence, there are 8 possible types for integer:

int
unsigned int
short
unsigned short
long
unsigned long
long long
unsigned long long
Format specifier
To print a value in C using printf, one needs to specify the datatype of the data to be printed. The format specifier of each variant of integer datatype is different in C.

For instance, int datatype has %d as the format specifier.

Following code demonstrates the idea:

int main()
{
   unsigned int a = 1;
   int b = 1;
   unsigned long c = 1;
   long long d = 1;
   printf("%u", a);
   printf("%d", b);
   printf("%lu", c);
   printf("%lld", d);
}CCopy
Range and memory consumption
One can find the memory consumed by a data type as follows:

int main()
{
    printf("size of int : %d\n",sizeof(int));
    printf("size of signed int : %d\n",sizeof(signed int));
    printf("size of unsigned long : %d\n",sizeof(unsigned long));
    return 0;
}CCopy
Ideally, memory consumed by the signed and unsigned variants are the same. It only differs in the range.

If Integer data type int is of 4 bytes, then the range is calculated as follows:

4 bytes = 4 X 8 = 32 bits

Each bit can store 2 values (0 and 1)

Hence, integer data type can hold 2^32 values

In signed version, the most significant bit is reserved for sign. So, 0 denotes positive number and 1 denotes negative number.

Hence

range of unsigned int is 0 to 2^32-1
range of signed int is -2^31 to 2^31-1
The exact value of memory and range depends on the hardware but remains same across several hardware types. Following table summarizes the values:

DATA TYPE	SIZE (IN BYTES)	RANGE	FORMAT SPECIFIER
int	4	-2147483648 to 2147483647	%d
unsigned int	4	0 to 4294967295	%u
short	2	-32768 to 32767	%hd
unsigned short	2	0 to 65535	%hu
long	8	-9223372036854775808 to 9223372036854775807	%ld
unsigned long	8	0 to 18446744073709551615	%lu
long long	8	-9223372036854775808 to 9223372036854775807	%lld
unsigned long long	8	0 to 18446744073709551615	%llu
In some platforms, long long and long refer to the same size but in other platforms, long long can be double the size of long.

In general, the rules are:

signed and unsigned version will have the same size
size of int is 4 bytes
size of short <= size of int
size of int <= size of long
size of long <= size of long long
Integer overflow
As we have seen that each integer datatype has a fixed range beyond which it will fail. In case, a number falls beyond the range of a datatype, then the code will wrap around to give an errorneous result.

Consider the case of int where the range is -2147483648 to 2147483647.

Key points to note in case of signed int are:

The number after 2147483647 is -2147483648.
The number after -2147483648 is -2147483647
2147483648 is represented as -2147483648 as it is wrapped around

*/
