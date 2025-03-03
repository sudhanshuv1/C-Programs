/*
    Check whether a number is prime or not.
*/

#include<stdio.h>

int isPrime(int num)
{
    int flag=1;
    for(int i=2; i<num/2; ++i)
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    return flag;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPrime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.",num);
    return 0;
}