#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} *LinkList, L;

int main()
{
    printf("Please enter numbers\n");
    int a;
    while (scanf("%d", &a))
    {
        printf("%d\n", a);
        printf("Please enter numbers\n");
    };
    printf("end!!!");
    return 0;
}