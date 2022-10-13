typedef struct node // 'node 구조체'를 정의하기 
{
    int number;
    struct node *next; 
    // next라는 포인터 변수에는 여기서 정의하는 지와 똑같은 node라는 struct를 가리킴 -> 그냥 int *next; 가 아니라. 
}
node; // 'node 구조체'의 별명! 
