/// malloc-free

#include<stdio.h>
#include<stdlib.h>
int main ()
{
int *p = (int *)malloc(sizeof (int)) ;
*p = 0x8F7E1A2B;

printf ("%X\n", *p);/// 8F78142B
unsigned char *q = p;
printf ("%p\n", q);
printf ("%X\n", *q++); // 2B
printf ("%p\n", q);
printf ("%X\n", *q++); // 1A
printf ("%p\n", q);
printf ("%X\n", *q++); // 7E
printf ("%p\n", q);
printf ("%X\n", *q++); // 8F
printf ("%p\n", q);
free(p) ;
/// NPTEL MOOCs Programming in C++

}
