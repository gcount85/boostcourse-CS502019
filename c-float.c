#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float price = get_float("what's the price?\n");
    printf("Your total is %.2f.\n", price * 1.1);

}
