/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

///printf("Enter your grade:   \n");
///char gd = scanf("  %c", &gd);  /// Input of grade.

char gd;

printf("Enter your grade, A or B or C or D (case sensitive):   \n");
scanf(" %c", &gd);  /// & is a pointer.
printf("your grade: %c\n", gd);


 switch(gd){

 case 'A':
 printf(" You did good, you got an grade A \n");
 break;  /// Without brake statements, all other functions will get executed. But not after this break.

  case 'B':
 printf(" You did ok, you got an grade B \n");
 break;

  case 'C':
 printf(" You did unsatisfying, you got an grade C \n");
 break;

  case 'D':
 printf(" You did poor , you got an grade D \n");
 break;


  case 'F':
 printf(" You failed, you got an grade F\n");
 break;

  default:
    printf("Invalid Grade");
  }

return 0;

}
