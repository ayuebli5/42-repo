#include<unistd.h>
#include<stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
    printf("%d", *********nbr);
}

int main(void)
{
    int number;
    int* ptr;
    int** ptr2;
    int*** ptr3;
    int**** ptr4;
    int***** ptr5;
    int****** ptr6;
    int******* ptr7;
    int******** ptr8;
    int********* ptr9;
    
    number = 0;
    ptr = &number;
    ptr2 = &ptr;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;

    *********ptr9 = 5;
    printf("%d", *ptr);
    printf("\n");
    printf("%p", &number);
    printf("\n");
    printf("%p", ptr);
    printf("\n");
    printf("%p", ptr2);
    printf("\n");
    printf("%p", ptr3);
    printf("\n");
    printf("%p", ptr4);
    printf("\n");
    printf("%p", ptr5);
    printf("\n");
    printf("%p", ptr6);
    printf("\n");
    printf("%p", ptr7);
    printf("\n");
    printf("%p", ptr8);
    printf("\n");
    printf("%p", ptr9);
    ft_ultimate_ft(ptr9);
    // *********ptr9 = 67;
    // printf("%d", number);
}