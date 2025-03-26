/*
    GCD of two numbers using Euclid's algorithm
*/

#include<stdio.h>

int gcd(int a, int b)
{
    
    if(a == 0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int a,b;
    printf("Enter two numbers: \na = ");
    scanf("%d", &a);
    printf("\nb = ");
    scanf("%d", &b);
    printf("\nGCD of %d and %d is : %d",a,b,gcd(a,b));
    return 0;
}