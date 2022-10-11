#include <stdio.h>

int main(void)
{
    int x;
    printf("x를 입력하세요: ");
    scanf("%i", &x); // 사용자가 입력한 값을 x 주소에 저장함
    printf("x: %i\n", x);

    char *s; // 문자열의 주소를 저장하는 포인터 변수 
    printf("s를 입력하세요: ");
    scanf("%s", s); // char *는 이미 주소이므로 &s라고 쓸 필요 없음. 
    printf("s: %s\n", s);
    
    char a[5]; // 메모리까지 지정해줘서 스트링 배열 변수를 지정
    printf("a를 입력하세요: ");
    scanf("%s", a); // 컴파일러는 문자 배열의 이름을 포인터처럼 다룸! 
    printf("a: %s\n", a);

}
