#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "bill.h"

int main(int argc, char * argv[])
{
    Bills bill;

    time_t t;
    srand((unsigned)time(&t));
    int meal = rand()%4;

    switch (meal)
    {
    case 1:
        strcpy( bill.meal, "Salad");
        bill.mealCost = 9.95;
        break;
    case 2:
        strcpy( bill.meal, "Soup");
        bill.mealCost = 4.55;
        break;
    case 3:
        strcpy( bill.meal, "Sandwich");
        bill.mealCost = 13.25;
        break;
    case 4:
        strcpy( bill.meal, "Pizza");
        bill.mealCost = 22.35;
        break;
    }

    bill.tipPercent = atof(argv[1]) / 100;
    bill.taxPercent = atof(argv[2]) / 100;

    bill.total = bill.mealCost + (bill.mealCost * bill.tipPercent) + (bill.mealCost * bill.taxPercent);

    printf("Bill for: %s\n", bill.meal);
    printf("%s: $%.2lf\n", bill.meal, bill.mealCost);
    printf("%.2lf\% Tip: $%.2lf\n", (bill.tipPercent*100), (bill.mealCost * bill.tipPercent));
    printf("%.2lf\% Tax: $%.2lf\n", (bill.taxPercent*100), (bill.mealCost * bill.taxPercent));
    printf("Total: $%.2lf\n", bill.total);

    return 0;
}