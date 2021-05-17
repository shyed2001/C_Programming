#include <stdio.h>

int main(void)
{
    puts(" Negate a logical condition using NOT ");
    puts(" Negate a logical condition using NOT ");

    int sunny = 0; // 0: cloudy, other value (1 for example): sunny
    int vacation = 0; // 0: working , other value (1 for example): vacation
    int NOTsunny = !sunny;

    if (NOTsunny)
    {
        puts("It's cloudy!\n");
    }

    sunny = 1; // 0: cloudy, other value (1 for example): sunny
    vacation = 0; // 0: working , other value (1 for example): vacation
    NOTsunny = !sunny;

    if (NOTsunny)
    {
        puts("It's cloudy!\n");
    }

    sunny = 0; // 0: cloudy, other value (1 for example): sunny
    vacation = 1; // 0: working , other value (1 for example): vacation
    int NOTsunnyANDvacation = !sunny && vacation;
    if (NOTsunnyANDvacation)
    {
        puts("It's cloudy but at least I am on vacation!\n");
    }

    sunny = 0; // 0: cloudy, other value (1 for example): sunny
    vacation = 0; // 0: working , other value (1 for example): vacation
    NOTsunnyANDvacation = !sunny && vacation;
    if (NOTsunnyANDvacation)
    {
        puts("It's cloudy but at least I am on vacation!\n");
    }


    int NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation)
    {
        puts("It's neither sunny nor am I on vacation!\n");
    }


    sunny = 1; // 0: cloudy, other value (1 for example): sunny
    vacation = 0; // 0: working , other value (1 for example): vacation

    NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation)
    {
        puts("It's neither sunny nor am I on vacation!\n");
    }


    sunny = 1; // 0: cloudy, other value (1 for example): sunny
    vacation = 1; // 0: working , other value (1 for example): vacation

    NOTsunnyANDNOTvacation = !sunny && !vacation;
    if (NOTsunnyANDNOTvacation)
    {
        puts("It's neither sunny nor am I on vacation!\n");
    }


    puts(" Branch using complex logical conditions ");
    puts(" Branch using complex logical conditions");


    int age;
    printf("What is your age?\n");
    scanf("%d",&age);
    int isAdult = age >= 18;
    int isSenior = age >= 65;
    int isInTheWorkForce = isAdult && !isSenior;

    if(isInTheWorkForce){
        printf("You are in the labor force\n");
    }

    else{
        printf("You are not in the labor force\n");
    }
 /// Previous version use more memory

    printf("What is your age?\n");
    scanf("%d",&age);
    isInTheWorkForce = ((age >= 18) && !(age >= 65));
    if(isInTheWorkForce){
        printf("You are in the labor force\n");
    }else{
        printf("You are not in the labor force\n");
    }

/// Previous version use more processor and less memory
    printf("What is your age?\n");
    scanf("%d",&age);
    if(age >= 18 && !(age >= 65)){
        printf("You are in the labor force\n");
    }else{
        printf("You are not in the labor force\n");
    }

/// Previous version use most processor and less memory


    return 0;

}
