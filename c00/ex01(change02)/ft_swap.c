#include<unistd.h>
#include<stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main(void)
{
    int a;
    int* ptra;
    int b;
    int* ptrb;

    a = 0;
    b = 2;

    ptra = &a;
    ptrb = &b;

    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
    printf("%p", ptra);
    printf("\n");
    printf("%p", ptrb);
    printf("\n");

    int temp;
    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
    printf("%p", ptra);
    printf("\n");
    printf("%p", ptrb);
}