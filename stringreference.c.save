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
#include <direct.h>
#include <math.h>
#include <stdbool.h>
#include<ctype.h>
#include<string.h>
#include<strings.h>

/// For more reference see https://www.programiz.com/c-programming/c-strings

int main(void)

{

char string[0]= "This is a test string";

printf (" string[] =  %s", string[0] );

return 0;

}


/**
C Programming Strings
In this tutorial, you'll learn about strings in C programming. You'll learn to declare them, initialize them and use them for various I/O operations with the help of examples.

In C programming, a string is a sequence of characters terminated with a null character \0. For example:

char c[] = "c string";
When the compiler encounters a sequence of characters enclosed in the double quotation marks, it appends a null character \0 at the end by default.

Memory diagram of strings in C programming

How to declare a string?
Here's how you can declare strings:

char s[5];
string declaration in C programming


Here, we have declared a string of 5 characters.

How to initialize strings?
You can initialize strings in a number of ways.

char c[] = "abcd";

char c[50] = "abcd";

char c[] = {'a', 'b', 'c', 'd', '\0'};

char c[5] = {'a', 'b', 'c', 'd', '\0'};
Initialization of strings in C programming

Let's take another example:

char c[5] = "abcde";
Here, we are trying to assign 6 characters (the last character is '\0') to a char array having 5 characters. This is bad and you should never do this.

Assigning Values to Strings
Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared. For example,

char c[100];
c = "C programming";  // Error! array type is not assignable.
Note: Use the strcpy() function to copy the string instead.

Read String from the user
You can use the scanf() function to read a string.

The scanf() function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).

Example 1: scanf() to read a string
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
Output

Enter name: Dennis Ritchie
Your name is Dennis.
Even though Dennis Ritchie was entered in the above program, only "Dennis" was stored in the name string. It's because there was a space after Dennis.

How to read a line of text?
You can use the fgets() function to read a line of string. And, you can use puts() to display the string.

Example 2: fgets() and puts()
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
Output

Enter name: Tom Hanks
Name: Tom Hanks
Here, we have used fgets() function to read a string from the user.

fgets(name, sizeof(name), stdlin); // read string

The sizeof(name) results to 30. Hence, we can take a maximum of 30 characters as input which is the size of the name string.

To print the string, we have used puts(name);.

Note: The gets() function can also be to take input from the user. However, it is removed from the C standard.

It's because gets() allows you to input any length of characters. Hence, there might be a buffer overflow.

Passing Strings to Functions
Strings can be passed to a function in a similar way as arrays. Learn more about passing arrays to a function.

Example 3: Passing string to a Function
#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);     // Passing string to a function.
    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}
Strings and Pointers
Similar like arrays, string names are "decayed" to pointers. Hence, you can use pointers to manipulate elements of the string. We recommended you to check C Arrays and Pointers before you check this example.

Example 4: Strings and Pointers
#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
}
Commonly Used String Functions
strlen() - calculates the length of a string
strcpy() - copies a string to another
strcmp() - compares two strings
strcat() - concatenates two strings

**/


/**
https://www.tutorialspoint.com/cprogramming/c_strings.htm

C - Strings
Advertisements
Ad by Valueimpression

 Previous PageNext Page
Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

The following declaration and initialization create a string consisting of the word "Hello". To hold the null character at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."

char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
If you follow the rule of array initialization then you can write the above statement as follows −

char greeting[] = "Hello";
Following is the memory presentation of the above defined string in C/C++ −

String Presentation in C/C++
Actually, you do not place the null character at the end of a string constant. The C compiler automatically places the '\0' at the end of the string when it initializes the array. Let us try to print the above mentioned string −

Live Demo
#include <stdio.h>

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("Greeting message: %s\n", greeting );
   return 0;
}
When the above code is compiled and executed, it produces the following result −

Greeting message: Hello
C supports a wide range of functions that manipulate null-terminated strings −

Sr.No.	Function & Purpose
1
strcpy(s1, s2);

Copies string s2 into string s1.

2
strcat(s1, s2);

Concatenates string s2 onto the end of string s1.

3
strlen(s1);

Returns the length of string s1.

4
strcmp(s1, s2);

Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.

5
strchr(s1, ch);

Returns a pointer to the first occurrence of character ch in string s1.

6
strstr(s1, s2);

Returns a pointer to the first occurrence of string s2 in string s1.

The following example uses some of the above-mentioned functions −

Live Demo
#include <stdio.h>
#include <string.h>

int main () {

   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;

   // copy str1 into str3 //
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   //* concatenates str1 and str2 //
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   // total lenghth of str1 after concatenation //
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );

   return 0;
}
When the above code is compiled and executed, it produces the following result −

strcpy( str3, str1) :  Hello
strcat( str1, str2):   HelloWorld
strlen(str1) :  10

**/
