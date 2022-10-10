#include <stdio.h>
#include <cs50.h>
#include <string.h>

// 'person'이라고 하는 새로운 자료형을 정의 (마치 딕셔너리 같은은)
typedef struct 
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4]; 

    people[0].name = "EMMA";
    people[0].number = "617–555–0100";
    people[1].name = "RODRIGO";
    people[1].number = "617–555–0101";
    people[2].name = "BRIAN";
    people[2].number = "617–555–0102";
    people[3].name = "DAVID";
    people[3].number = "617–555–0103";
    
    string name = get_string("찾고 싶은 이름 대문자로: ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}

