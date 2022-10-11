#include <stdio.h>
#include <cs50.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a"); // FILE이라는 자료형에 변수명 file 선언

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number); // 해당 형식으로 이름과 넘버가 csv 파일에 추가된다! 

    fclose(file);

}
