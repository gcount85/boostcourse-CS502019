#include <stdio.h>

int main(void)
{
    int scores[3]; // 값 세개를 scores 변수에 저장하겠다는 선언
    scores[0] = 10;
    scores[1] = 11;
    scores[2] = 12;
    printf("Average: %i\n", (scores[0]+scores[1]+scores[2])/3);
}
