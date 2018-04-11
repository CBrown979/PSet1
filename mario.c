#include <cs50.h>
#include <stdio.h>

// prjm - Similar to in water.c, I would add comments before each function, loop, and conditional to describe what each is going to do.
// prjm - Ran style50 and it produced several suggestions for adding and removing spaces:
// prjm - In line 17, it suggests a space between "while" and "("
// prjm - line 20, a space between "for" and "(", a space between "i" and "=", a space between "=" and "0", a space between "i" and "<", and a space between "<" and "height"
// prjm - Similar spacing issues occur in the for loop in lines 26 and 31
// prjm - None of the spacing comments effect the code.  Just a nitpicky style50 thing.


int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while(height < 0 || height > 23);

    for(int i=0; i<height; i++)
    {
        int spaces = height-i;
        int hashes = height-spaces;

        for(int j=spaces-2; j>=0; j--)
        {
            printf(" ");
        }

        for(int k=0; k<hashes; k++)
        {
            printf("#");

        }

        printf("##\n");//start off printing 2 hashes

    }
    //Pattern - if height is 8
    // row1 = 2 #, 7 spaces
    // row2 = 3, 6
    // row3 = 4, 5
    // row4 = 5, 4
    // row5 = 6, 3
    // row6 = 7, 2
    // row7 = 8, 1
    // row8 = 9, 0

    //print spaces, hashes, new line

}