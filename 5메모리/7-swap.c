#include <stdio.h>

// WOWow..! 
void swap(int *a, int *b)
{
    int tmp = *a; // *a의 의미는 'a라는 변수에 화살표가 있고 그 화살표가 가리키는 곳'을 의미함. 
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x = 1;
    int y = 2;
    printf("X is %i, Y is %i\n", x, y);
    swap(&x, &y);
    printf("X is %i, Y is %i\n", x, y);
}



