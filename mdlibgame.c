/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

char Color[19];
char Plural_Nouns[19];
char Waves_Clouds[19];
char Sky_Ocean[19];

char firstname[19];
char lastname[19];

char firstname2[19];
char lastname2[19];

printf("Enter a color:  ");
scanf("%s", Color, 19 );

printf("Enter a plural noun:  ");
scanf("%s", Plural_Nouns, 19 );

printf("Enter a wave or cloud :  ");
scanf("%s", Waves_Clouds, 19 );


printf("Enter a Sky or Ocean:  ");
scanf("%s", Sky_Ocean, 19 );

printf("Enter First name:  ");
scanf("%s", firstname, 19 );

printf("Enter Last name:  ");
scanf("%s", lastname, 19 );

printf("Enter Full name:  ");
scanf("%s %s", firstname2, lastname2);

printf(" Roses are %s \n ", Color);

printf(" %s are blue \n ", Plural_Nouns);

printf(" %s are white \n ", Waves_Clouds);

printf(" %s is blue \n", Sky_Ocean); /// Scanf will only take in characters up to the first space after characters.

printf("My name is %s %s \n", firstname, lastname);

printf("My full name is %s %s \n", firstname2, lastname2);

/// This program has buffer overflow problems.


return 0;

}
