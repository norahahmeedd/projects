#include <cs50.h>
#include <stdio.h>

void print_row(int hashes, int height);
int main(void)
{
    // prompt user for height ;
    int height;
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8);
    // to print a pyrmaid ;
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1, height);
    }
}
// to print a single row of pyramid :
void print_row(int hashes, int height)
{
    // to make space (right alien);
    for (int i = 0; i < height - hashes; i++)
    {
        printf(" ");
    }

    // to print out a right row
    for (int i = 0; i < hashes; i++)
    {
        printf("#");
    }
   printf("\n");
}
