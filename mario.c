#include <stdio.h>
#include <cs50.h>

int main (void)
{
int n;
    do
    {
        n=get_int("Size: ");
    }
    while (n<1);

    // for each row
    for (int i=0; i<n; i++)
    {

            //for each column
            for (int s=0; s<n; s++)
            {
                //print a brick
                printf("#");
            }

            // move to next row
            printf("\n");
    }