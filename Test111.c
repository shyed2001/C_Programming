/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
printf("Comments tag // \n");
printf("Comments tag // \n");
printf("Multi line Comments tag /*  */ \n");
printf("Comments tag /// \n");




    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));

    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(i));
    printf("%zu\n", sizeof(d));


    printf("%zu\n", sizeof(listChar));
    printf("%zu\n", sizeof(listInt));
    printf("%zu\n", sizeof(listDouble));



        double dnum1 = 0.25;

    printf("double dnum1 = 0.25; the number is %lf\n", dnum1);

    printf("double dnum1 = 0.25; the number is %.20lf\n", dnum1);

    printf(" double dnum1 = 0.25;the number is %.40lf\n", dnum1);


    double dnum2 = 0.3;

        printf(" double dnum2 = 0.3 the number is %lf\n", dnum2);

    printf(" double dnum2 = 0.3 the number is %.20lf\n", dnum2);

    printf(" double dnum2 = 0.3 the number is %.40lf\n", dnum2);



        long double ldnum1 = 0.25;

    printf("long double ldnum1 = 0.25; the number is %Lf\n", ldnum1);

    printf("long double ldnum1 = 0.25; the number is %.20Lf\n", ldnum1);

    printf(" long double ldnum1 = 0.25;the number is %.40Lf\n", ldnum1);



    long double ldnum2 = 0.3;

        printf(" long double ldnum2 = 0.3 the number is %Lf\n", ldnum2);

    printf(" long double ldnum2 = 0.3 the number is %.20Lf\n", ldnum2);

    printf(" long double ldnum2 = 0.3 the number is %.40Lf\n", ldnum2);



             long long llnum1 = 0.25;

    printf("long long llnum1 = 0.25; the number is %lld\n", llnum1);

    printf("long long llnum1 = 0.25; the number is %.20lld\n", llnum1);

    printf(" long long llnum1 = 0.25; the number is %.40lld\n", llnum1);



    long long llnum2 = 0.3;

        printf(" long long llnum2 = 0.3 the number is %lld\n", llnum2);

    printf(" long long llnum2 = 0.3 the number is %.20lld\n", llnum2);

    printf(" long long llnum2 = 0.3 the number is %.40lld\n", llnum2);



        long long llnum3 = 4;

        printf(" long long llnum3 =4 the number is %lld\n", llnum3);

    printf(" long long llnum3 = 4 the number is %.20lld\n", llnum3);

    printf(" long long llnum3 = 4 the number is %.40lld\n", llnum3);


    float fnum1 = 0.10;

    printf(" float fnum1 = 0.10 the number is %f\n", fnum1  );

    printf("float fnum1 = 0.10 the number is %.20f\n", fnum1 );

    printf(" float fnum1 = 0.10 the number is %.40f\n", fnum1 );



       float fnum2 = 0.25;

    printf(" float fnum2  = 0.25 the number is %f\n", fnum2  );

    printf("float fnum2  = 0.25 the number is %.20f\n", fnum2  );

    printf(" float fnum2  = 0.25 the number is %.40f\n", fnum2  );



    float fnum3 = 0.30;

    printf(" float fnum3  = 0.30 the number is %f\n", fnum3  );

    printf("float fnum3  = 0.30 the number is %.20f\n", fnum3  );

    printf(" float fnum3  = 0.30 the number is %.40f\n", fnum3  );





  return 0;
}



