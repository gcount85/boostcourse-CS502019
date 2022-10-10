#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h> // toupper()를 쓰기 위해 필요함 


int main(void)
{
    string s = get_string("name: ");
    for (int i = 0, n = strlen(s); i<n; i++)
    {
        printf("%c", toupper(s[i])); // 대문자로 바꾸는 함수
    }
    printf("\n");
}


