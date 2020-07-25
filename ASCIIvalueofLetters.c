/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
/**#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include <stdbool.h>**/


int main(void)

{

printf (" ASCII - American Standard Code for Information Interchange  \n\n");

printf (" From ASCII 0 to 32 No character.\n\n ");
printf (" From ASCII 49 to 57  are numbers from 0 to 9.\n\n  ");
printf (" From ASCII 65 to 90  are numbers from A to Z \n\n");
printf (" From ASCII 97 to 122  are numbers from a to z \n\n");

printf (" Control Characters (0–31 & 127): Control characters are not printable characters.\n They are used to send commands to the PC or the printer and are based on telex technology.\n With these characters, you can set line breaks or tabs.\n Today, they are mostly out of use \n\n");
printf (" Special Characters (32–47 / 58–64 / 91–96 / 123–126): Special characters include all printable characters \n that are neither letters nor numbers. These include punctuation or technical,\n mathematical characters. ASCII also includes the space \n(a non-visible but printable character), and, therefore, \n does not belong to the control characters category,\n as one might suspect. \n\n");
printf (" Numbers (30–39): These numbers include the ten Arabic numerals from 0-9. \n\n");
printf (" Letters (65–90 / 97–122): Letters are divided into two blocks, with the first group \n containing the uppercase letters and the second \n group containing the lowercase.  \n\n");

printf (" Definition ASCII Character encoding is the American Standard \nCode for Information Interchange, and is the US precursor to ISO 646 \n(internationally defined character sets). ASCII is a 7-bit code, meaning that 128\n characters (27) are defined. The code consists of 33 non-printable and \n 95 printable characters and includes both letters,\n punctuation marks, numbers and control characters. \n\n");
printf (" ASCII code: benefits and areas of application : \n   ASCII is still widely used today, even though UTF-8 \n has become more important when presenting a text. \n However, Unicode has only been displacing the old character encoding method used \n during the early days of the internet since 2008. The advantage of using UTF-8 \n is that the code is almost backwardly compatible: \n ASCII is a subset of UTF-8, so the first 128 characters are identical. \n Since ASCII can be considered the lowest common denominator of most new encoding forms, \n the old encoding method is still used in emails and URLs. \n In addition, ASCII has long been used for artistic purposes as well as \n technical ones: ASCII art uses exclusively printable \n ASCII table characters to produce creative works. \n The spectrum ranges from lettering, to simple stick figures, to real paintings. \n ASCII artists use the different brightness levels of individual \n characters to create light and shade in their artworks.  \n\n");
printf (" From  \n\n");
printf (" From  \n\n");
printf (" From  \n\n");
printf (" From  \n\n");
printf (" From  \n\n");
printf (" From  \n\n");
printf (" From  \n\n");
printf (" From  \n\n");


 int ch;

   for( ch = 0 ; ch <= 127; ch++ )
   {
      printf("ASCII value = %d, Character = %c\n", ch , ch );
   }

     for( ch = 128 ; ch <= 255; ch++ )
   {
      printf("Extended  Table ASCII value = %d, Character = %c\n", ch , ch );
   }

        for( ch = 266 ; ch <= 301; ch++ )
   {
      printf("Continued Experimental Repeated from 0 ASCII value = %d, Character = %c\n", ch , ch );
   }

return 0;

}
