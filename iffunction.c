/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

int max (int num1 , int num2, int num3);

int main(void)
{


printf(" Among 43, 34, 125- The Bigger number is: %d \n", max(43 ,34, 125));

 return 0;

}

   int max (int num1 , int num2, int num3)
 {

    /// && is and , both of the statement have to be true, for whole condition to be true.
        /// || is or, only one of the condition have to be true. for whole condition to be true.

           /// == is equality checker.


             /// != is not equal to. !(---) not true.

       int result;

   if (num1>=num2 && num1>=num3)   /// <=, >=, <, > , == or != can be used.

    /// true or false or ! ( ) can be used. != is not equal.
     /// !(==) negation operator. True becomes fslse, false becomes true.
      /// && this is and.
   {     /// || this is or.
       result = num1;
   }
   else if ( (num2>=num1 && num2>=num3))
    {
       result = num2;
    }
    else{

        result = num3;
    }
   return result;
 }
