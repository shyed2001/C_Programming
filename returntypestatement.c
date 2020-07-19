/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

float cube (float num);  /// This is prototype or a function signature.
int main(void)
{


printf(" Please learn about data types in C, int, float, double, long float, and their format specifiers etc. \n");
printf(" Please enter a value to cube function :   \n");

double cubevalues;  /// data type double can take in both float or integer.
scanf(" %lf" , &cubevalues);  /// %lf as scanf can take in both integer and float value or double values.

//fgets(cubevalues, 5,  stdin);
//float num2 = (1.0* cubevalues);
printf(" The user input is %f", cubevalues);
printf(" \n  %f to the power Cube, Answer is :  %f \n", cubevalues, cube(cubevalues));
/// can not use %d. have to use %f for %lf scanf.

printf(" With pre-programmed input of 2, 2 to the power 3, answer is %f \n ", cube(2));
  printf(" With pre-programmed input of 3, 3 to the power 3, answer is %f \n ", cube(3));


return 0;   /// This return ; keyword brakes us out of this function. Any code after this will not be executed.

}

float cube (float num)

{
    float answer = num*num*num;
    /// double answer = pow(num,num); can also be used.
    return answer;
    /// This return ; keyword brakes us out of this function. Any code after this will not be executed.
    /// return pow(num,num); can also be used without answer variable.
    /// return num*num*num); can also be used without answer variable.
}
