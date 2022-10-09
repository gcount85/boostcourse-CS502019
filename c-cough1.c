#include <stdio.h>
#include <cs50.h>
void cough(int n); // 이걸 추가해줘야 함(프로토타입 이라고 부름)

int main(void)
{
    int n = get_int("n: ");
    cough(n);

}


void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("cough\n");
    }
}

