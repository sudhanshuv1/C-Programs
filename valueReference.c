/*
    Call by value and call by reference
*/


#include<stdio.h>

void swap_CallByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("\nInside function swap_CallByValue: \na = %d, b = %d",a,b);
}

void swap_CallByReference(int *a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\nInside function swap_CallByReference: \na = %d, b = %d",*a,*b);
}

int main()
{
    int a,b;
    printf("Enter two numbers: \na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Before calling function swap_CallByValue: \na = %d, b = %d",a,b);
    swap_CallByValue(a,b);
    printf("\nAfter calling function swap_CallByValue: \na = %d, b = %d",a,b);
    printf("\n\nBefore calling function swap_CallByReference: \na = %d, b = %d",a,b);
    swap_CallByReference(&a,&b);
    printf("\nAfter calling function swap_CallByReference: \na = %d, b = %d",a,b);
    return 0;
}