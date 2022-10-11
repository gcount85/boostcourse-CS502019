#include <stdio.h>

int main(void)
{
    char *s = "EMMA"; // 실제로 C에서 스트링을 정의하는 방법!
    printf("%s\n", s);

    printf("%p\n", s); // EMMA의 이름이 저장된 주소와
    printf("%p\n", &s[0]); // EMMA의 이름의 첫 글자가 저장된 주소는 서로 같다!  
    
    printf("%p\n", &s[1]); // 연속된 주소가 출력된다
    printf("%p\n", &s[2]); 
    printf("%p\n", &s[3]);

    printf("%c\n", s[4]); // 공백 
    printf("%c\n", s[5]); 

}