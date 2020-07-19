/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

void sayHI();
void sayhi(char name[19]);
///name[7] = '\0'; this does not work ?
void sayhi2(char name2[19], int age);
int main(void)
{

sayHI();

printf(" \n Function / Methods/ Process  is a collection of codes that performs a specific task.");

sayhi("Mike");
sayhi("Mi=ke");
sayhi("Mi-ke");
sayhi("Mi_ke");


sayhi2("Mike", 25);
sayhi2("Mi=ke", 34);
sayhi2("Mi-ke", 52);
sayhi2("Mi_ke", 61);

return 0;

}

void sayHI()
{
    printf(" HI ");
}
/// Void function does not return any information.

void sayhi(char name[19])  /// Input values or parameters inside functions.
{
    ///name[7] = '\0'; this is not working ???
    printf(" \n HI %s \n ", name);
}


void sayhi2(char name2[19], int age) /// Input multiple values or parameters inside functions.
{
    ///name[7] = '\0'; this is not working ???
    printf(" \n HI %s, you are aged %d \n ", name2, age);
}
