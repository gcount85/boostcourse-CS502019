#include <stdio.h>

void draw(int h);


int main(void)
{
    int height = 5;
    draw(height);
}

void draw(int h)
{
    // 재귀의 종료 조건
    if (h == 0)
    {
        return;
    }

    // 마지막 경우에서 한 단계 전을 생각한다 -> h-1 사이즈의 피라미드를 그리는 것    
    draw(h-1);

    // 마지막 완성을 위해 해야할 일 -> h사이즈의 피라미드를 그린다! 
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");

}

