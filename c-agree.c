#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree?\n");

    if (c == 'Y' || c == 'y')
    {
        printf("Agreed");
    }

    else if (c == 'N' || c == 'n')
    {
        printf("Not Agreed\n");
    }


}
