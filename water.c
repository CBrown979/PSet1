#include <cs50.h>
#include <stdio.h>

//prjm - Add a few more comments to the code.  For example, before going into the loops and the conditional.  Why are these being done?
//prjm - Variables could be more descriptive.
//prjm - Code does what it is supposed to do

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