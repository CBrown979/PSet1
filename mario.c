#include <cs50.h>
#include <stdio.h>

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