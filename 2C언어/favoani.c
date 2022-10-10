#include <stdio.h>
#include <cs50.h> // CS50 sandbox 클라우드에 저장되어 있는 라이브러리! 

int main(void)
{
    string answer = get_string("가장 좋아하는 동물은?");
    printf( "내가 가장 좋아하는 동물은 %s\n", answer );
}