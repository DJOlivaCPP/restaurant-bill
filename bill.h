#include <stdio.h> 
#include <stddef.h>

typedef struct{
    char   meal[8];
    double mealCost;
    double tipPercent;
    double taxPercent;
    double total;
} Bills;