#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1; // 1은 뭔가 잘못됐단 뜻
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL)
    {
        return 1;
    }

    // 읽을 파일이 jpeg인지 확인함 
    unsigned char bytes[3]; // 3개 변수를 담을 배열 bytes를 선언
    fread(bytes, 3, 1, file); // 읽을 배열, 읽을 바이트 수, 읽을 횟수, 읽을 파일

    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("maybe\n");
    }
    else
    {
        printf("no\n");
        
    }

}


