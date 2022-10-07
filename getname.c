#include <stdio.h>
#include <cs50.h> // CS50 sandbox 클라우드에 저장되어 있는 라이브러리! 

int main(void)
{
    string answer = get_string("what's your name?");
    printf( "hello, %s\n", answer );
}