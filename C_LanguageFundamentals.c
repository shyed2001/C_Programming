#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{

    puts(" Activity: more complex if statements: costly hotel rooms ");
    puts(" Activity : complex logic conditions to find hostel cost (External resource) ");



    puts(" The hostel in which you stop for the night changes its prices \n \
         according to the age of the customer and the weight of their luggage. \n \
        The rules are not very clear, so you decide to write a small program that \n \
         will easily allow you and your travel companions to know the price of one  \n \
         night. \n \ One room costs nothing if you are 60 (the age of the innkeeper), \n \
          or 5 dollars if you are less than 10 years old. For everyone else, \n \
          the cost is 30 dollars plus an additional 10 dollars if you bring more \n \
           than 20 pounds of luggage. Your program should read the customer's  \n \
           age first, then the weight of their luggage, then output the price they \n \
            have to pay. \n \
Example \n \
Input: \n \
22 \n \
25 \n \
Output: \n \
40 \n \   \n \ ") ;


    double weightOfBags = 0;
    double inkeeperAge = 0;
    /// int costofHotel = 0 ;


    puts (" Please input Age and Weight of luggage ");

    scanf("%lf %lf", &inkeeperAge, &weightOfBags );

    if (inkeeperAge == 60)
    {
        puts("0");
    }

    else if (inkeeperAge < 10 )

    {
        puts("5");
    }

    else
    {
        if (weightOfBags < 20)

            puts("30");

        else
            puts("40");

    }











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

    if(isInTheWorkForce)
    {
        printf("You are in the labor force\n");
    }

    else
    {
        printf("You are not in the labor force\n");
    }
/// Previous version use more memory

    printf("What is your age?\n");
    scanf("%d",&age);
    isInTheWorkForce = ((age >= 18) && !(age >= 65));
    if(isInTheWorkForce)
    {
        printf("You are in the labor force\n");
    }
    else
    {
        printf("You are not in the labor force\n");
    }

/// Previous version use more processor and less memory
    printf("What is your age?\n");
    scanf("%d",&age);
    if(age >= 18 && !(age >= 65))
    {
        printf("You are in the labor force\n");
    }
    else
    {
        printf("You are not in the labor force\n");
    }

/// Previous version use most processor and less memory



    puts(" Activity: if statements, name that tree ");
    puts(" Activity: Negative logic to name tree (External resource)");


    puts("  As you cross a forest you can't help but admire the nature around \n \
          you including the many species of trees. Despite your interest, \n \
         you are a very unskilled botanist and have a lot of trouble identifying \n \
         different trees. A friend gives you some guidance and you decide \n \
         to write a program that will give you the name of the tree based on its \n \
         characteristics.    \n \  There are 4 types of trees: \n \
the \"Tinuviel\" is 5 meters high or less and its leaves are composed of 8 or more leaflets \n \
the \"Calaelen\" is 10 meters high or more and its leaves are composed of 10 or more leaflets \n \
the \"Falarion\" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets \n \
the \"Dorthonion\" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets \n \
Your program should read the height and the number of leaflets of a given tree (both integers), \n \
         and should be able to determine and display the name of the corresponding tree. \n \
          If the height and number of leaflets does not match any of the tree type descriptions, your program should display \"Uncertain\". \n \  ");

    int treeHeight = 0 ;
    int numOftreeLeaflets = 0 ;

    char* TreeName;

    char treeName[77];

    puts(" Input height and the number of leaflets of a given tree (both integers) separated by space");

    scanf("%d %d", &treeHeight ,&numOftreeLeaflets );


    if(treeHeight <= 5 && numOftreeLeaflets>= 8 )
    {
        //puts("Tinuviel");// do something
        TreeName = "Tinuviel";
        printf("%s", TreeName);  /// https://stackoverflow.com/questions/10298819/how-does-printf-display-a-string-from-a-char
    }
    else if(treeHeight >= 10 && numOftreeLeaflets>= 10)
    {
        //puts("Calaelen");// do something else

        treeName[77] = "Calaelen";
       TreeName = "Calaelen";
       printf("%s", TreeName);

       // printf("%s", treeName); // %s is format specifier
    }

        else if(treeHeight <= 8 && numOftreeLeaflets<= 5)
    {
        puts("Falarion"); // do something else
    }

        else if(treeHeight >= 12 && numOftreeLeaflets<= 7)
    {
         puts("Dorthonion"); // do something else
    }


    else
    {
        puts("Uncertain"); // do something if neither something1 or something2 is true
    }

    free(treeName[77]);



    /// https://www.programmingsimplified.com/c/program/print-string



    return 0;

}
