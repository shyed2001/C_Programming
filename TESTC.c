#include<stdio.h>

int main (void)
{
  char z;

  printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");
  puts("hello world");
  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");
 puts("press any key to exit");
 scanf("%c",z);


 printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");


 /// What is the largest integer that you could store in the system?
 /// Be aware of the largest possible value for an integer!
 /// Be aware of the largest possible value for an integer!


   char VariableDataType;
   int TotalDatatTypeMemorySizeofVariables= 0;
    int NumberofthatVariable = 0 ;
    int intDatatTypeMemorySize, doubleDatatTypeMemorySize, charDatatTypeMemorySize, shortDatatTypeMemorySize ;


        puts("Firstly character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). ");
        puts("Please enter the Variable number followed by a space avter the type of variable ");

        scanf("%d %c", &NumberofthatVariable, &VariableDataType );

        if (VariableDataType == 'i')
        {
            intDatatTypeMemorySize = sizeof(int)* NumberofthatVariable;
            TotalDatatTypeMemorySizeofVariables = TotalDatatTypeMemorySizeofVariables  + intDatatTypeMemorySize ;
        }

        else if (VariableDataType == 'd')
        {
            doubleDatatTypeMemorySize = sizeof(double)* NumberofthatVariable ;
            TotalDatatTypeMemorySizeofVariables = TotalDatatTypeMemorySizeofVariables + doubleDatatTypeMemorySize;
        }

        else if (VariableDataType == 'c')
        {
            charDatatTypeMemorySize = sizeof(char)* NumberofthatVariable ;
            TotalDatatTypeMemorySizeofVariables = TotalDatatTypeMemorySizeofVariables + charDatatTypeMemorySize;
        }

        else
        {
            puts("Invalid tracking code type");
            printf("\n %c Invalid tracking code type \n", VariableDataType);
        }


    puts("\n");
    printf (" Total memory Size Required for Code Data storage is %d bytes \n", TotalDatatTypeMemorySizeofVariables );



  return 0;

}
