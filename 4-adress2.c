#include <stdio.h>

int main(void)
{
    char *s = "EMMA"; // 실제로 C에서 스트링을 정의하는 방법!
    printf("%s\n", s); // 왜 S를 출력하면 한글자(E)만 나오는 것이 아니라 전체 문자가 나오는가? 
                       // printf의 형식지정자(%s)가 그렇게 하도록 도와줌
    printf("%c\n", *s);

    printf("%c\n", *(s+1)); // S의 그 다음 주소로 가서 문자열을 출력해줘 

}