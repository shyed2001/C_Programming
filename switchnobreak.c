/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

char gd = 'A';  /// Input of grade.

 switch(gd){

 case 'A':
 printf(" You did good, you got an grade A \n");


  case 'B':
 printf(" You did ok, you got an grade B \n");


  case 'C':
 printf(" You did unsatisfying, you got an grade C \n");
 break;   /// Without brake in previous statements, all other functions got executed. But not after this brake.

  case 'D':
 printf(" You did poor , you got an grade D \n");



  case 'F':
 printf(" You failed, you got an grade F\n");

  }

return 0;

}
