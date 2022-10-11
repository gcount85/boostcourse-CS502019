#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int)); // int 10개를 담을 공간을 할당 
    x[10] = 0; // x[10]은 할당한 메모리 범위 밖이다 -> 버퍼 오버플로우!
    free(x); // malloc 해제
}

int main(void)
{
    f();
    return 0;
}

