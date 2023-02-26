#include <cs50.h>
#include <stdio.h>

int main (void)
{
    float regular=get_float("Regulat price: ");
    float sale=regular*.85;
    printf("sale price: %.2f\n", sale);
}