#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);


int main(void)
{
    int n = get_int("The number of scores: ");
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores %i: ", i+1);
    }
    printf("The average: %.1f\n", average(n, scores));

}

float average(int length, int array[]) 
// 함수 정의하는 부분이 파이썬보다 더 상세함, 
// C언어에서는 배열의 길이를 스스로 저장하지 않는다고 함.(파이썬이나 자바와 달리)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / length; // float로 형변환해서 보여주는 것. 형변환 좀 더 공부! 
}

