#include<stdio.h>

int main (void)
{

 /// What is the largest integer that you could store in the system?
 /// Be aware of the largest possible value for an integer!
 /// Be aware of the largest possible value for an integer!


    num = 0;
    do {
    printf("value of num: %d\n", num);
    num = num+1;
    }while( num > 0 );

        int num = 2147483645;
    int i;

    for (i=0; i<8; i++) {
        printf("%d\n", num);
        num = num+1;
    }


  return 0;

}
