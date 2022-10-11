#include <stdio.h>

int main()
{
    char *s = "EMMAa";
    char *t = "EMMAa";
    printf("%p\n", s);
    printf("%p\n", t);

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

}
