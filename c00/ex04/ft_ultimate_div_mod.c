#include<unistd.h>
#include<stdio.h>

void ft_ultimatediv_mod(int* div, int* mod)
{
    *div = a/b;
    *mod = a%b;
}

int main(void)
{
    int a;
    int* a;
    int b;
    int* b;
    int c;
    int d;

    a = 86;
    b = 20;

    a = &c;
    b = &d;

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
}