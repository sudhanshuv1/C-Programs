/*
    Find whether a number is a Neon number or not.
*/


#include<stdio.h>
#include<math.h>

// 1 and 9 are Neon numbers.

int isNeon(int num)
{
    int square = pow(num,2),sumOfDigits=0;
    int n = square;
    while(n != 0)
    {
        int digit = n%10;
        sumOfDigits += digit;
        n /= 10;
    }
    return (sumOfDigits == num) ? 1 : 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isNeon(num))
        printf("%d is a Neon number.", num);
    else
        printf("%d is not a Neon number.", num);
    return 0;
}