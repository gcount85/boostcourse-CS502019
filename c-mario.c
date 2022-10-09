#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{

    int n = get_positive_int();

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("□");
        }
        printf("\n");
    }

}

int get_positive_int(void)
{
    int n;
    do 
    {
        n = get_int("n: ");
    }
    while (n < 0);
    return n;   
}



