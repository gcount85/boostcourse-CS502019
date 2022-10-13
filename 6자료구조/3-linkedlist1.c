#include <stdio.h>

typedef struct node // 'node 구조체'를 정의하기
{
    int number;
    struct node *next;
    // next라는 포인터 변수에는 여기서 정의하는 지와 똑같은 node라는 struct를 가리킴 -> 그냥 int *next; 가 아니라.

} node; // 'node 구조체'의 별명!

int main(void)
{

    // 이 포인터는 현재 아무 것도 가리키고 있지 않기 때문에 NULL 로 초기화합니다.
    node *list = NULL;

    node *n = malloc(sizeof(node));
    if (n != NULL) // 할당한 메모리가 비어있지 않은 경우에만 건드리자
    {
        (*n).number = 1; // n 포인터 변수가 가리키는 곳(노드)에 가서 number 속성에 2를 넣어라
        // n->number = 1; ☞ 간단히 이렇게 쓰면 됨!!
        n->next = NULL;
        list = n;
    }

    // 이제 list에 다른 node를 더 연결하기 위해 n에 새로운 메모리를 다시 할당합니다.
    n = malloc(sizeof(node));
    if (n != NULL)
    {
        n->number = 2;
        n->next = NULL;
        list->next = n; // 첫번째 노드의 포인터에 새로운 n을 연결
    }

    // 다시 한 번 n 포인터에 새로운 메모리를 할당하고 number과 next의 값을 저장합니다.
    n = malloc(sizeof(node));
    if (n != NULL)
    {
        n->number = 3;
        n->next = NULL;
        // 현재 list는 첫번째 node를 가리키고, 이는 두번째 node와 연결되어 있습니다.
        // 따라서 세 번째 node를 더 연결하기 위해 첫 번째 node (list)의
        // 다음 node(list->next)의 다음 node(list->next->next)를 n 포인터로 지정합니다.
        list->next->next = n;
    }

    // 이제 list에 연결된 node를 처음부터 방문하면서 각 number 값을 출력합니다.
    // 마지막 node의 next에는 NULL이 저장되어 있을 것이기 때문에 이 것이 for 루프의 종료 조건이 됩니다.
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    // 메모리를 해제해주기 위해 list에 연결된 node들을 처음부터 방문하면서 free 해줍니다.
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}