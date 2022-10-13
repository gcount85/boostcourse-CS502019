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

    int *tmp = malloc(4*sizeof(int)); 
    if (tmp == NULL)
    {
        return 1; 
    }

    // 오래된 배열에서 새로운 배열로 정수를 복사
    for (int i=0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    free(list); // 기존 배열 free

    list = tmp; // 변수 사용을 위한 

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
}