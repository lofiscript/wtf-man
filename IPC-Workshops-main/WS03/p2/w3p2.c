/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char coffeeType1, coffeeType2, coffeeType3;
    int bagWeight1, bagWeight2, bagWeight3;
    char cream1, cream2, cream3;
    char coffeeStr;
    char creamPref;
    int dailyServings;


    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType1);
    printf("Bag weight (g): ");
    scanf(" %d", &bagWeight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream1);
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType2);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream2);
    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType3);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream3);

    printf("\n\n");
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", coffeeType1 == 'l' || coffeeType1 == 'L', coffeeType1 == 'm' || coffeeType1 == 'M', coffeeType1 == 'r' || coffeeType1 == 'R', bagWeight1, bagWeight1 / GRAMS_IN_LBS, cream1 == 'y' || cream1 == 'Y');
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", coffeeType2 == 'l' || coffeeType2 == 'L', coffeeType2 == 'm' || coffeeType2 == 'M', coffeeType2 == 'r' || coffeeType2 == 'R', bagWeight2, bagWeight2 / GRAMS_IN_LBS, cream2 == 'y' || cream2 == 'Y');
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", coffeeType3 == 'l' || coffeeType3 == 'L', coffeeType3 == 'm' || coffeeType3 == 'M', coffeeType3 == 'r' || coffeeType3 == 'R', bagWeight3, bagWeight3 / GRAMS_IN_LBS, cream3 == 'y' || cream3 == 'Y');
    
    printf("\n\nEnter how you like your coffee...\n\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffeeStr);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamPref);
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServings);
    printf("\nThe below table shows how your preferences align to the available products:");
    printf("\n\n");
    printf("--------------------+-------------+--------+\n");
    printf("  |     Coffee      |  Packaged   | With   |\n");
    printf("ID|      Type       | Bag Weight  | Cream  |\n");
    printf("--+-----------------+-------------+--------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", dailyServings >= 1 && dailyServings <= 4, dailyServings >= 1 && dailyServings <= 4, dailyServings >= 1 && dailyServings <= 4 && creamPref == 'y' || creamPref == 'Y');
    printf(" 2|       %d         |      %d      |   %d   |\n", dailyServings >= 5 && dailyServings <= 9, dailyServings >= 5 && dailyServings <= 9, dailyServings >= 5 && dailyServings <= 9 && creamPref == 'y' || creamPref == 'Y');
    printf(" 3|       %d         |      %d      |   %d   |\n", dailyServings >= 10, dailyServings >= 10, dailyServings >= 10 && creamPref == 'y' || creamPref == 'Y');
    printf("\n");
    printf("Hope you found a product that suits your likes!");


    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/