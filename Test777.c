#include <stdio.h>
int main(void) {

    char letter11;
    char letter21;
    char letter31;
    char letter41;
    char letter00, letter20;

    printf("Please enter two letters: ");
    scanf("%c%c", &letter00, &letter20);
    printf("I read the letters %c and %c.\n", letter00, letter20);

    printf("Please enter two letters separated by a comma: ");
    scanf("%c,%c", &letter11, &letter21);

    printf("I read the letters %c and %c\n", letter11, letter21);

    printf("Please enter two letters separated by a space: ");

    scanf("%c %c", &letter31, &letter41);
    printf("I read the letters %c and %c.\n", letter31, letter41);

    return 0;
}
