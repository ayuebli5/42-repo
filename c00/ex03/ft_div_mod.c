#include<unistd.h>
#include<stdio.h>

void ft_div_mod(int a, int b, int* div, int* mod)
{
    *div = a/b;
    *mod = a%b;
}

int main(void)
{
    int a;
    int* div;
    int b;
    int* mod;
    int c;
    int d;

    a = 86;
    b = 20;

    div = &c;
    mod = &d;

    ft_div_mod(a,b,div,mod);
    
    // *div = a/b;
    // *mod = a%b;

    printf("%d", a);
    printf("\n");
    printf("%d", b);
    printf("\n");
    printf("%d", c);
    printf("\n");
    printf("%d", d);
    printf("\n");
    // printf("%p", ptra);
    // printf("\n");
    // printf("%p", ptrb);
    // printf("\n");

    // int temp;
    // temp = *ptra;
    // *ptra = *ptrb;
    // *ptrb = temp;

    // printf("%d", a);
    // printf("\n");
    // printf("%d", b);
    // printf("\n");
    // printf("%p", ptra);
    // printf("\n");
    // printf("%p", ptrb);
}