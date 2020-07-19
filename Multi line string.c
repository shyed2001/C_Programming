#include<stdio.h>
int main()
{
   // We can put two double quotes anywhere in a string
   char *str1  = "geeks""quiz";

   // We can put space line break between two double quotes
   char *str2  = "Qeeks"     "Quiz";
   char *str3  = "Qeeks"
                 "Quiz";

   puts(str1);
   puts(str2);
   puts(str3);

   puts("Geeks"        // Breaking string in multiple lines
        "forGeeks");

      char *str = "These are reserved words in C language are int, float,\n "
               "if, else, for, while etc. An Identifier is a sequence of\n"
               "letters and digits, but must start with a letter.\n "
               "Underscore ( _ ) is treated as a letter.\n Identifiers are "
               "case sensitive. Identifiers are used to name variables,"
               "functions etc.\n";
   puts(str);

   char *str77 = "An Identifier is a sequence of"
               "letters and digits, but must start with a letter. "
               "Underscore ( _ ) is treated as a letter. Identifiers are "
               "case sensitive. Identifiers are used to name variables,"
               "functions etc.";
   printf ("These are reserved words in C language are int, float, "
            "if, else, for, while etc. %s ", str77);

   return 0;
}
