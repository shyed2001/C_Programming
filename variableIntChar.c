#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    // Variables are containers to store various types of data.
    // To store in a program Give variables simple but easily recognized names.
    char characterName[]= "Tom"; // [] used for collection of char. Generally char is a single letter or bite.
    // This is called character array.
    char characterName1 = 'k'; // '' for char or single character.
    int characterAge = 34;
    // only have to assign variable types once in a program.
    printf(" There once were a man signed %c \n", characterName1); // Can use %c as placeholder for a single letter or character.
    printf(" There once were a man named %s \n", characterName); // Can use %s as placeholder for array of char or a string.
    // C programming does not have a variable type string.
    printf(" he was %d years old.\n", characterAge); // Can use %i or %d as placeholder for integers.
    printf(" He really liked the name %s\n", characterName);
    characterAge = 35;   // can change the value stored inside a variable.
    printf(" but did not like being %i.\n", characterAge);
    characterName1 = 'o'; // can change the value stored inside a variable.
    printf(" He did not like signed %c \n", characterName1);
    //characterName[]= "KKK"; // can not change the value stored inside a char[] type.
    printf(" He did not like the name %s \n", characterName);
        return 0;
}
