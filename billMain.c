#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Bills{
    char   meal[8];
    double mealCost;
    double tipPercent;
    double taxPercent;
    double total;
}

int maint()
{
    struct Bills bill;

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

    // after we need to take an input from the user for the tax rate and tip percent

    // lastly we need to then use the inputs to print out a bill with the item, tax amount, tip amount, and the total

    return (0);
}