#include <stdio.h>
#include <cs50.h> // get_int라는 함수를 이용하기 위해 cs샌드박스에서 미리 정의한 라이브러리

int main(void)
{
    int age = get_int("what's your age?\n");
    int days = age * 365;
    printf("You are %i old\n", days);
}
