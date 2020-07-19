/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    double num1;
    double num2;
    char operators;

    printf("Enter the first number for calculation:   ");
    scanf("%lf", &num1);

    printf("Enter the operator of calculation, : + or - or * or /  ");
    scanf("  %c", &operators);  /// Must give a space in front of %c to scan char.

    printf("Enter the second number for %c:   ", operators);
    scanf("%lf", &num2);


    if (operators == '+'){
        printf("Ans =%f", num1 + num2);
    }
     else if (operators == '-'){
        printf("Ans =%f", num1 - num2);
    }
      else if (operators == '*'){
        printf("Ans =%f", num1 * num2);
    }

      else if (operators == '/'){
        printf("Ans =%f", num1 / num2);
    }
       else {
        printf("Invalid Operator, please restart");
       }
return 0;

}
