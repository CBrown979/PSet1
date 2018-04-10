#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Minutes: ");
    }
    while (n < 0);

    if (n >= 0)
    {
        // printf("Minutes: %i\n", n);

        int total = n * 12;
        //1 minute = 12 bottles of water -- n * 12

        printf("Bottles: %i\n", total);
    }
}