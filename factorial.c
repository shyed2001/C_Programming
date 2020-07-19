/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>


/// factorial(4) with recursive function.
int fact (int n);
int main(void)
{

printf(" answer is %d \n", fact(4));

return 0;

}

int fact (int n)
{
    if (n==1)
    {
        return 1;
    }

    else
    {
        return  n*fact(n-1);
    }

    return ;
}
