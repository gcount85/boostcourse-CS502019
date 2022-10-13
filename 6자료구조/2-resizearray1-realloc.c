#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // 말록을 이용해서 배열을 할당하고 resize 하는 방법
    
    int *list = malloc(3*sizeof(int)); 
    if (list == NULL)
    {
        return 1; // 메모리가 부족하면 잘못됐다고 반환, 메모리 할당할 때마다 확인하는 것이 좋다고 함
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // realloc을 이용해, 기존 배열을 복사, resize, 기존 배열 free까지 할 수 있음
    int *tmp = realloc(list, 4*sizeof(int)); 
    if (tmp == NULL)
    {
        return 1; 
    }
    list = tmp;
    list[3] = 4; // 새로운 리스트에 추가된 값 저장 

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list); // 메모리 누수 방지를 위해 realloc한 리스트 초기화
}