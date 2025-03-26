#include<stdio.h>

int isPalindrome(int num)
{
    int reversedNumber = 0, n=num;
    while(n != 0)
    {
        int digit = n%10;
        reversedNumber = reversedNumber*10 + digit;
        n /= 10;
    }
    return (num == reversedNumber) ? 1 : 0;
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(isPalindrome(num))
        printf("%d is a palindrome number.",num);
    else
        printf("%d is not a palindrome number.",num);
    return 0;
}