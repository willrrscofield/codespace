#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main (void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("percent off: ");
    float sale = discount(regular, percent_off);
    printf("sale price: %.2f" , sale);
    }

    float discount(float price, int percentage)
    {
        return price * (100-percentage) / 100
    }
