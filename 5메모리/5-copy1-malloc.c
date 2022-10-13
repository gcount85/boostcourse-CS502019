#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1); // malloc(memory allocation)은 비워진 메모리 영역의 첫 주소를 줌

    strcopy(t, s) // t에 s의 내용을 복사하는 함수 -> 작동기전은 아래 for 루프와 비슷하다

    for (int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i]; // 비워진 메모리에 문자열을 하나하나 복사
    }

    t[0] = toupper(t[0]);

    printf("s: %s\n", s); // emma
    printf("t: %s\n", t); // Emma 사본처럼 만들어졌다! 
}
