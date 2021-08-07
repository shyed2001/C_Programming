#include<stdio.h>
#include<stdlib.h>

void reverseArray(int * ARR);
void SWAPpointer(int * a, int * b);

int main (void)
{
  char z;
 printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");
  puts("hello world");
  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");
 puts("press any key to exit");
 scanf("%c",z);


 printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");



   int ARRAY[6];
    puts (" Please enter 6 array integer elements with spaces");

     int value = 0;
    for (int i = 0; i < 6; i++)
    {

        scanf("%d",&value);
        ARRAY[i] = value;

    }

  //printf("%d %d",ARRAY[0],ARRAY[5]);
  //printf("%d %d",ARRAY[1],ARRAY[4]);
  //printf("%d %d",ARRAY[2],ARRAY[4]);


    reverseArray(ARRAY);

       for (int i = 0; i < 6; i++)
    {

        printf("%d ",ARRAY[i]);

    }





  return 0;

}
void reverseArray(int * ARR)

{

SWAPpointer(ARR[0],ARR[5]);
SWAPpointer(ARR[1],ARR[4]);
SWAPpointer(ARR[2],ARR[3]);

}

void SWAPpointer(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

