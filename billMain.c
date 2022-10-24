#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "bill.h"

int main(int argc, char * args[])
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

    bill.tipPercent = atoi(args[1]) / 100;
    bill.taxPercent = atoi(args[2]) / 100;

    bill.total = bill.mealCost + (bill.mealCost * bill.tipPercent) + (bill.mealCost * bill.taxPercent);

    printf("Bill for: %s\n", bill.meal);
    printf("%s: $%f\n", bill.meal, bill.mealCost);
    printf("%f\% Tip: $%f\n", (bill.tipPercent*100), (bill.mealCost * bill.tipPercent));
    printf("%f\% Tax: $%f\n", (bill.taxPercent*100), (bill.mealCost * bill.taxPercent));
    printf("Total: $%d\n", bill.total);

    return 0;
}